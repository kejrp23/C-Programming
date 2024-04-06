#include <stdio.h>

char buffer[200];

int main(int argc, char* argv[0]){

		FILE* fp;
		fp = fopen(argv[1],"r");
		if (fp != NULL){
			char c;
			while ((c = getc(fp)) != EOF){
						printf("%c",c);
				};
		}
		else{
				printf("Error: Invalid Argument\n Example: ./runfile.exe filename.txt");
		};
								


		return 0;
};
