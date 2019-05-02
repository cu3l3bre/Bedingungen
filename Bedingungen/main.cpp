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





	cout << "Ende" << endl;



	system("pause");
	return 0;
}

