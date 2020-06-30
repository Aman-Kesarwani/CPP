#include <iostream>
#include <memory>

using namespace std;

class Person {

public:
	Person() {
		cout << "created"<<endl;
	}

	void SendGreetings() {
		cout << "Hello World" << endl;;
	}

	~Person() {
		cout << "destructed" << endl;
	}

};

class Stranger {

private:
	unique_ptr<Person[]> many_persons_;

public:
	Stranger(): many_persons_(new Person[2]) {

	
	}
};

int main() {
	std::unique_ptr<Person> person_1(new Person());
	person_1->SendGreetings();

	{
		std::unique_ptr<Person[]> two_persons(new Person[2]);
	}

	{
		Stranger stranger;
	}
	
	getchar();

}