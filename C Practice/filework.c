#include <stdio.h>
#include <stdlib.h>


const double pi = 3.14567;

struct employee{
		char first[20];
		char last[20];
		int age;
};


int main(){
		struct employee p1;
		sprintf(p1.first , "Jason");
		sprintf(p1.last,"Pittman");
		p1.age = 29;

		FILE* fptr = fopen("sample.txt","w");
		
		fputs(p1.first,fptr);
		fputs(p1.last,fptr);
		
		
		fclose(fptr);

		return 0;
};
