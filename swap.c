#include "swap.h"


void swapInt(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


void swapStr(char **a, char **b){
	char *temp = *a;
	*a = *b;
	*b = temp;
}
