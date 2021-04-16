#include <stdio.h>
#include "file_lib.h"

int main(int argc, char** argv){
	char* contents;
	size_t num_bytes = load_file(argv[1], &contents);
	printf("%s\n", contents);
}
