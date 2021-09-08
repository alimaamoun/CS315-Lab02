#include <stdlib.h>
#include <stdio.h>


int add4_c(int,int,int,int);
int add4_s(int,int,int,int);

int main(int argc, char **argv){
	if(argc == 5){
		int a = (int)atoi(argv[1]);
		int b = (int)atoi(argv[2]);
		int c = (int)atoi(argv[3]);
		int d = (int)atoi(argv[4]);

		int ans_c = add4_c(a,b,c,d);
		printf("C: %d\n",ans_c);
		int ans_s = add4_s(a,b,c,d);
		printf("Asm: %d\n",ans_s);
		
	}else{
		printf("Invalid arguments");
	}
	return 0;
}
