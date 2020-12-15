#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
	FILE *fpout;

	if (argc != 3) {
		printf("引数が不正です。\n");
		return 1;
	}
	if ((fpout = fopen(argv[1],"a")) == NULL) {
		printf("ファイルが見つかりませんでした。\n");
		return 1;
	}

	if ((strcmp(argv[2], "scan")) == 0) {
		fprintf(fpout, "    scanf(\"%%d\", &i);\n");
	} else if ((strcmp(argv[2], "print_enter")) == 0) {
		fprintf(fpout, "    printf(\"Enter val >> \");\n");
	} else if ((strcmp(argv[2], "print_val")) == 0) {
		fprintf(fpout, "    printf(\"%%d\", i);\n");
	} else if ((strcmp(argv[2], "print_rand")) == 0){
		fprintf(fpout, "        printf(\"%%d\\n\", GetRand(0,10));\n");
	} else {
		printf("ERROR\n");
	}
	fclose(fpout);
	return 0;
}
