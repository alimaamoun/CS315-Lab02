#include <stdlib.h>
#include <stdio.h>

int quadratic_c(int, int, int, int);
int quadratic_s(int, int, int, int);

int main(int argc, char **argv){
	if(argc == 5){
			int x = (int)atoi(argv[1]);
			int a = (int)atoi(argv[2]);
			int b = (int)atoi(argv[3]);
			int c = (int)atoi(argv[4]);
	
			int ans_c = quadratic_c(x,a,b,c);
			printf("C: %d\n",ans_c);
			int ans_s = quadratic_s(x,a,b,c);
			printf("Asm: %d\n",ans_s);
			
		}else{
			printf("Invalid arguments");
		}
		return 0;
}
