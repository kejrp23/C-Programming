#include <iostream>
#include <fstream>




int main(){
		std::fstream File{"sample1.txt"};

				
		//std::ostream File = "sample1.txt";

		std::string name {"Jason"};
		
		File << name;

		


		return 0;

}

