#include <stdio.h>
#include <stdlib.h>

int add4_c(int x1, int x2, int x3, int x4){
	int ans = 0;
	
	ans = x1 + x2 + x3 + x4;

	return ans;	
}

// int main(int argc, char* argv[]){
	// if(argc == 5){
		// int x1 = (int)atoi(argv[1]);
		// int x2 = (int)atoi(argv[2]);
		// int x3 = (int)atoi(argv[3]);
		// int x4 = (int)atoi(argv[4]);
// 
		// printf("add4_C: %d\n",add4_c(x1,x2,x3,x4));
	// }
	// else{
		// printf("Invalid arguments\n");
	// }
	// return 0;
// }
