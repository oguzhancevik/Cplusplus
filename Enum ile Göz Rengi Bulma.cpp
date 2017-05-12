#include <iostream>
using namespace std;

enum GozTuru {Kahve=1,Siyah,Ela,Mavi,Yesil,Bilinmeyen};

char GozRengiYaz [7][15] = {" ", "KAHVE","SIYAH","ELA","MAVI","YESIL","BILINMEYEN"};


GozTuru RenkOku()
{
	char ch;
	GozTuru G;

	cout << "Goz Renginin ilk harfini giriniz:";
	cin >> ch;
	ch = toupper(ch);
	switch (ch)
	{
		case 'K': G = Kahve; break;
		case 'S': G = Siyah; break;
		case 'M': G = Mavi ; break;
		case 'Y': G = Yesil; break;
		case 'E': G = Ela;   break;
		default:  G = Bilinmeyen;
	}
	return G;
}

void RenkYaz(GozTuru G)
{
	switch (G)
	{
		case Kahve: cout << "Kahve"; break;
		case Siyah: cout << "Siyah"; break;
		case Ela:   cout << "Ela"; break;
		case Mavi:  cout << "Mavi"; break;
		case Yesil: cout << "Yesil"; break;
		default: cout << "Bilinmeyen";
	}
}

void main()
{
	GozTuru Goz1, Goz2, Goz3, Goz4;

	Goz1 = RenkOku();
	
	Goz2 = RenkOku();

	cout << "Birinci Kisinin Goz Rengi = ";
	RenkYaz(Goz1);
	cout << "  dir/dır." << endl;

	cout << "Ikinci Kisinin Goz Rengi = ";
	RenkYaz(Goz2);
	cout << "  dir/dır." << endl;

	system("pause");

	cout << "Birinci Kisinin Goz Rengi = " << GozRengiYaz[int(Goz1)] << "  dir/dır.\n";

	cout << "Ikinci Kisinin Goz Rengi = " << GozRengiYaz[Goz2] << "  dir/dır.\n";

	system("pause");

	
	Goz3= Kahve;

	cout << "Ucuncu Kisinin Goz Rengi = ";
	RenkYaz(Goz3);
	cout << "  dir/dır." << endl;
	system("pause");

	Goz4 = GozTuru(2);
	cout << "Dorduncu Kisinin Goz Rengi = ";
	RenkYaz(Goz4);
	cout << "  dir/dır." << endl;

	system("pause");

	Goz4 = GozTuru(Goz4+1);

	cout << "TEKRAR!!! Dorduncu Kisinin Goz Rengi = ";
	RenkYaz(Goz4);
	cout << "  dir/dır." << endl;
	system("pause");	

	if (Goz1>Goz2)
		cout << "goz1 > goz2\n";
	else
		cout << "goz1 < goz2\n";

	system("pause");

	cout << "\nGoz1 = ";
	RenkYaz(Goz1);
	cout << "\nGoz2 = ";
	RenkYaz(Goz2);
	cout << endl;

	Goz4= GozTuru(int(Goz4)+1);
	cout << "goz1 = " << Goz1 << endl;
	cout << "goz2 = " << Goz2 << endl;
	cout << "goz3 = " << Goz3 << endl;
	cout << "goz4 = " << Goz4 << endl;
	system ("pause");

}
