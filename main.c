#include "mergeSort.h"
#include "quickSort.h"
#include "heapSort.h"
#include<string.h>
#define MaxSize 1000000
#define MaxLine 105

void helpmessage(void){
	printf("---help message\n");
	printf("-s heapSort : string heap sort\n");
	printf("-i heapSort\n");
	printf("-s quickSort\n");
	printf("-i quickSort\n");
	printf("-s mergeSort\n");
	printf("-i mergeSort\n");
	return;
}

int inputInt(int **A){
	*A = (int *)malloc(MaxSize * sizeof(int));
	int n = 0;
	while(scanf("%d",*A+n)!=EOF){n++;}
	return n;
}

int inputStr(char ***A){
	*A = (char **)malloc(MaxSize * sizeof(char *));
	int n = 0;
	char line[MaxLine];
	while(fgets(line,MaxLine,stdin)){
		(*A)[n] = strdup(line);
		n++;
	}
	return n;
}

void outputInt(int A[],int n){
	for(int i = 0;i<n;i++){
		printf("%d\n",A[i]);
	}
}

void outputStr(char *A[],int n){
	for(int i = 0;i<n;i++){
		printf("%s",A[i]);
	}
}

int main(int argc, char *argv[]){
	if(argc != 3){
		helpmessage();
	}else{
		if(strcmp(argv[2], "heapSort") == 0){
			if(strcmp(argv[1], "-i") == 0){
				int *A ;
				int n = inputInt(&A);
				heapSortInt(A,n);
				outputInt(A,n);
			}else{
				char **A;
				int n = inputStr(&A);
				heapSortStr(A,n);
				outputStr(A,n);
			}
		}else if(strcmp(argv[2], "quickSort") == 0){
			if(strcmp(argv[1], "-i") == 0){
				int *A ;
				int n = inputInt(&A);
				quickSortInt(A,n);
				outputInt(A,n);
			}else{
				char **A;
				int n = inputStr(&A);
				quickSortStr(A,n);
				outputStr(A,n);
			}
		}else{
			if(strcmp(argv[1], "-i") == 0){
				int *A ;
				int n = inputInt(&A);
				mergeSortInt(A,n);
				outputInt(A,n);
			}else{
				char **A;
				int n = inputStr(&A);
				mergeSortStr(A,n);
				outputStr(A,n);
			}
		}
	}	
	return 0;
}

/*
 * -s heapSort
 * -i heapSort
 * -s quickSort
 * -i quickSort
 * -s mergeSort
 * -i mergeSort
 */
