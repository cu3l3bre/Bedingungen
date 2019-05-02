#include <iostream>
#include <string>

using namespace std;

int main()
{
	string EingabePasswort = "";
	string AktPasswort = "Test";

	cout << "Bedingungn" << endl;

	// Benutzer nach einem Passwort fragen
	cout << "Bitte geben Sie ein Passwort ein: ";
	cin >> EingabePasswort;

	// Passwortabfrage

	if (EingabePasswort == AktPasswort)
	{
		cout << "Das Passwort ist richtig!" << endl;
	}
	else
	{
		cout << "Das Passwort ist falsch!" << endl;
	}


	// Alternativ
	bool IstRichting;

	IstRichting = (EingabePasswort == AktPasswort);

	if (IstRichting)
	{
		cout << "Das Passwort ist richtig!" << endl;
	}
	else
	{
		cout << "Das Passwort ist falsch!" << endl;
	}

	/////////////////////////////////////////////////////////////////////////////////

	string EingabeLand = "";
	cout << "Bitte geben Sie ein Land ein: ";
	cin >> EingabeLand;

	if (EingabeLand == "Deutschland" || EingabeLand == "deutschland")
	{
		cout << "Die Hauptstadt ist Berlin" << endl;
	}
	else if (EingabeLand == "Frankreich" || EingabeLand == "frankreich")
	{
		cout << "Die Hauptstadt ist Paris" << endl;
	}
	else if (EingabeLand == "Spanien" || EingabeLand == "spanien")
	{
		cout << "Die Hauptstadt ist Madrid" << endl;
	}
	else
	{
		cout << "Dieses Land ist mir nicht bekannt" << endl;
	}



	/////////////////////////////////////////////////////////////////////////////////
	
	char EingabeBuchstabe = char(0);
	cout << "Bitte geben Sie einen Buchstaben ein: ";
	cin >> EingabeBuchstabe;

	switch (EingabeBuchstabe)
	{
	case 'd':
	case 'D': cout << "Deutschland" << endl; break;
	case 'F': cout << "Frankreich" << endl; break;
	case 'S': cout << "Spanien" << endl; break;
	default: cout << "Ich kenne das Land nicht" << endl; break;
	}

	system("pause");
	return 0;
}

