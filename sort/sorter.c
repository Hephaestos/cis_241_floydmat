#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sorter.h"

void printa(char** a, int size) {
	for(int i=0; i<size; i++) {
		for(int j=0; a[i][j] != '\0'; j++) {
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

void swap(char** a, char** b) {
	char* tmp = *a;
	*a = *b;
	*b = tmp;
}

void quicksort(char** a, int size, int left, int right) {
	
}

void sort(char** contents, int size) {
	//count the number of words and the length of the longest word
	int r = 1; //the number of words
	int c = 0; //the length of the longest word
	int length = 0;
	for(int i=0; i<size; i++) {
		length++;
		if(length > c) {
			c = length;
		}
		if((*contents)[i] == '\n') {
			length = 0;
			r++;
		}
	}

	//allocate a 2d char array of size r*c
	char* a[r];
	for(int i=0; i<r; i++) {
		a[i] = (char*)malloc(c * sizeof(char));
	}

	//put contents into array
	int j = 0;
	int k = 0;
	for(int i=0; i<size; i++) {
		if((*contents)[i] == '\n') {
			a[j][k] = '\0';
			j++;
			k = 0;
		} else {
			a[j][k++] = (*contents)[i];
		}
	}

	quicksort(a,r,0,r);
}
