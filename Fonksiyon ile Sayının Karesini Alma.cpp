#include <iostream>
using namespace std;

int KareAlti()
{	int Deger;
	Deger = 6 * 6;
	return Deger;
}

float Kare(float Sayi)
{	float KareSonucu;
	KareSonucu = Sayi*Sayi;
	return KareSonucu;
}

void main()
{	int Sonuc;
	float Sonuc1;
	float Sayi1;
	Sonuc = KareAlti()+5;
	cout << "Geri gelen deger = " << Sonuc << endl;
	system("pause");

	cout << "Geri gelen deger = " << KareAlti()*2 << endl;
	system("pause");

	Sonuc1 = Kare(2.5) + 2;
	cout << "2.5 sayisini karesi = " << Sonuc1 << endl;
	system("pause");

	cout << "3.1415 sayisini karesi = " << Kare(3.1415) << endl;
	system("pause");

	cout << "Bir Sayi giriniz = ";
	cin >> Sayi1;

	cout << Sayi1 << " sayisinin karesi = " << Kare(Sayi1) << endl;
	system("pause");

	cout << Sayi1 << " sayisinin bir fazlasinin karesi = " << Kare(Sayi1+1) << endl;
	system("pause");
}
