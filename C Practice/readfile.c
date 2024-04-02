#include <stdio.h>
#include <stdlib.h>

#define MAXLINES 1000

int main(){

		FILE* text;
		text = fopen("test.txt","r");
		char content[MAXLINES];
		char c;
		while ((c = fgetc(text)) != EOF){
						printf("%c",c);
						};



		return 0;
}



