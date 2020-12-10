#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bac.out");

int main() 
{


	// Determinam toate configuratiile posibile
	// Complexitatea de timp a algoritmului poate fi aproximata la 
	// una constanta
	int p1,p2;
	cin>>p1>>p2;
	for(int a=9;a>0;a--)
	for(int b=9;b>0;b--)
	{
		if(a*b!=p1) continue;
		for(int c=9;c>=0;c--)
		{
			for(int d=9;d>0;d--)
			for(int e=9;e>0;e--)
			{
				if(d*e!=p2) continue;
				fout<<a<<b<<c<<c<<c<<d<<e<<'\n';
			}
		}
	}
	fout.close();
	return 0;
}