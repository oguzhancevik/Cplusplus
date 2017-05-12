//File: Kumbara.cpp
//Bu program kumbaradaki bozuk paralarin toplam degerini hesaplar

#include <iostream>
using namespace std;

void main()
{
	//Programda Kullanilacak Degiskenler
	int BirKr,BesKr,OnKr,YirmiBesKr,ElliKr,YuzKr;
	int ToplamKR,TLMiktari,KRMiktari;

	//1.Adim Para adetlerini gir
	cout << "Bir Kr Adedini Giriniz      := "; 
	cin >> BirKr;
	cout << "Bes Kr Adedini Giriniz      := ";
	cin >> BesKr;
	cout << "On Kr Adedini Giriniz       := ";
	cin >> OnKr;
	cout << "YirmiBes Kr Adedini Giriniz := ";
	cin >> YirmiBesKr;
	cout << "Elli Kr Adedini Giriniz     := ";
	cin >> ElliKr;
	cout << "Bir TL Adedini Giriniz      := ";
	cin >> YuzKr;

	//2. Adim Toplam Ykr'yi bul
	ToplamKR = BirKr + 5*BesKr + 10*OnKr + 25*YirmiBesKr + 50*ElliKr + 100*YuzKr;

	//3. Adim YTL ve YKR Miktarlarini bul
	TLMiktari = ToplamKR/100;
	KRMiktari = ToplamKR%100;

	//4. Adim Sonuclari Yaz
	cout << "\nKumbaradaki Toplam Miktar " << TLMiktari << " TL ve " << KRMiktari << " KR dir.\n";

	system("pause");
}
