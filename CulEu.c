#include <stdio.h>
#include<stdlib.h>
//機 能：ユークリッドの互除法によりa,bの最大公約数を求める
//戻り値: 最大公約数、(自然数以外が指定されたときは-1)
int euclid(int a, int b){
    int temp;
    if( a < b ) { temp = a; a = b; b = temp; }
    if( b < 1 ) return -1;

    if( a % b == 0 ) return b;
    return euclid( b, a % b );
}
int main(int args ,char *argv[]){
	int n;
	if(args == 3){
    	if((n = euclid(atoi(argv[1]),atoi(argv[2]))) > 0 )
    		printf( "最大公約数は%d\n", n );
	}else{
		printf("Error:引数エラー\n");
		exit(1);
	}
	return 0;
}
