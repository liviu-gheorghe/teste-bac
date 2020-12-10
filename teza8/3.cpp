/**
Pentru ca o cifra de 0 sa apara la finalul unui numar,in descompunerea in 
factori primi a acestuia trebuie sa existe doi factori ai caror produs sa fie 10
Singurele numere cu acesta propietate sunt 2 si 5.
De exemplu, pentru numarul 90, 5 apare in descompunere o singura data iar 2 de 4 ori  
Pentru numarul 250,5 apare in descompunere de 3 ori iar 2 o singura data
Se observa ca numarul de zerouri de la sfarsitul numarului este dat de minimul 
dintre puterile la care se regasesc factorii primi 2 si 5.
Pentru factorialul unui numar,x! = 1*2*3*4*...*x,se observa ca 2 se gaseste la o putere
mai mare decat 5(in sirul 1 ... x ,  2 apare mai des decat 5) deci problema se rezuma la 
a determina puterea la care se gaseste 5 in descompunerea factorialului respectiv 
(observatia ne ajuta sa nu mai determinam fara rost si puterea la care apare 2 in descompunere)
Procedam in felul urmator 
Pentru fiecare numar care e putere a lui 5 mai mic decat x,
il impartim pe x la nr respectiv si adugam 
toate rezultatele la suma care va reprezenta 
numarul de factori primi egali cu 5 din descompunerea lui x
(adica numarul de zerouri de la sf numarului x!)
De exemplu , pt x = 100, x! = 1*2*...*100
iar puterile lui  5 sunt 5,25,
100/5 = 20
100/25 = 4
___________
Deci numarul de zerouri este 24

Pt x = 50 , x! = 1*2*...50,
puterile lui 5 sunt 5,25
50/5=10
50/25=2
__________
Deci nr de zerouri este 12
**/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.TXT");
using namespace std;
int main()
{
	int x,nr_max_zerouri=0,nr=0;
	while(fin>>x)
	{
		int p = 5;
		int s = 0;
		while(p<=x)
		{
			s+=x/p;
			p*=5;
		}
		if(s>nr_max_zerouri)
		{
			nr = 1;
			nr_max_zerouri = s;
		}
		else if(s==nr_max_zerouri)
			nr++;
	}
	cout<<nr<<' '<<nr_max_zerouri;
	return 0;
}