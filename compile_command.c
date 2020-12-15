#include<stdio.h>
#include<stdlib.h>

int main() {
	char str[256];
	printf("gccコマンドを入力してください\n");
	printf(">>");
	gets_s(str,sizeof(str));
	printf("%sでコンパイルします\n",str);
	system(str);
	return 0;
}
