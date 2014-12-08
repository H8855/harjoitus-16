#include <iostream>
using namespace std;

void main()
{
	struct HKL { char etu[20]; char suku[20]; char osoite[30]; int kenka; int posti; float matka;};
	HKL hkl1;
	
	cout << "Anna kaikki etunimesi: ";
	cin.get(hkl1.etu, 20);
	cin.ignore(200, '\n');
	cout << "Anna kengannumero: ";
	cin >> hkl1.kenka;
	cin.ignore(200, '\n');
	cout << "Anna sukunimesi: ";
	cin.get(hkl1.suku, 20);
	cin.ignore(200, '\n');
	cout << "Anna koulumatka: ";
	cin >> hkl1.matka;
	cin.ignore(200, '\n');
	cout << "Anna osoitteesi: ";
	cin.get(hkl1.osoite, 30);
	cin.ignore(200, '\n');
	cout << "Anna postinumero: ";
	cin >> hkl1.posti;
	cin.ignore(200, '\n');

	cout << hkl1.suku << " " << hkl1.etu << endl;
	cout << hkl1.osoite << endl << hkl1.posti << endl;
	cout << hkl1.kenka << " " << hkl1.matka;
}