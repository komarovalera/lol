
#include <iostream> 
#include "ymnoz.h"
#include "Plus.h"
using namespace std; 

int main() 
{ 
	double a, b;
	int count;
	cout << "3. �����" << endl;
	cout << "4. ���������" << endl;
	cout << "����� ����� ��������: " << endl;
	cin >> count;
	switch (count)
	{
	case 3:
		cout << Plus(10, 3) << endl;
		break;
	case 4:
		cout << ymnoz(10, 3) << endl;
		break;
	}
	system("pause");  
	return 0; 
}