#include <iostream>
using namespace std;

void DegerTut(double D[],int Byt)
{
	for(int i=0; i<Byt; i++)
		D[i] = rand()/32767.0;
}


void DiziYaz(double D[], int Byt, char Isim [])
{
	cout << "===> " << Isim <<  " <===" << endl;
	cout << "====================\n";
	for(int i=0; i<Byt; i++)
		cout << i<< "   " << D[i] << endl;
}

void main()
{
	const int Boyut = 1000;
	double Bir[Boyut],Iki[Boyut];

	DegerTut(Bir,1000);
	DegerTut(Iki,1000);

	DiziYaz(Bir, 10, "Bir");
	DiziYaz(Iki, 10, "Iki");
	system("pause");

}
