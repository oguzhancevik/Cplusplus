//Filename :Dusme.cpp
//While dongusu Ucuncu ornek
#include <iomanip>
#include <iostream>

using namespace std;

void main ()
{
	const double G = 9.80665;
	double Yukseklik,KalanMesafe;
	double ZamanAraligi, Zaman;

	cout << setiosflags(ios::showpoint|ios::fixed);
	cout << setprecision(4);

	cout << "Kule Yuksekligini Giriniz = "; 
	cin >> Yukseklik;
	cout << "Zaman Araligini Giriniz   = ";
	cin >> ZamanAraligi;

	cout << "  Zaman    KalanMesafe\n";
	cout << "======================\n";

	Zaman = 0.0;
	KalanMesafe = Yukseklik;
	while(KalanMesafe>0.0)
	{
		cout << setw(7) << setprecision(3)<< Zaman 
			 << setw(15) << setprecision (6) << KalanMesafe << endl;

		Zaman +=ZamanAraligi;
		KalanMesafe = Yukseklik - 0.5*G*pow(Zaman,2.0);
	}
	cout << "======================\n";
	system("pause");

}



