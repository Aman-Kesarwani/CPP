#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Person {

private:
	int age_;
	string name_;

public:
	Person(int age, string name) {
		age_ = age;
		name_ = name;
		cout <<name << " : created"<<endl;
	};
	
	void SendGreetings() {
		cout << "Hello" << endl;
	}

	~Person() {
		cout << name_ << " : Destructed"<<endl;
	}

	void Print() {
	
		std::cout << "Name: "<<name_ <<endl;
		std::cout << "Age: " << age_ << endl;
	}
};

int main() {

	std::shared_ptr<Person> person_ptr_0 = make_unique<Person>(29, "Aman");
	{
		std::shared_ptr<Person>person_ptr_1(new Person(35, "Sachin"));

		std::shared_ptr<Person> person_ptr_2(person_ptr_1);

		person_ptr_2->Print();
		
		std::shared_ptr<Person> person_ptr_3(person_ptr_0);

		person_ptr_3->Print();
	}
	
	getchar();
}