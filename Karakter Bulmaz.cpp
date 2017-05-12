#include <iostream>
using namespace std;

void main()
{
	unsigned char ch;

	for (ch=0; ch<255; ch++)
	{
		cout << int(ch) << " " << ch << "  ";

		if (isalpha(ch))
			if(islower(ch))
				cout << "Kucuk Harf\n";
			else
				cout << "Buyuk Harf\n";
		else if (iscntrl(ch))
			cout << "Kontrol Karakteri\n";
		else if (isdigit(ch))
			cout << "Rakam\n";
		else if (ispunct(ch))
			cout << "Noktalama\n";
		else
			cout << "Diger" << endl;
	}
	system("pause");
}
