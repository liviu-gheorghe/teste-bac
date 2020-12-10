#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int secv_max = 0,secv=2,r,x,y,rmax;
int main() 
{


	//Retinem lungimea maxima a unei secvente care este progresie aritmetica(pentru inceput poate lua valoarea 2)
	//Retinem lungimea maxima a secventei curente care este este progresie aritmetica
	//Utilizam o variabila r , in care vom memora ratia progresiei curente, dar si o variabila rmax , care reprezinta 
	//ratia celei mai lungi progresii aritmetice gasite,sau in cazul in care exista mai multe astfel de progresii,
	//maximul dintre ratiile lor
	fin>>y>>x;
	r = x-y;
	y = x;
	// Pentru inceput citim o pereche de numere si determinam care ar trebui sa fie ratia
	// Perechea este de forma (y,x) deci y este primul element din pereche iar x al doilea
	// Dupa ce am determinat ratia, primul element al perechii va lua valoarea celui de-al doilea 
	// iar cel de-al doilea va fi actualizat prin citirea unui nou numar 



	// De exemplu, pentru sirul 1 2 3 4 5
	// perechile prelucrate vor fi : (1,2) , (2,3) ,(3,4) ,(4,5)
	while(fin>>x) 
	{
		//Continuam sa citim numere
		if(x-y==r) secv++;
		//In cazul in care diferenta dintre al doilea si primul element al perechii 
		//este egala cu ratia progresiei curente incrementam lungimea progresiei
		else secv = 2;
		// Altfel reintializam lungimea secventei cu 2, pentru ca e clar ca intre doi termeni 
		// vom avea o singura diferenta si vom trece la urmatoarea secventa 
		
		// Actualizam ratia si elementele perechii		
		r = x-y;
		y = x;
	

		// Verificam daca lungimea progresiei curente este mai mare decat lungimea maxima globala a
		// unei progresii gasite pana in momentul respectiv
		if(secv > secv_max) 
		{
			//Actualizam ratia progresiei de lungime maxima si lungimea acestei 
			rmax = r;
			secv_max = secv;
		}
		//In cazul in care progresia curenta are aceeasi lungime decat lungimea maxima globala a unei progresii 
		// gasite pana in momentul respectiv dar ratia progresiei curente este mai mare decat cea din urma , trebuie 
		// sa actualizam ratia 
		else if(secv == secv_max && r>rmax) 
		{
			rmax = r;
		}

	}
	// In cazul in care lungimea maxima este mai mica decat 3, secventa nu este considerata a fi o progresie aritmetica si afisam 
	// un mesaj corespuzator 
	if(secv_max<3) cout<<"nu exista";
	// In caz contrar, afisam ratia maxima a unei secvente de lungime maxima
	else cout<<rmax;
	fin.close();
	return 0;
}
