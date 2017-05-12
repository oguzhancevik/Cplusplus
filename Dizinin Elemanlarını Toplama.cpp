#include <iostream>
#include <iomanip>
using namespace std;

void DiziOku(int Dz [], int Byt)
{	for (int i=0; i<Byt; i++){
		cout << "Dizinin " << i << ". elemanina deger giriniz = ";
		cin >> Dz[i];
	}
}
void DiziYaz(const int Dz[], float Ort, int Byt)
{	cout  <<"Sira      Sayi      Fark\n";
	cout  <<"------------------------\n";

	for (int i=0; i<Byt; i++)
		cout << setw(4) << i << setw(10) << Dz[i] << setw(10) << Dz[i] - Ort << endl;
	cout  <<"------------------------\n";
}
int DiziTopla(int Dz[], int Byt)
{	float Toplam=0;
	for (int i=0; i<Byt; i++)
		Toplam+=Dz[i];
	return Toplam;
}
void main ()
{	const int Boyut=8;
	int Dizi[Boyut];
	int Toplam;
	float Ort; 

	DiziOku(Dizi,Boyut);

	Toplam = DiziTopla(Dizi,Boyut);
	Ort = Toplam/Boyut;

	DiziYaz(Dizi,Ort,Boyut);

	system("pause");
}
