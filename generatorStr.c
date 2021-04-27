#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MaxSize 1000000

int main(){
	srand(time(NULL));
	int c;
	for(int i = 0;i<MaxSize;i++){
		for(int j = 0;j<100;j++){
			c = rand() % 52;
			if( c < 26){
				printf("%c",c + 'A');
			}else{
				printf("%c",c -26 + 'a');
			}
		}		
		printf("\n");
	}
	return 0;
}

