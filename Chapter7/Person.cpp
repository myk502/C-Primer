#include"Person.h"
#include<iostream>
using namespace std;

istream& read(istream& is, Person& person)
{
	is >> person.name >> person.address;
	return is;
}

ostream& print(ostream& os, const Person& person)
{
	os << person.get_name() << " " << person.get_addr();
	return os;
}
