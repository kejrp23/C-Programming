#include <stdio.h>







int main(int argc, char* argv[]){
		char c;
		FILE* data;
		data = fopen(argv[1], "r");
		int bo;
		int bc;
		int nl;

		while((c = getc(data) != EOF)){
				switch(c){
						case '{':
								++bo;
								break;

						case '}':
								++bc;
								break;

						case '\n':
								++nl;
								break;
						default:
								break;			
			
					};		
			
			
		};						

		printf("Open: %d\nClosed: %d\nLines: %d\n",bo,bc,nl);

		return 0;
};

