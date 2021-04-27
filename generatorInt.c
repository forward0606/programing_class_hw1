#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MaxSize 1000000

int main(){
	srand(time(NULL));
	for(int i = 0;i<MaxSize;i++){
		printf("%d\n", rand());
	}
	return 0;
}

