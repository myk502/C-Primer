#ifndef PERSON
#define PERSON
#include<string>
#include<iostream>
class Person
{
public:
	std::string get_name() const{return name;}
	std::string get_addr()const{return address;}
	Person() = default;
	Person(std::string name, std::string address):name(name), address(address){}
private:
	std::string name;
	std::string address;
};

std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);

#endif
