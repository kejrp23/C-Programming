#include <stdio.h>
#include <stdlib.h>


const double pi = 3.14567;

struct employee{
		char first[20];
		char last[20];
		int age;
};

void createfile(char* s){
		FILE* data;
		data = fopen(s,"w");
		char message[] = "Hello World my name is Jason";
		fwrite(message,1,sizeof(message),data);
		fclose(data);
		printf("New File Created Successfully");
};


void readfile(char* x){
		FILE* data = fopen(x,"r");
		char c;
		while((c = getc(data)) != EOF){
				printf("%c",c);
		};
		fclose(data);
};


int main(){
<<<<<<< HEAD
		struct employee p1;
		sprintf(p1.first , "First");
		sprintf(p1.last,"Last");
		p1.age = 29;

		FILE* fptr = fopen("sample.txt","w");
		
		fputs(p1.first,fptr);
		fputs(p1.last,fptr);
		
		
		fclose(fptr);
=======
		
		char name[20];
		scanf("Please Enter A File Name: \n%s",&name);
		createfile(name);
		readfile(name);



>>>>>>> f593201 (updated)

		return 0;
};
