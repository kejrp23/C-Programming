#include <stdio.h>



int main(int argc, char* argv[0]){

		printf("Args Total: %d\nValues:",argc);

		for (int i = 0; i < argc; ++i){
				printf("\t%d:%s\n",i+1,argv[i]);
					
		};

		return 0;
};
