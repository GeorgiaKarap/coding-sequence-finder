#ifndef SEQUENCE_TOOLS_H
#define SEQUENCE_TOOLS_H

int is_valid_sequence(const char *seq);
int find_coding_sequences(const char *seq, int positions[][2], int max_codons);

#endif // SEQUENCE_TOOLS_H
