#include<iostream>
using namespace std;

void DiziOku(int d [], int Boyut)
{	int i;
	for (i=0; i < Boyut; i++)
	{
		cout << i << ". eleman icin deger giriniz = ";
		cin >> d[i];
	}
}

void DiziYaz(int d [], int Boyut)
{	int i;
	for (i=0; i < Boyut; i++)
		cout << i << ". eleman degeri = " << d[i] << endl;
}

int DiziOrtala(int d[],int Boyut)
{
	int Toplam=0,Ort;
	int i;
	for (i=0; i < Boyut; i++)
		Toplam+=d[i];
	Ort = Toplam/Boyut;
	return Ort;
}
int DiziOrtala(int d[],int Baslangic, int Bitis)
{
	int Toplam=0,Ort;
	int i;
	for (i=Baslangic; i<=Bitis; i++)
		Toplam+=d[i];
	Ort = Toplam/(Bitis-Baslangic+1);
	return Ort;
}
int DiziEkBul(int d[],int Byt)
{
	int i,EK;
	EK=d[0];
	for (i=1; i < Byt; i++)
		if (d[i] < EK)
			EK=d[i];
	return EK;
}
void main()
{
	const int Boyut =10;
	int d[Boyut];
	int Ortalama;
	DiziYaz(d,Boyut);
	system("pause");
	system("cls");
	DiziOku(d,Boyut);
	DiziYaz(d,Boyut);
	system("pause");
	Ortalama = DiziOrtala(d,Boyut);
	cout << "Dizinin ortalamasi =" << Ortalama << endl;
	cout << "Dizinin ortalamasi =" << DiziOrtala(d,Boyut) << endl;
	cout << "Dizinin ortalamasi =" << DiziOrtala(d,1) << endl;
	cout << "Dizinin ortalamasi =" << DiziOrtala(d,3) << endl;
	cout << "Dizinin ortalamasi =" << DiziOrtala(d,4) << endl;
	cout << "Dizinin 2 ile 4 arasi degerlerini ortalamasi =" << DiziOrtala(d,2,4) << endl;
	cout << "Dizinin en kucuk elemani =" << DiziEkBul(d,Boyut) << endl;

	system("pause");
}
