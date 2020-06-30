#include <iostream>
using namespace std;

template <class T>

void Print(T obj) {
	cout << "Template: " << obj << endl;
}

void Print(int obj) {
	cout << "Non-Template: " << obj << endl;
}

template<class T>
void Apply() {
	cout << "Apply"<< endl;
}

int main() {

	Print(5);

	Print<>(8);

	Apply<float>();

	//Apply(); // compile time error

	getchar();

}