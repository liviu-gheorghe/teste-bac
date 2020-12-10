#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int f[10],n,x;
void afisare_palindrom(bool cautare_par);
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>x;
		f[x]++;
	}
	// verific daca se poate obtine un palindrom par
	// (daca nu gasesc nicio cifra para care sa apara
	//de cel putin doua ori atunci nu pot construi 
	//un astfel de palindrom)
	int max_par_index = 0;
	for(int i=8;i>=2;i-=2)
		if(f[i] >= 2)
		{
			max_par_index = i;
			break;
		}
	// Daca nu se poate obtine afisam -1 si terminam 
	// executia programui 
	if(max_par_index == 0)
	{
		cout<<-1;
		return 0;
	}
	// Altfel,afisam palindromul respectiv
	afisare_palindrom(true);
	return 0;
}
void afisare_palindrom(bool cautare_par)
{
	// Functie recursiva ce realizeaza afisarea
	// palindromului pe ecran fara a folosi 
	// o forma implicita de stocare a valorilor 
	// cifrelor in memorie(vector :)) )


	// Parametrul cautare_par reprezinta 
	// "tipul de lookup" pe care dorim sa il facem
	// La inceput,trebuie sa folosim cea mai mare cifra para
	//(pentru ca trebuie sa gasim cel mai mare palindrom par)
	// ,iar aceasta cifra va fi folosita de doua ori
	// , pentru ca o pozitionam odata la inceputul numarului
	// si din nou la final, pozitii intre care vom intercala 
	// restul palindromului(cel mai mare palindrom obtinut 
	//din acelasi cifre,mai putin cele doua pe care tocmai le-am folosit
	//--> frecventa lor este stocata in f)




	if(cautare_par)
	{
		for(int i=8;i>=2;i-=2)
		{
			if(f[i]>=2)
			{
				f[i]-=2;
				cout<<i;
				afisare_palindrom(false);
				cout<<i;
			}
		}
	}
	else
	{
		//Retinem in variabila pereche_gasita
		// daca am gasit o pereche de cifre
		bool pereche_gasita = false;
		for(int i=9;i>0;i--)
		{
			if(f[i]>=2)
			{
				pereche_gasita = true;
				// In cazul in care avem mai multe perechi 
				// pentru o anumita cifra 
				//le vom afisa pe toate odata,
				// pentru ca nu mai exista o alta pereche 
				// de doua cifre mai mare decat cea curenta
				int nr_perechi = f[i]/2;
				f[i]=f[i]%2;
				for(int j=1;j<=nr_perechi;j++)
					cout<<i;
				afisare_palindrom(false);
				for(int j=1;j<=nr_perechi;j++)
					cout<<i;
			}
		}
		// In cazul in care nu am mai gasit perechi de cifre,
		// exista posibilitatea sa mai fi ramas o sigura cifra 
		// pe care o putem afisa,adaugand-o la palindrom(pentru 
		// a obine palindromul maxim o vom selecta pe cea mai mare)


		// de exemplu, daca cifrele ar fi fost 1 1 2 2 3
		//fara acest pas suplimetar am fi obtinut 
		// palindromul 2 1 1 2
		//,insa cel mai mare palidrom par este 2 1 3 1 2  
		if(!pereche_gasita) 
		{
			for(int i=9;i>0;i--)
				if(f[i]==1)
				{
					cout<<i;
					return;
				}
		}
	}
}