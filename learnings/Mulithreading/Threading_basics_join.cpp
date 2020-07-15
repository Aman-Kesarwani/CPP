#include <iostream>
#include <thread>

using namespace	std;

void printMsg() {

	std::cout << "All is well";

}

int main() {
	std::thread thread_1(printMsg);	// thread_1 starts running4
	thread_1.join(); // main therad waits for thread_1 to finish
	
	return 0;

}