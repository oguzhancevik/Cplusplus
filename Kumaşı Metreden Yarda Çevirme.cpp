//KumasProgrami.cpp : Bu program metrekare olarak verilen Kumas Miktarini 
//					  YardKareye donusturur.

#include <iostream> 
using namespace std;

void main ()
{
	// Sabit ve degisken tanimilamalari
	const float MetredenYarda = 1.196f;
	float MetreKareKumas; //
	float YardKareKumas; //

	//1. Adim : Bilgilerin Girilmesi
	cout << "Metre Kare olarak kumas miktarini giriniz=";
	cin >> MetreKareKumas;

	//2. Adim : Donusum Islemi
	YardKareKumas = MetreKareKumas * MetredenYarda;

	//3. Adim : Sonuclarin Yazdirilmasi
	cout << "Yard Kare olarak Kumas Miktari = " << YardKareKumas << endl;

	system("pause");

}
