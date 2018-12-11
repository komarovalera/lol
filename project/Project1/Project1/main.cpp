#include <iostream>
#include "minus.h"
#include "del.h"
#include "Plus.h"
#include "ymnoz.h"

using namespace std;

int main()
{
	double a;
	double b;
	int count;
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
	cout << "vvdeite deystvie: 1-vuch, 2-del,3-sum, 4- umn " << endl;
	cin >> count;

	switch (count)
	{

	case 1:
	{
		cout << MySub(a, b) << endl;
		break;
	}
	case 2:
	{
		cout << MyDiv(a, b) << endl;
		break;
	}
	case 3:
	{
		cout << Plus(a, b) << endl;
		break;
	}
	case 4:
	{
		cout << ymnoz(a, b) << endl;
		break;
	}
	
	default:
	{
		cout << "NO" << endl;
	}
	}

	system("pause");
	return 0;
}