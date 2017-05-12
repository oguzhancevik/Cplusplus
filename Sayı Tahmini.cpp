//Filename :Havuz.cpp
//While dongusu Ikinci ornek
#include <math.h>
#include <iostream>
using namespace std;

void main()
{
	int TutulanSayi,Tahmin;
	int Sayac = 0;

	TutulanSayi = rand();
	cout << "Bir Sayi Giriniz=";
	cin >> Tahmin;
	Sayac++;
	while (Tahmin!=TutulanSayi)
	{
		if (Tahmin<TutulanSayi)
			cout<< "Daha BUYUK bir sayi girimelisiniz...\n";
		else if (Tahmin>TutulanSayi)
			cout<< "Daha KUCUK bir sayi girimelisiniz...\n";

		cout << "Bir Sayi Giriniz=";
		cin >> Tahmin;
		Sayac++;
	}

	cout << "Tebrikler \a\a" << Sayac << " adet tahminde buldunuz\n";
	system("pause");

}
