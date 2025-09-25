#include <stdio.h>
#include "sequence_tools.h"

int main() {
    char seq[1000];
    int positions[100][2];

    printf("Give me a nucleotide sequence: ");

    while (scanf("%s", seq) == 1) {
        if (!is_valid_sequence(seq)) {
            printf("Incorrect nucleotide sequence\n");
        } else {
            int codons = find_coding_sequences(seq, positions, 100);
            if (codons == 0) {
                printf("Could not find a coding sequence\n");
            } else {
                for (int i = 0; i < codons && i < 100; i++) {
                    printf("Found coding sequence starting with %d and ending with %d\n",
                           positions[i][0], positions[i][1]);
                }
            }
        }
        printf("Give me another nucleotide sequence:\n");
    }

    return 0;
}
