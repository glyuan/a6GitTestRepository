#include <iostream>
#include "TestGitClass.h"

int main() {
	std::cout<< "hello world! tests below!" << std::endl;
	std::cout<< "2 + 2 = 4"; 
	std::cout<< std::endl;

	TestGitClass test; 

	std::cout<< "testing testGitClass.h " <<std::endl; 
	std::cout<< "output: ";
	test.TestGitClass::output();

	return 0; 
}
