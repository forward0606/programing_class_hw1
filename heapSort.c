#include "heapSort.h"

void makeheapInt(int A[], int n){
	int t;
	for(int i = 0; i < n; i++){
		t = i;
		while(t > 0){
			if(A[t] > A[(t-1)/2]){ swapInt(A+t, A+(t-1)/2); t = (t-1)/2;}
			else{	break;}
		}
	}
}

void _heapSortInt(int A[], int n){
	int t;
	for(int i = n-1;i >= 0; i--){
		t = 0;
		swapInt(A+t,A+i);
		while(t*2+2 < i){
			if(A[t] < A[t*2+1] || A[t] < A[t*2+2]){
				if(A[t*2+2] < A[t*2+1]){ swapInt(A+t, A+t*2+1); t = t*2 + 1;}
				else{ swapInt(A+t, A+t*2+2);	t = t*2 + 2;}
			}
			else{ break;}
		}
	}
}

void heapSortInt(int A[], int n){
	makeheapInt(A, n);
	_heapSortInt(A, n);
}

void makeheapStr(char *A[], int n){
	int t;
	for(int i = 0; i < n; i++){
		t = i;
		while(t > 0){
			if(strcmp(A[t], A[(t-1)/2]) > 0){ swapStr(A+t, A+(t-1)/2); t = (t-1)/2;}
			else{break;}
		}
	}
}

void _heapSortStr(char *A[], int n){
	int t;
	for(int i = n-1;i >= 0; i--){
		t = 0;
		swapStr(A+t,A+i);
		while(t*2+2 < i){
			if(strcmp(A[t], A[t*2+1]) < 0 || strcmp(A[t], A[t*2+2]) < 0){
				if(strcmp(A[t*2+2], A[t*2+1]) < 0){ swapStr(A+t, A+t*2+1); t = t*2 + 1;}
				else{ swapStr(A+t, A+t*2+2);	t = t*2 + 2;}
			}
			else{ break;}
		}
	}
}

void heapSortStr(char *A[], int n){
	makeheapStr(A, n);
	_heapSortStr(A, n);
}

