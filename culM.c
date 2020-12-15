#include<stdio.h>
#include<stdlib.h>
int main(int args ,char *argv[]){
	if(args == 3){
		int i = atoi(argv[1]), j = atoi(argv[2]);
		printf("%d / %d = %d・・・%d\n", i, j, i/j, i%j);
	}else{
		printf("Error:引数エラーです。\n");
		exit(1);
	}
	return 0;
}
