#include <iostream>
#include <thread>

using namespace	std;

void printMsg() {

	std::cout << "All is well";

}

int main() {
	std::thread thread_1(printMsg);	// thread_1 starts running4
		   
	thread_1.detach(); // thread_1 will roam freely on its own -its a daemon process 
	
	return 0;

}