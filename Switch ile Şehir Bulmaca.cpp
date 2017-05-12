#include <iostream>
using namespace std;

void main()
{
	char Ch1,Ch2,Ch3;

	cout << "Sehir kodunu uc karakter olarak giriniz = ";
	cin >> Ch1 >> Ch2 >> Ch3;

	switch (Ch1)
	{
		case 'I':
			cout << "I grubu sehir\n";
			switch(Ch2)
			{
				case 'S':
					switch(Ch3)
					{
						case 'T':
							cout << "Istanbul\n";
						break;
						case 'P':
							cout << "Isparta\n";
						break;
						default:
							cout << "Bilinmeyen Sehir\n";
					}
					break;
				case 'G':
					if (Ch3 == 'D')
						cout << "Igdir\n";
					else
						cout << "Bilinmeyen Sehir\n";
					break;
				default:
					cout << "Bilinmeyen sehir\n";
			}
			break;
		case 'S':
			cout << "S grubu sehir\n";
			switch(Ch2)
			{
				case 'A':
					switch(Ch3)
					{
						case 'K':
							cout << "Sakarya\n";
						break;
						case 'M':
							cout << "Samsun\n";
						break;
						default:
							cout << "Bilinmeyen Sehir\n";
					}
					break;
				case 'I':
					if (Ch3 == 'V')
						cout << "Sivas\n";
					else
						cout << "Bilinmeyen Sehir\n";
					break;
				default:
					cout << "Bilinmeyen sehir\n";
			}
			break;
		default:
			cout << "Bilinmeyen sehir\n";
	}
	system("pause");
}
