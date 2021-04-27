#include "quickSort.h"

int partitionInt(int l, int r, int key, int A[]){
	swapInt(A+l, A+key);
	int i = l+1;
	for(int j = l+1; j<r; j++){
		if(A[j] < A[l]){
			swapInt(A+i,A+j);
			i++;
		}
	}
	swapInt(A+i-1, A+l);
	return i-1;
}

void _quickSortInt(int l, int r, int A[]){
	if(r - l <= 1)	return;
	int k = partitionInt(l, r, l, A);
	_quickSortInt(l, k, A);
	_quickSortInt(k+1, r, A);
}
void quickSortInt(int A[], int n){
	_quickSortInt(0, n, A);
}


int partitionStr(int l, int r, int key, char *A[]){
	swapStr(A+l, A+key);
	int i = l+1;
	for(int j = l+1; j<r; j++){
		if(strcmp(A[j],  A[l]) < 0){
			swapStr(A+i,A+j);
			i++;
		}
	}
	swapStr(A+i-1, A+l);
	return i-1;
}

void _quickSortStr(int l, int r, char *A[]){
	if(r - l <= 1)	return;
	int k = partitionStr(l, r, l, A);
	_quickSortStr(l, k, A);
	_quickSortStr(k+1, r, A);
}

void quickSortStr(char *A[], int n){
	_quickSortStr(0, n, A);
}

