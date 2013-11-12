// Valtteri Ahonen
// Harjoitus 20
// 12.11.2013

#include <iostream>
using namespace std;

int main()
{
	int nop[5] = {0, 0, 0, 0, 0}; // Annettuja nopeuksia varten 5-paikkainen taulukko
	int *osoitin = &nop[0]; // Taulukon paikkaan viittaamista varten

	do
	{
		cout << "Anna nopeus: ";
		cin >> *osoitin;

		if (*osoitin < 0) // Jos annettu nopeus on nolla, lopetetaan ohjelma.
		{
			return 0;
		}
		if (osoitin == &nop[4]){ // Jos ollaan taulukon viimeisess� paikassa, niin siirryt��n sitten ensimm�iseen.
			osoitin = &nop[0];
		}
		else { // Jos ei olla taulukon viimeisess� paikassa, siirryt��n seuraavaan.
			osoitin++;
		}

		cout << "Viiden viimeksi annetun nopeuden keskiarvo on " << (nop[0] + nop[1] + nop[2] + nop[3] + nop[4]) / 5 << endl << endl; // Lasketaan taulukon arvojen keskiarvo

	} while (*osoitin >= 0); // Kunhan luuppaa.
}