#include <stdio.h>




#define upper 300
#define step 20
#define lower 75



double fahr, celsius;

int main(){

		fahr = lower;

		for (fahr =0; fahr <= upper; fahr = fahr +20){
			printf("%3.0fF,%6.2fC\n",fahr,(5.0/9.0)*(fahr-32));	
		}	

		return 0;
}
