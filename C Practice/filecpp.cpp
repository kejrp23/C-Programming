#include <iostream>
#include <fstream>

struct employee{
		char first[20];
		char last[20];
		int age;
};

int main(){
		struct employee p1;
		p1.first = "Jason";
		
		
		
		
		std::fstream File{"sample1.txt"};

				
		//std::ostream File = "sample1.txt";

		std::string name {"Jason"};
		
		File << name;

		


		return 0;

}

