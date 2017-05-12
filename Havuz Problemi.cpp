//Filename :Havuz.cpp
//While dongusu Ikinci ornek
#include <iomanip>
#include <iostream>
using namespace std;
void main()
{
	double HavuzBoyu, YuzucuBoyu;
	double KulacBoyu, KalanMesafe;
	int Sayac;
	cout << setiosflags(ios::showpoint|ios::fixed);
	cout << setprecision(2);
	cout << "Havuz Boyunu Metre olarak Giriniz =";
	cin >> HavuzBoyu;
	cout << "Yuzucu Boyunu Metre olarak Giriniz =";
	cin >> YuzucuBoyu;
	KulacBoyu = YuzucuBoyu /1.5;
	cout << "Kulac boyu = " << KulacBoyu << endl;
	cout << "Havuz boyu = " << HavuzBoyu << endl;
	KalanMesafe = HavuzBoyu;
	Sayac=0;

	while (KalanMesafe >= KulacBoyu)
	{	Sayac++;
		KalanMesafe -= KulacBoyu;
		cout << setw(3) << Sayac << ". Kulactan sonra Kalan mesafe = " 
			 << setw(6) << KalanMesafe << endl;	
	}
	if (KalanMesafe > 0)
		Sayac++;
	cout << "Yuzucu Karsi Tarafa Ulasti...!\n";
	cout << "Toplam " << Sayac << " Kulac Atti.\n";
	system("pause");
}
