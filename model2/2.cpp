#include <iostream>
#include <cstring>
using namespace std;
char sir[100],rezultat[100];

int main()
{
	cin.get(sir,101);
	char *p = strtok(sir," ");
	while(p) 
	{
		cout<<p<<'\n';
		if(p[0] != '-') strcat(rezultat,p);
		p = strtok(NULL," ");
		if(p) strcat(rezultat," ");
	}
	cout<<rezultat;
	return 0;
}