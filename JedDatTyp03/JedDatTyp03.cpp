// JedDatTyp03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int pocet = 0;
	char x;

	cout << "\nZadej velikost posloupnosti: ";
	cin >> n;

	bool obsahuje = false;
	int vzdalenost = 'a' - 'A';
	cout << "\nZadavej znaky: " << endl;
	int i = 0;	
	while (i < n && !obsahuje)
	{
		cin >> x;
		cout << "Znak je: " << x << " a jeho ASCII kod je: " << (int)x << endl;
		if (x >= 'A' && x <= 'Z')
		{
			cout << "jeho predchazejici znak je: " << (char)(x - 1) << endl;
			char malePismeno = x + vzdalenost;
			cout << "jeho male pismeno je: " << malePismeno << endl << endl;

		}

		if (x >= '8' && x <= 'P')
		{
			pocet++;
			if (pocet >= 3)
			{
				obsahuje = true;
			}

		}

		i++;
	}

}

