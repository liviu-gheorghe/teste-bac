#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int f[10],g[10],x,i;
int main() 
{


	// Algoritmul consta in  utilizarea a doi 
	// vectori f si v , care vor retine 
	// numarul de aparitii a fiecarei cifre a unitatilor 
	// in numerele citite, respectiv ultima aparitie in 
	// sir al unui numar cu o anumita cifra a unitatilor 

	//Se calculeaza maximul dintre aparitiile cifrelor unitatilor
	// si se afiseaza pozitiile pe care se afla ultimele aparitii 
	// ale unor numere ce au ca cifra a unitatilor acea cifra/acele cifre
	// cu un numar maxim de aparitii
	while(fin>>x)
	{
		i++;
		f[x%10]++;
		g[x%10]=i;
	}
	int maxx = 0;
	for(i=0;i<10;i++)
	maxx = (f[i]>maxx) ? f[i] : maxx;

	for(i=0;i<10;i++)
	if(f[i]==maxx)
	cout<<g[i]<<' ';

	fin.close();
	return 0;
}