#include "Elem.h"
ostream& operator<<(ostream& os, Elem& elem)
{
	os << "ÐÕÃû£º" << elem.Get_name() << "ÄêÁä£º" << elem.Get_age() << "±àºÅ£º" << elem.Get_id();
	return os;
}
bool operator==(Elem e1, Elem e2)
{
	return e1.Get_name() == e2.Get_name() && e1.Get_age() == e2.Get_age() && e1.Get_id() == e2.Get_id();
}
Elem::Elem(string name, int age, int id)
{
	this->name = name;
	this->age = age;
	this->id = id;
}

string Elem::Get_name()
{
	return this->name;
}

int Elem::Get_id()
{
	return this->id;
}

int Elem::Get_age()
{
	return this->age;
}
