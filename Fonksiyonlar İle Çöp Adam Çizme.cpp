#include <iostream>
using namespace std;

void DaireCiz()
{
	cout << "\t   *\n\t *   *\n\t  * *\n";
}

void CaprazCiz()
{
	cout << "\t  / \\\n";
	cout << "\t /   \\\n";
	cout << "\t/     \\\n";
}
void DuzCiz()
{
	cout << "\t-------\n";
}

void UcgenCiz()
{
	CaprazCiz();
	DuzCiz();
}

void DikCiz()
{
	cout << "\t|     |\n";
	cout << "\t|     |\n";
	cout << "\t|     |\n";
}

void main ()
{
	//Cop bebek cizimi
	system("color 0A");
	DaireCiz();
	UcgenCiz();
	CaprazCiz();
	cout << "\a\a";
	cout <<"\nMerhaba \"Mehmet bey\" nasilsiniz?\n";
	system("pause");

	system("color 17");
	//ev cizimi
	UcgenCiz();
	DikCiz();
	DuzCiz();
	cout << "\a\a";
	system("pause");
	//Roket cizimi
	UcgenCiz();
	DikCiz();
	DuzCiz();
	DikCiz();
	DuzCiz();
	DikCiz();
	DuzCiz();
	CaprazCiz();
	cout << "\a\a";
	system("pause");
}
