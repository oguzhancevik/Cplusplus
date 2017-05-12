
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int IsciAdedi;
	int IsciSayaci;
	float  CalismaS;
	float  SaatU;
	float  Maas;
	float  ToplamMaas;
	int Carpim;
	int UstLimit;

	cout <<  "Isci Sayisini Giriniz = ";
	cin >> IsciAdedi;

	ToplamMaas = 0;
	IsciSayaci = 0;
	
	cout << setiosflags(ios::showpoint|ios::fixed);
	cout << setprecision(2);

	while (IsciSayaci < IsciAdedi)
	{
		IsciSayaci ++;
		
		cout << IsciSayaci<< ". iscinin Calisma Saatini Giriniz = ";
		cin >> CalismaS;
		cout << IsciSayaci<< ". iscinin Saat Ucretini Giriniz = ";
		cin >> SaatU;
		Maas = SaatU * CalismaS ;
		cout << IsciSayaci<< ". iscinin Maas = " << Maas << endl <<endl ;
		ToplamMaas += Maas;
	}

	cout <<  " Toplam Maas = " << ToplamMaas <<endl;
	system("pause");
