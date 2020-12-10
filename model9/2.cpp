#include <iostream>
#include <cstring>
using namespace std;
char a[20][20];
int n,nr;
int main() 
{
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin.get();
	}
	char* ultim = a[n-1];
	for(int i=0;i<n-1;i++)
		// functia strstr(sir1,sir2) returneza un pointer 
		// la prima aparitie a sir2 in sir1, sau un pointer null
		// in cazul in care sir2 nu exista in sir1

		//Pentru a decide daca sir1 incepe cu sir2, trebuie sa 
		// verificam daca pointerul returnat de functia 
		// strstr coincide cu pointerul la sirul de caractere 
		if(strstr(a[i],ultim)-a[i] == 0)
		{
			nr++;
			cout<<a[i]<<' ';
		}
	if(nr==0) cout<<"nu exista";
	return 0;
}



