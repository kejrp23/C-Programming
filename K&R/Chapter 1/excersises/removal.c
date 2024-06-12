#include <stdio.h>
#include <stdlib.h>



char previous;
char buffer[256];
char c;
char space ;




int main(){
		
		
		FILE* input;
		input = fopen("comments.c","r");

		FILE* output;
		output = fopen("comments(clean).c","a");


	
		while((c = getc(input)) != EOF){
				if (c == '/'){
						while ((c = getc(input)) != '\n'){
						//	fputc(space,output);
						;
						};
				}
				else {
						fputc(c,output);
				};
						
		};


		return 0;
};




/*
void capture(){
	
		while((c = getc(input)) != EOF){
			int count = 0;
			buffer[count]=c;
			++count;
			if((c = '\n') && buffer[0] && buffer[1] == '/'){
					count = 0;
			}
			else {
			fputc(c,output);	
			};
		};
};

*/
