//Source.cpp
#include "Simp.h"

using namespace std;

void FU()
{
	cout << "unexpected error! - bad_exception" << endl;
	throw;
}
void FT()
{
	cout << "unknown error! - terminate" << endl;
	abort();
}

int main()
{
	set_unexpected(FU);
	set_terminate(FT);

	try
	{
		Simp a(8,4);
		cout << a << endl;
		cout <<"Simp on "<< a.NOD() << endl << endl;
		a.simp();
		cout << a;

		cin >> a;
		cout << endl;
		cout <<"Simp on "<< a.NOD() << endl << endl;
		a.simp();
		cout << a;
	}
	catch (Empty)
	{
		cout << " catch (Empty) " << endl;
	}
	catch (Error e)
	{
		cout << " catch (Error)  " << endl;
		cout << e.what() << endl;
	}
	catch (bad_exception)
	{
		cout << " catch (bad_exception)" << endl;
	}
	catch (exception)
	{
		cout << " catch (exception)" << endl;
	}
	catch (Error1 e)
	{
		cout << " catch (E) <= IsVysokosny6() :" << endl;
		cout << e.What() << endl;
	}
	catch (...)
	{
		cout << " catch (...) " << endl;
	}

	return 0;
}
