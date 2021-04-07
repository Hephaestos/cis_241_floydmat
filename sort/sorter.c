/**
 * Sorter
 * use quicksort on some words
 * @author Daniel Floyd
 * @version 1.0
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sorter.h"

/**
 * Prints out the indicated section of the string array
 * For debugging purposes only
 * @param char** a - the string(char*) array
 * @param int left - the index to start reading from
 * @param int right - the index to stop reading at
 */
void printa(char** a, int left, int right) {
	for(int i=left; i<right; i++) {
		for(int j=0; a[i][j] != '\0'; j++) {
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

/**
 * Swaps the locations in memory of two strings (char*)
 * @param char** a - a pointer to the first string
 * @param char** b - a pointer to the second string
 */
void swap(char** a, char** b) {
	char* tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * A recursive implementation of the quicksort algorithm
 * @param char** a - The array of strings to sort
 * @param int left - The index of the array to start sorting at
 * @param int right - The index of the array to stop sorting at
 */
void quicksort(char** a, int left, int right) {
	if(left >= right) return;

	srand(1);
	int pindex = (rand()%(right-left))+left;
	char* pivot = a[pindex];
	swap(&a[pindex],&a[right]);
	
	// partition
	int i = left;
	int j = right-1;
	while(1)
	{
		while(strcmp(a[i],pivot) < 0) {
			i++;
		}
		while(j >= left && strcmp(pivot,a[j]) < 0){
			j--;
		}
		if(i >= j) break;
		swap(&a[i],&a[j]);
	}
	pindex = i;
	swap(&a[pindex], &a[right]);

	// sort sublists
	quicksort(a, left, pindex-1);
	quicksort(a, pindex+1, right);
}

/**
 * Takes a pointer to a string of newline separated words and sorts them
 * @param char** contents - a pointer to the string to sort
 * @param int size - the number of words in the string
 */
void sort(char** contents, int size) {
	// count the number of words and the length of the longest word
	int r = size; // the number of words
	int c = 0; // the length of the longest word
	int file_size = 0; // the number of bytes in the input file

	// find the length of the file and the length of the longest word
	int length = 0;
	// for each word in the file
	for(int i=0; i<r; i++) {
		// count the letters in the word
		while((*contents)[file_size++] != '\n') {
			length++;
			if(length > c) {
				c = length;
			}
		}
		length = 0;
	}

	// allocate a 2d char array of size r*c
	char** a;
	a = (char **)malloc(r * sizeof(char*));
	for(int i=0; i<r; i++) {
		a[i] = (char*)malloc(c * sizeof(char));
	}

	// put contents into array
	int j = 0;
	int k = 0;
	for(int i=0; i<file_size; i++) {
		if((*contents)[i] == '\n') {
			a[j][k] = '\0';
			j++;
			k = 0;
		} else {
			a[j][k++] = (*contents)[i];
		}
	}

	// sort the array
	quicksort(a,0,r-1);

	// convert array back to string
	char* output = malloc(file_size);
	strcpy(output,"");
	for(int i=0; i<r; i++){
		strcat(output,a[i]);
		strcat(output,"\n");
	}
	strcpy(*contents,output);

	// set them free
	for(int i=0; i<r; i++) {
		free(a[i]);
	}
	free(a);
	free(output);
}
