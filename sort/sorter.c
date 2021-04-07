#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sorter.h"

void printa(char** a, int left, int right) {
	for(int i=left; i<right; i++) {
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

void quicksort(char** a, int left, int right) {
	if(left >= right) return;

	srand(1);
	int pindex = (rand()%(right-left))+left;
	char* pivot = a[pindex];
	swap(&a[pindex],&a[right]);
	
	//partition
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

	//sort sublists
	quicksort(a, left, pindex-1);
	quicksort(a, pindex+1, right);
}

void sort(char** contents, int size) {
	//count the number of words and the length of the longest word
	int r = 0; //the number of words
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
	char** a;
	a = (char **)malloc(r * sizeof(char*));
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

	//sort the array
	quicksort(a,0,r-1);

	//convert array back to string
	char* output = malloc(size);
	strcpy(output,"");
	for(int i=0; i<r; i++){
		strcat(output,a[i]);
		strcat(output,"\n");
	}
	*contents = output;

	//set them free
	/* for(int i=0; i<r; i++) { */
	/* 	free(a[i]); */
	/* } */
	/* free(a); */
	/* free(output); */
}
