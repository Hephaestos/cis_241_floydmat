/**
 * Sorting Assignment
 * CIS 241 Section 02
 * Winter 2020
 *
 * @author Daniel Floyd
 * @version 1.0
 */
#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
	
/*
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 */
int main(int argc, char** argv){
	if(argc != 3) {
		printf("Usage: ./a.out FILE_TO_READ FILE_TO_WRITE\n");
		return 1;
	}

	// get filenames from args
	char* read_filename = argv[1];
	char* write_filename = argv[2];

	// Read the original file.
	char* contents;
	size_t file_size = load_file(read_filename, &contents);

	// Find the number of words in the file
	int size = 0;
	for(int i=0; i<file_size; i++) {
		if(contents[i] == '\n') size++;
	}
	// Sort the file.
	sort(&contents, size);

	// Write out the new file.
	save_file(write_filename, contents, file_size);
	free(contents);
	return 0;
}
