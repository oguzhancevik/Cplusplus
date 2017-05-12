#include <iostream>
using namespace std;

struct DataT
{
	int No;
	char Adi[20];
	DataT *Link;
};

void main()
{
	int No;
	DataT *Head, *p;
	Head = p = 0;

	cout << "No giriniz = ";
	cin >> No;
	while(No)
	{
		p = new DataT;
		p->No= No;
		cout << "Adi giriniz = ";
		cin >> p->Adi;

		p->Link = Head;
		Head = p;

		cout << "No giriniz = ";
		cin >> No;
	}

	p=Head;
	while(p)
	{
		cout << p->No << " " <<  p->Adi << endl;
		p = p->Link;
	}

	system("pause");

}
