#include <string.h>
#include "sequence_tools.h"

int is_valid_sequence(const char *seq) {
    for (int i = 0; seq[i]; i++) {
        if (seq[i] != 'A' && seq[i] != 'T' && seq[i] != 'G' && seq[i] != 'C') {
            return 0;
        }
    }
    return 1;
}

int find_coding_sequences(const char *seq, int positions[][2], int max_codons) {
    int codons = 0;
    int length = strlen(seq);

    for (int i = 0; i + 2 < length; i++) {
        if (seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G') {
            for (int k = i + 3; k + 2 < length; k += 3) {
                if ((seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'A') ||
                    (seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'G') ||
                    (seq[k] == 'T' && seq[k+1] == 'G' && seq[k+2] == 'A')) {
                    if (codons < max_codons) {
                        positions[codons][0] = i + 1;
                        positions[codons][1] = k + 1;
                    }
                    codons++;
                    break;
                }
            }
        }
    }
    return codons;
}
