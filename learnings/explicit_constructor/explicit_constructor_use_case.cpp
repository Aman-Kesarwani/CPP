#include <iostream>
#include <string>

using namespace std;

class Person{

private:
	string name_;

public:
	explicit Person(string name) {
		name_ = name;	}

	void Print() {
		std::cout << name_ << endl;
	}
};

void show(Person person) {
	person.Print();
}
int main() {

	Person person_1("Aman Kesarwani");
	person_1.Print();

/*	Person person_2 = "Hritik";
	person_2.Print();	  */  

	string name = "maggi";

//	show(name);

	getchar();
}