#include <iostream>
#include <string>

class Person {

	
	//string name;
public:
	std::string name;
	int age;
	void set_values (int, std::string);
};

void Person::set_values (int x, std::string n) {
	age = x;
	name = n;
}

int main(){
	std::cout << "test\n";
	Person phil;
	phil.set_values (24, "phil");

	std::cout << "age is  " << phil.age;
	std::cout << "\n";
	std::cout << "name is " << phil.name;
	std::cout << "\n";
	return 0;
}