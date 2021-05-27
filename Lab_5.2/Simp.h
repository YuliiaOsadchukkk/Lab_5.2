//Simp.h
#pragma once
#include <iostream>
#include <string>
#include<sstream>
#include "Empty.h"
#include "Error.h"
#include "Error1.h"


using namespace std;
class Simp
{
	int chis, znam;
public:
	Simp();
	Simp(int c, int z);

	int getC() const { return chis; }
	int getZ() const { return znam; }

	void setC(int value);
	void setZ(int value);

	int NOD();
	void simp();

	friend istream& operator >> (istream& in, Simp& x);
	friend ostream& operator << (ostream& out, const Simp& x);

};
