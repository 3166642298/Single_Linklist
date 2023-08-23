#pragma once
#ifndef ELEM_H
#define ELEM_H
#include<iostream>
using namespace std;
class Elem {
	friend ostream& operator<<(ostream& os, Elem& elem);
	friend bool operator==(Elem e1, Elem e2);
private:
	string name;
	int id;
	int age;
public:
	Elem() = default;
	Elem(string name, int age, int id);
	string Get_name();
	int Get_id();
	int Get_age();

};
#endif // !ELEM_H
