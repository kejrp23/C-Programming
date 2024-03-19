#include <stdio.h>
#include <stdlib.h>


const double pi = 3.14567;



int main(){

		FILE* fptr = fopen("sample.txt","w");
		
		char name[20] = "Jason";
		fputs(name,fptr);
		
		
		fclose(fptr);

		return 0;
};
