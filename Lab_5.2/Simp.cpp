//Simp.cpp
#include "Simp.h"
#include <iostream>
#include <string>
#include<sstream>
#include<exception>

using namespace std;

Simp::Simp()
	:chis(1), znam(1)
{
}
Simp::Simp(int c, int z)
{
	setC(c), setZ(z);
}

void Simp::setC(int value)
{
	chis = value;
}


void Simp::setZ(int value)
{
	znam = value;
}


/*
void Simp::setZ(int value)throw()
{
	if (value == 0)
		throw bad_exception();
	znam = value;
}
*/

/*
void Simp::setZ(int value)throw(bad_exception)
{
	if (value == 0)
		throw bad_exception();
	znam = value;
}
*/

/*
void Simp::setZ(int value)throw(Error)
{
	if (value == 0)
		throw Error("znamenk = 0");
	znam = value;
}
*/

/*
void Simp::setZ(int value) throw(Error1)
{
	if (value == 0)
		throw Error1("znamenk = 0");
	znam = value;
}
*/

/*
void Simp::setZ(int value) throw(Empty)
{
	if (value == 0)
		throw Empty();
	znam = value;
}
*/

void Simp::simp()
{
	int a = NOD();
	while (a != 1)
	{
		setC(getC() / a);
		setZ(getZ() / a);
		a = NOD();
	}
}

int Simp::NOD()
{
	int a = getC();
	int b = getZ();
	int t = 0;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

ostream& operator << (ostream& out, const Simp& x)
{
	out << x.getC() << "\n--\n" << x.getZ() << endl;
	return out;
}
istream& operator >> (istream& in, Simp& x)
{
	int f, s;
	do
	{
		cout << "Vvedit nepravil drib:" << endl;
		cout << "Chis = "; in >> f;
		cout << "Znam = "; in >> s;
	} while (abs(f) < abs(s)); //У непр. др. чисельник більший або рівний знаменнику.

	x.setC(f), x.setZ(s);
	return in;
}


