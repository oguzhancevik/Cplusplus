#include <iostream>
#include <string>
using namespace std;

void main ()
{
	string Adi,S1,S2;
/*
	Adi = "Ahmet Mehmet";
	cout << Adi << endl;
	system("pause");
	cout << "Bir isim giriniz =";
	cin >> S1;

	cout << "Bir Soyisim giriniz =";
	cin >> S2;

	Adi = S1 + " <==> " + S2;
	cout << "Girilen isim ve Soyisim = " << Adi << endl;
	cout << "Girilen bilginin uzunlugu = " << Adi.length() << endl;
	cout << "Girilen ismin uzunlugu = " << S1.length() << endl;

	system("pause");

	cout << "Karsilastirilmak uzere iki kelime giriniz = ";
	cin >> S1 >> S2;

	if (S1.compare(S2)==0)
		cout << S1 << " esit " << S2 << endl;
	else if (S1.compare(S2)>0)
		cout << S1 << " Buyuk " << S2 << endl;
	else
		cout << S1 << " Kucuk " << S2 << endl;

	system("pause");
	*/
	string Str1;

	Str1 = "Duzce";
	cout << Str1 << endl;
	system("pause");

	Str1.append("/*.spor");
	cout << Str1 << endl;
	system("pause");

	Str1 += "...1980.";
	cout << Str1 << endl;
	system("pause");

	cout << Str1.length() << endl;
	system("pause");


	cout << Str1.find("19") << endl;
	system("pause");

	Str1.erase(Str1.find("19"),2);
	cout << Str1 << endl;
	system("pause");
	int i=0;
	
	for(i=0; i<Str1.length(); i++)
	{
		if(!isalpha(Str1[i]))
			Str1.erase(Str1.find(Str1[i]),1);
	}
	/*
	i=0;
	while(i<Str1.length())
	{
		cout << Str1.length()<<endl;
		if(!isalpha(Str1[i]))
			Str1.erase(Str1.find(Str1[i]),1);
		else
			i++;
	}*/
	cout << Str1 << endl;
	system("pause");

}
