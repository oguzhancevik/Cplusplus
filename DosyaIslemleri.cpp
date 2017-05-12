#include <iostream>
#include <iomanip>
#include <fstream>			//1 adim: Dosya islemleri icin gerekli kutuphaneyi dahil et 
using namespace std;

void main()
{
	int OgrNo;
	char Adi[20];
	char Soyadi[20];
	int V,F;
	float Ort;
	int OgrAdedi;

	//DOSYA YAZMA ISLEMLERI
	
	ofstream DY;			//2 adim: yeni bir cikis kanali tanimla
	DY.open("Veriler.txt");	//3 adim: yeni kanal ile veriler.txt iliskilendir

	cout << "Ogrenci Adedini giriniz = " ;
	cin >> OgrAdedi;

	for (int i=0; i<OgrAdedi; i++)
	{
		cout << "Ogrenci No giriniz       =";
		cin >> OgrNo;
		cout << "Ogrenci Adini giriniz    =";
		cin >> Adi;
		cout << "Ogrenci Soyadini giriniz =";
		cin >> Soyadi;
		cout << "Vize notunu giriniz      =";
		cin >> V;
		cout << "Final notunu giriniz     =";
		cin >> F;

		cout << OgrNo << " " << Adi << " " << Soyadi << " " << setw(7) << V << setw(7) << F << endl;
		//4.adim: verileri dosyaya gonder
		DY << endl << OgrNo << " " << Adi << " " << Soyadi << " " << setw(7) << V << setw(7) << F ;
	}

	DY.close();		//5. adim: Dosyayi kapat
	system("pause");


	//DOSYA OKUMA ISLEMLERI
	
	ifstream DO;				//2. adim: Dosya okumak icin yeni bir kanal tanimla
	DO.open("Veriler.txt");		//3. adim: Yeni kanal ile okunacak dosyayi iliskilendir
	while(!DO.eof())			//4. adim: Dosya sonuna ulasildimi kontrol et
	{
		DO >> OgrNo >> Adi >> Soyadi >> V >> F;		//5. adim: Dosyadan bir kayit oku
		Ort=V*.4+F*.6;
		cout << OgrNo << " " << Adi << " " << Soyadi << " " << setw(7) 
			 << V << " " <<  F << " " << Ort << endl;
	}
	system("pause");

	DO.close();					//6. adim: Dosyayi kapat
}
