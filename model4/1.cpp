/**
#include <iostream>
using namespace std;
**/
void generatoare(unsigned int n)
{
	int nr = 0;
	long long a,b;
	for(a=0;a<=n;a+=2)
	for(b=1;b<=n;b++)
	{
		// Daca produsul a*b a depasit deja valoarea n,
		// iesim din loop deoarece nu se mai poate gasi nicio pereche 
		// care sa satisfaca relatia ceruta
		if(a*b > n) break;
		if(a*b+a/b==n)
		{
			nr++;
			cout<<a<<'-'<<b<<' ';
		}
	}
	if(nr==0) cout<<"nu exista";
}
/**
int main()
{
	return 0;
}
**/