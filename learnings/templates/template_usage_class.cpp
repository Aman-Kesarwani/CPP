#include <iostream>
#include <string>
using namespace std;

template <class T, class K>

class Person {

private:
	T obj_1_;
	K obj_2_;

public:
	Person(T obj1, K obj2) {
		obj_1_ = obj1;
		obj_2_ = obj2;a
	}

	void Print() {
		cout << obj_1_ << obj_2_ <<endl;
	}
};

int main() {
	
	Person<std::string, int> person_1("Aman", 29);
	person_1.Print();

	//system("pause");

}