#include <iostream>
using namespace std;

void Sirala(float &X1, float &X2)
{
	float Tmp;
	if (X2<X1)
	{
		Tmp = X1;
		X1=X2;
		X2=Tmp;
	}
}

#define Pi 3.141595

//const int P = 3.141595;

void DegerOku(float &S1,float &S2,float &S3,float &S4,float &S5)
{
	cout << "1. sayisi giriniz = "; cin >> S1;
	cout << "2. sayisi giriniz = "; cin >> S2;
	cout << "3. sayisi giriniz = "; cin >> S3;
	cout << "4. sayisi giriniz = "; cin >> S4;
	cout << "5. sayisi giriniz = "; cin >> S5;
}

void DegerYaz(float S1,float S2,float S3,float S4,float S5)
{
	cout << "1. sayisinin degeri = "<< S1 << endl;
	cout << "2. sayisinin degeri = "<< S2 << endl;
	cout << "3. sayisinin degeri = "<< S3 << endl;
	cout << "4. sayisinin degeri = "<< S4 << endl;
	cout << "5. sayisinin degeri = "<< S5 << endl;
}

void main ()
{
	float S1,S2,S3,S4,S5;
	unsigned __int64 a,b;
	DegerOku(S1,S2,S3,S4,S5);
	DegerYaz(S1,S2,S3,S4,S5);

	cout << "Simdi siralama islemi yapilacak \n";
	system("pause");
	//siralama islemi 
	Sirala(S1,S2);
	Sirala(S1,S3);
	Sirala(S1,S4);
	Sirala(S1,S5);

	Sirala(S2,S3);
	Sirala(S2,S4);
	Sirala(S2,S5);

	Sirala(S3,S4);
	Sirala(S3,S5);

	Sirala(S4,S5);

	cout << "Sayilar siralandi. Siralanmis degerler:\a\n";
	DegerYaz(S1,S2,S3,S4,S5);
	system("pause");
}
