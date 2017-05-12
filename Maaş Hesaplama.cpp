#include <iostream>
using namespace std;

void main ()
{
	//Degisken ve sabitlar
	const float VergiSiniri = 1200.0f;
	float CalismaS, SaatU, VergiO;
	float BrutMaas, NetMaas;
	int CocukS;
	//1. Adim: Verilerin girilmesi
	cout << "Calisma saatini giriniz = ";
	cin >> CalismaS;
	cout << "Saat ucretini giriniz   = ";
	cin >> SaatU;
	cout << "Cocuk sayisini giriniz  = ";
	cin >> CocukS;
	cout << "Vergi Oranini giriniz   = ";
	cin >> VergiO;
	//2. Adim: Brut Maasin hesaplanmasi
	BrutMaas = CalismaS * SaatU;
	//3. Adim: Cocuk Sayisini degerlendirilmesi
	if (CocukS>=3)
	{
		cout << "Cocuk sayisi 3 veya daha fazla: 100 TL ek odeme yapilacak.\n";
		BrutMaas = BrutMaas+100;
	}
	//4. Adim: Net Maasin hesaplanmasi
	if (BrutMaas>=VergiSiniri)
	{
		cout << "Brut Maas " << VergiSiniri << " veya uzerinde. Vergi kesintisi yapilacak.\n\a";
		NetMaas = BrutMaas - (BrutMaas * VergiO)/100;
	}
	else
	{
		cout << "Brut Maas " << VergiSiniri << "\'den daha az. Vergi kesintisi yapilmayacak.\n\a";
		NetMaas = BrutMaas;
	}
	//5. Adim: Sonuclarin yazdirilmasi
	cout << "Brut Maas = " << BrutMaas << endl;
	cout << "Net Maas  = " << NetMaas << endl;
	system("pause");

}
