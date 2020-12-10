#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");

int main() 
{
	// Memoram secventa minima si secventa curenta de suma minima
	int x,smin=(1<<30),s=0;
	while(fin>>x)
	{

		// Pentru fiecare valoare citita pentru x,exista probabilitatea
		// ca aceasta sa aduca o "imbunatatire" in valoarea totala a sumei 
		//s, caz in care vom adauga la suma curenta valoarea lui x.
		// In caz contrar,vom incepe de la valoarea x o noua secventa 
		// cu valoarea initiala x


		// Nu putem pastra pentru suma curenta doar valoarea lui s,
		// in cazul in care s ar fi intamplat sa fie mai mica decat s+x si x,
		// deoarece asta ar insemna sa "sarim" peste valoarea curenta x
		//lucru care  ar incalca cerintele problemei(termenii sumei trebuie sa 
		// fie plasati pe pozitii consecutive)
		s = min(s+x,x);

		// Determinam suma minima
		smin = min(smin,s);
	}
	cout<<smin;
	fin.close();
	return 0;
}