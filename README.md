# Coding Sequence Finder

This is a simple C program that allows the user to input nucleotide sequences and searches for coding sequences (open reading frames, ORFs) within them. A coding sequence is defined as a sequence starting with the start codon ATG and ending with one of the stop codons TAA, TAG, or TGA.

---

## Features

- Reads nucleotide sequences from the user.
- Validates the input to ensure it contains only valid nucleotides: A, T, G, C.
- Searches for coding sequences (ORFs) starting with ATG and ending with TAA, TAG, or TGA.
- Reports the positions of found coding sequences.
- Handles multiple sequences in a single run.

---

## Project Structure

- coding sequence program
  - main.c
  - sequence_tools.c
  - sequence_tools.h<br>
- .gitignore<br>
- LICENSE<br>
- README.md<br>
- requirements.txt</p>

---

## How It Works

The program prompts the user to input a nucleotide sequence.
It checks if the sequence contains only valid nucleotides (A, T, G, C). If not, it prints an error message.
If the sequence is valid, the program searches for coding sequences:
Scans the sequence for the start codon ATG.
From the start codon, it looks for the nearest stop codon (TAA, TAG, or TGA) in-frame.
If a coding sequence is found, it prints the starting and ending positions (1-based indexing).
If no coding sequences are found, it informs the user.
The program loops, allowing the user to enter multiple sequences until the input ends.

---

## Example Usage

<p>Give me a nucleotide sequence: ATGCGATAATAG<br>
Found coding sequence starting with 1 and ending with 7<br>
Give me another nucleotide sequence:</p>

<p>Give me a nucleotide sequence: ATGCXTA<br>
Incorrect nucleotide sequence<br>
Give me another nucleotide sequence:</p>

<p>Give me a nucleotide sequence: AAAATTT<br>
Could not find a coding sequence<br>
Give me another nucleotide sequence:</p>

---

## Input Files

The program expects plain text files containing DNA sequences.<br>
Each sequence must consist only of the characters:<br>
A T G C</p>

Sequences can be provided via stdin redirection or entered manually.</p>

Example input file (dna_sequences.txt):<br>

ATGAAATAG<br>
GATTACA<br>
ATGCGCTAA<br>

---

## Installation

Download the zip file and unzip it. Then open the terminal and go to the "coding sequence program" file.

---

## Requirements

- C compiler, e.g. gcc (GNU Compiler Collection) or clang.
- Terminal / Command Line.

---

## Compilation

To compile the program, use a standard C compiler such as gcc:<br>
gcc -o program main.c sequence_tools.c</p>
This will create a file named program.

---

## Execution

Run the compiled program:<br>
./program

<p>The program will repeatedly prompt for sequences until the user terminates the input (with Ctrl+C on Unix-like systems).</p>

Run the program with file input:<br>
./program < dna_sequences.txt


---

## Notes

- Maximum sequence length is 1000 nucleotides.
- The program only checks for canonical DNA nucleotides (A, T, G, C).
- Positions of coding sequences are reported using 1-based indexing.
- The program reads nucleotide sequences from the user.
- Enter a sequence and press Enter to see the results.

  ---

## License

This project is licensed under the ΜΙΤ License
