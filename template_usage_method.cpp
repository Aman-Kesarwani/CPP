#include <iostream>
#include <string>
using namespace std;

template< class T, class J>

void Print(T obj1, J obj2) {

	cout << "Obj 1: " <<obj1<< endl;
	cout << "Obj 2: " << obj2 << endl;
	cout << "Next" << endl;
}

int main() {

	Print<string, int>("Aman", 29);
	Print<char, float>('a', 21.0);

	getchar();
}