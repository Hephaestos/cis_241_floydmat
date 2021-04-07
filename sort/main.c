#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
	
/*
 * Read the file from the command-line.
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 *
 */

int main(int argc, char** argv){
	/* if(argc != 3) { */
	/* 	printf("Usage: ./a.out FILE_TO_READ FILE_TO_WRITE\n"); */
	/* 	return 1; */
	/* } */
	/* char* read_filename = argv[1]; */
	/* char* write_filename = argv[2]; */

	// Read the original file.
	char* contents;
	/* size_t size = load_file(read_filename, &contents); */

	// Sort the file with the function you wrote.
	contents = "dz\nczz\nbz\naz";
	int size = 12;
	sort(&contents, size);

	// Write out the new file.
	/* save_file(write_filename, contents, size); */
	return 0;
}
