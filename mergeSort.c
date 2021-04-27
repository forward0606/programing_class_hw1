#include "mergeSort.h"



void _mergeSortInt(int l, int r, int A[], int temp[]){
	if( r - l <= 1){ return;}
	int mid = (l+r)/2;
	_mergeSortInt(l, mid, A, temp);
	_mergeSortInt(mid, r, A, temp);
	int i = l, j = mid;
	for(int k = l;k<r;k++){
		if(i != mid && (A[i] <= A[j] || j >= r)){
			temp[k] = A[i], i++;
		}
		else{	temp[k] = A[j], j++;}
	}
	for(int k = l;k<r;k++){ A[k] = temp[k];}
}

void mergeSortInt(int A[], int n){
	int temp[n];
	_mergeSortInt(0, n, A, temp);
}

void _mergeSortStr(int l, int r, char *A[], char *temp[]){
	if( r - l <= 1){ return;}
	int mid = (l+r)/2;
	_mergeSortStr(l, mid, A, temp);
	_mergeSortStr(mid, r, A, temp);
	int i = l, j = mid;
	for(int k = l;k<r;k++){
		if(i != mid && (j>=r || strcmp(A[i], A[j]) <= 0)){
			temp[k] = A[i], i++;
		}
		else{	temp[k] = A[j], j++;}
	}
	for(int k = l;k<r;k++){ A[k] = temp[k];}
}

void mergeSortStr(char *A[], int n){
	char *temp[n];
	_mergeSortStr(0, n, A, temp);
}

