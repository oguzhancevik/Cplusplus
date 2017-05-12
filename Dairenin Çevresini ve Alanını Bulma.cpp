#include <iostream>
using namespace std;

void main ()
{
	const float Pi = 3.14159;
	float YariCap;
	float Alan, Cevre;

	//1.Adim: YariCapi giriniz
	cout << "Dairenin yaricapinin giriniz =";
	cin >> YariCap;

	//2.Adim: Alani hesapla
	Alan = Pi * YariCap * YariCap;

	//3.Adim: Cevreyi hesapla
	Cevre = 2 * Pi * YariCap;

	//4.Adim: Alani ve cevreyi yazdir
	cout << "Dairenin Alani   = " << Alan  << endl;
	cout << "Dairenin Cevresi = " << Cevre << endl;

	system("pause");
}
