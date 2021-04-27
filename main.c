#include "mergeSort.h"
#include "quickSort.h"
#include "heapSort.h"

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

int main(int argc, char *argv[]){
	if(argc != 3){
		helpmessage();
	}else{
		if(strcmp(argv[2], "heapSort") == 0){
			if(strcmp(argv[1], "-i") == 0){
				//UNFINISHED
				inputInt();
				heapSortInt();
			}else{

			}
		}else if(strcmp(argv[2], "quickSort") == 0){
			if(strcmp(argv[1], "-i") == 0){

			}else{

			}

		}else{
			if(strcmp(argv[1], "-i") == 0){

			}else{

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
