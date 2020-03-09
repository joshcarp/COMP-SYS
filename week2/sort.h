#ifndef SORT_H
#define SORT_H

#include<stdio.h>
#include<stdlib.h>

int int_comparator (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

void sort_int_array(int* arr, int num_elements){
	qsort(arr, num_elements, sizeof(int), int_comparator);
}

#endif /* SORT_H */
