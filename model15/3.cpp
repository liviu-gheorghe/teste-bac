#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bac.out");

int main() 
{


	// Determinam toate configuratiile posibile
	// Complexitatea de timp a algoritmului poate fi aproximata la 
	// una constanta
	int p1,p2,a,b,c,d,e;
	cin>>p1>>p2;
	for(a=9;a>0;a--)
	{
		if(p1%a) continue;
		b = p1/a; 
		if(a*b!=p1 ||b>9) continue;
		for(c=0;c<=9;c++)
		{
			for(d=9;d>0;d--)
			{
				if(p2%d) continue;
				e = p2/d;
				if(d*e!=p2 || e>9) continue;
				fout<<a<<b<<c<<c<<c<<d<<e<<'\n';
			}
		}
	}
	fout.close();
	return 0;
}
