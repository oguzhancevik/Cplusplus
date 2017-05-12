#include <iostream>
using namespace std;

void main ()
{
	int a;
	int *p, *d;

	p = new int;
	
	*p= 45;

	cout << "P Pointerinin kendi bulundugu adres = " << &p << endl;
	cout << "P Pointerinin isaret ettigi adres = " << p << endl;
	cout << "P Pointerinin isaret ettigi datasi = " << *p << endl;
	d=p;
	cout << "D Pointerinin isaret ettigi datasi = " << *d << endl;

	cout << "==================\n";

	system ("pause");
	
	p=new int;

	*p=34;
	cout << "P Pointerinin adresi = " << p << endl;
	cout << "P Pointerinin datasi = " << *p << endl;
	cout << "d Pointerinin adresi = " << d << endl;
	cout << "d Pointerinin datasi = " << *d << endl;

	cout << "==================\n";
	system ("pause");	
	
	d=p;
	cout << "p Pointerinin datasi= " << *p << endl;
	cout << "d Pointerinin datasi = " << *d << endl;

	system ("pause");	

	cout <<"P nin datasi 2 arttirildi sonuc \n\n";
	*p = *p+2;
	cout << "p Pointerinin datasi= " << *p << endl;
	cout << "d Pointerinin datasi = " << *d << endl;

	system ("pause");	

	cout << "?????????????????????????????\n";
	d=new int[5];
	int i;
	for (i=0; i<5; i++)
	{
		cout << "Dizinin " << i <<" . elemanina deger giriniz =";
		cin >> d[i];
	}

	for (i=0; i<5; i++)
		cout << "Dizinin " << i <<" . elemanina deger =" <<  d[i] << endl;


	system ("pause");	

	cout << "==================\n";
	
	cout << "Dizini 0 elemani = " << *d << endl;

	cout << "==================\n";
	
	cout << "Dizini 2 elemani = " << *(d+2) <<endl;

	cout << "==================\n";
	
	cout << "Dizini 2 elemani = " << (*d)+2 <<endl;

	cout << "==================\n";
	
	cout << "Dizini 2 elemani = " << *d+2 <<endl;

	system ("pause");	
	 
	d++;

	cout << "==================\n";
	
	cout << "Dizini 0 elemani = " << *d << endl;
	cout << "Dizini 0 elemani = " << d[0] << endl;


	system ("pause");	


	cout << "==================\n";
	for (i=0; i<5; i++)
		cout << "Dizinin " << i <<" . elemanina deger =" <<  d[i] << endl;

	
	system ("pause");

	d--;

	(*d)++;
	d[1]++;
	cout << "==================\n";
	for (i=0; i<5; i++)
		cout << "Dizinin " << i <<" . elemanina deger =" <<  d[i] << endl;
	system("pause");


	p=d+2;
	cout << "==================\n";
	for (i=0; i<5; i++)
		cout << "Dizinin " << i <<" . elemanina deger =" <<  d[i] << endl;
	
	
	cout << "==================\n";
	cout << " p degiskenin degeri =  "<< *p << endl;	

	
	for (i=0; i<3; i++)
		cout << "Dizinin " << i <<" . elemanina deger =" <<  p[i] << endl;
	
	cout << "+++++++++++++++++++++\n";
	system("pause");

	

}
