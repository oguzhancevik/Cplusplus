#include <iostream>
using namespace std;

void SayilariYaz(float S1, float S2, float S3, float Toplam, float Ort, float KToplam)
{
	cout << endl<< endl;
	cout << "Fn S1     = " << S1<< endl;
	cout << "Fn S2     = " << S2<< endl;
	cout << "Fn S3     = " << S3<< endl;
	cout << "Fn Toplam = " << Toplam << endl;
	cout << "Fn Ort    = " << Ort<< endl;
	cout << "Fn KToplam= " << KToplam<< endl;
}

float ToplamOrt(float S1, float S2, float S3, float& Toplam, float & Ort, float &KToplam)
{
	SayilariYaz(S1, S2, S3, Toplam, Ort, KToplam);

	Toplam = S1 + S2 +S3;
	Ort = Toplam / 3.0;
	KToplam = pow(S1,2) + pow(S2,2) + pow(S3,2);
	S1*=2.0;
	S2+=5.0;

	SayilariYaz(S1, S2, S3, Toplam, Ort, KToplam);
	return sqrt(KToplam);
}


void main ()
{
	float Sayi1=3.0, Sayi2=5.0, Sayi3 =4.0, Tp=0.0, Ort=0.0, Ktp;
	float KareKok;

	KareKok = ToplamOrt(Sayi1, Sayi2, Sayi3, Tp, Ort, Ktp);

	SayilariYaz(Sayi1, Sayi2, Sayi3, Tp, Ort, Ktp);

	cout << "KareKok Degeri = " << KareKok << endl;

	system("pause");

/*	ToplamOrt(2.0, 3.0, 5.0, Tp, Ort, Ktp);


	cout << endl<< endl;
	cout << "Toplam = " << Tp << endl;
	cout << "Ort    = " << Ort<< endl;
	cout << "Ktoplam= " << Ktp<< endl;
	
	system("pause");*/
}
