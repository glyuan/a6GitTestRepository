#include <iostream>
#include "TestGitClass.h"

int main() {
	std::cout<< "hello world!" << std::endl;
	std::cout<< "test things here"<<std::endl;
	std::cout<< "2 + 2 = "; 
	std::cout<< std::endl;

	TestGitClass test; 

	std::cout<< "testing testGitClass.h " <<std::endl; 
	std::cout<< "output: ";
	test.TestGitClass::output();

	return 0; 
}
