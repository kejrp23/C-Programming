
#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define EXIT 3

int main(int argc, char* argv[]){
	
		FILE* data;
		data = fopen(argv[1],"r");

	
		int nl, nw,nc,state=0;
		char c;
		
		state = OUT;
		nl=nw=nc=0;
		while((c = getc(data)) !=EOF){
				++nc;	
				if(c =='\n'){
						++nl;
				}
				if(c ==' '|| c =='\n'||c =='\t'){
						state = OUT;
				}
				else if (state == OUT){
						state = IN;
						++nw;
				}
		
		};
		
		printf("Lines: %d, Words: %d, Characters:  %d\n",nl,nw,nc);
		return 0;
};
