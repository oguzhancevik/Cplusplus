#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct DataT
{
	int No;
	char Adi[20],Soyadi[20];
	int Vize,Final;
	float Ort;
};

DataT VeriOku()
{
	DataT D;
	cout << "Adi giriniz    ="; cin >> D.Adi;
	cout << "Soyadi giriniz ="; cin >> D.Soyadi;
	cout << "Vize giriniz   ="; cin >> D.Vize;
	cout << "Final giriniz  ="; cin >> D.Final;
	cout << "Ort giriniz    ="; cin >> D.Ort;
	return D;
}

void VeriYaz(DataT D)
{
	system("cls");
	cout << "====================================================\n";
	cout << "No             =" << D.No << endl;
	cout << "Adi giriniz    =" << D.Adi << endl;
	cout << "Soyadi giriniz =" << D.Soyadi << endl;
	cout << "Vize giriniz   =" << D.Vize << endl;
	cout << "Final giriniz  =" << D.Final << endl;
	cout << "Ort giriniz    =" << D.Ort << endl;
	cout << "====================================================\n";
}

void VeriListele(DataT *D, int KayitAdedi)
{
	char ch1='A', ch2;
	int KayitNo=0;
	
	VeriYaz(D[0]);
	cout << "KayitNo = " << KayitNo << endl;
	cout <<"Cikis \'Q\', UstOk:IlkK,  AltOk:SonKayit,  SagOk:SonrakiKayit, SolOk:OncekiKayit\n";

	while(ch1!='Q')
	{
		ch1=getch();
		if (ch1==-32)
		{
			ch2=getch();
			switch(ch2)
			{
				case 72: KayitNo=0; break;
				case 80: KayitNo=KayitAdedi-1; break;
				case 77: if (KayitNo<KayitAdedi-1) KayitNo++; break;
				case 75: if (KayitNo) KayitNo--; break;
			}
		}
		VeriYaz(D[KayitNo]);
		cout << "KayitNo = " << KayitNo << endl;
		cout <<"Cikis \'Q\', UstOk:IlkK,  AltOk:SonKayit,  SagOk:SonrakiKayit, SolOk:OncekiKayit\n";
		ch1 = toupper(ch1);
	}
}

void main ()
{
	DataT Veri;
	DataT Veriler[10];

	int No;
	int KayitAdedi;
	ofstream Cikis;
	ifstream Giris;
	char *p;
/*
	char ch1,ch2;
	while(1)
	{
		ch1=getch();
		ch2=getch();
		cout << "ch1= \'" << ch1 << "\' "<< (int)ch1 << endl;
		cout << "ch2= \'" << ch2 << "\' "<< (int)ch2 << endl;

	}

	*/
/*	//Binary dosyaya Kayit
	Cikis.open("TestVerisi.dat",ios::out|ios::binary);
	cout << "No giriniz  (Cikis = 0)   ="; cin >> No;
	while (No)
	{
		Veri = VeriOku(); 
		Veri.No = No;
		p = (char *) &Veri;
		for (int i=0; i<sizeof(Veri); i++)
			cout << int (p[i]) << " " << p[i] << endl;
		system("pause");
		Cikis.write((char*)&Veri,sizeof(Veri));
		cout << "No giriniz  (Cikis = 0)   ="; cin >> No;
	}

	Cikis.close();
	system("pause");
	*/
		//dosya boyutunun ve kayit adedinin bulunmasi
	
	long Ilk, Son;
	ifstream Dosya ("TestVerisi.dat");
	Ilk = Dosya.tellg();		//dosyanin baslangic adresini al
	Dosya.seekg (0, ios::end);	//dosyanin sonuna git
	Son = Dosya.tellg();		//dosyanin son adresini al
	Dosya.close();
	cout << "Dosya boyutu : " << (Son-Ilk) << " bytes.\n"; 
	KayitAdedi = (Son-Ilk)/sizeof(Veri);
	
	//dosyadan verilerin diziye Okunmasi ve goruntulenmesi
	
	Giris.open("TestVerisi.dat",ios::in|ios::binary);
	for (int k=0; k<KayitAdedi; k++)
	{	Giris.read((char*)&Veri,sizeof(Veri));
		Veriler[k] = Veri;
	}
	Giris.close();

	/*for (int k=0; k<KayitAdedi; k++)
	{	VeriYaz(Veriler[k]);
		system("pause");
	}
	*/
	 VeriListele(Veriler,KayitAdedi);


	 //Kayit Duzeltme islemleri
	fstream fp;
	int Konum;
	fp.open("TestVerisi.dat",ios::in|ios::out|ios::binary);
	cout <<"Duzeltilecek Ogrenci no giriniz"; 
	cin >> No;
	bool Duzeltildi = false;
	while (!fp.eof() && !Duzeltildi)
	{
		fp.read((char*)&Veri,sizeof(Veri));
		if (Veri.No == No)
		{
			VeriYaz(Veri);
			Veri=VeriOku();
			Veri.No = No;
			Konum = -1*sizeof(Veri);
			fp.seekp(Konum,ios::cur);
			fp.write((char*)&Veri,sizeof(Veri));
			Duzeltildi=true; 
		}
		cout << "Kontrol\n";
	}
	fp.close();

	if (!Duzeltildi)
		cout << "Aranan Kayit bulunamadi\n";
	else
		cout << "Kayit duzeltildi\n";
	
	system("pause");

	//dosyadan verilerin diziye Okunmasi ve goruntulenmesi
	
	Giris.open("TestVerisi.dat",ios::in|ios::binary);
	for (int k=0; k<KayitAdedi; k++)
	{	Giris.read((char*)&Veri,sizeof(Veri));
		Veriler[k] = Veri;
	}
	Giris.close();

	VeriListele(Veriler,KayitAdedi);
	cout << "Program Sonuc\n";
	system("pause");





}
