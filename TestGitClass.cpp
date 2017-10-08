#include "TestGitClass.h"
#include <iostream> 

TestGitClass::TestGitClass() {
	TestGitClass::content = 1; 
}

void TestGitClass::output() {
	std::cout << "This is my content: " << TestGitClass::content << std::endl; 
}
