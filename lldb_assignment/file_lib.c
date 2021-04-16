#include "file_lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t load_file(char* path, char** contents){
	struct stat buffer;
	int status;
	status = stat(path, &buffer);
	if(status != 0){
		perror("File status error.");
		return -1;
	}
	
	size_t size = buffer.st_size;
	FILE* fp = fopen(path, "r");

	if(fp == NULL){
		perror("Error opening file.");
		return -1;
	}
	*contents = malloc(size * sizeof(char));
	int read_bytes = fread(*contents, 1, size, fp);
	if(read_bytes != size){
		perror("Error reading file.");
		return -1;
	}
	fclose(fp);

	return size;
}

size_t save_file(char* path, char* contents, size_t size){
	FILE* fp = fopen(path, "w");
	if(fp == NULL){
		perror("Error opening file for write.");
		return -1;
	}
	int written_bytes = fwrite(contents, size, 1, fp);
	fclose(fp);
	return written_bytes;
}
