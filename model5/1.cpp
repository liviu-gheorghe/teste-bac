/**
#include <iostream>
using namespace std;
**/
unsigned short baza(int n) 
{

	// Determinarea celei mai mai mici 
	// baze de numeratie din intervalul [1,10]
	// careia ii poate corespunde numarul 
	// consta in determinarea cifrei maxime a 
	// numarului,la care se aduna 1


	// In cazul in care numarul este egal cu 0
	// cea mai mica baza in care poate fi scris este 
	//2

	if(n==0) return 2;


	int cifmax = 0;
	while(n)
	{
		cifmax = max(cifmax,n%10);
		n/=10;
	}
	return cifmax+1;
}
/**
int main() 
{
	return 0;
}
**/