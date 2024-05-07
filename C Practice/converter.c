#include <stdio.h>
#include <stdlib.h>




int main(int argc, char* argv[]){

	FILE* data;
	data = fopen("policynumbers.txt","r");
	FILE* output;
	output = fopen("policynumber(clean).txt","w");

	char c;
	while ((c=getc(data) != EOF)){
					if(c == '\n'){
						putc(',',output);	
						};

			putc(c,output);

			};
	printf("Finished");		
		return 0;
};
