#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int x,y=-1,nr;
int main() 
{
	while(fin>>x)
	{
		if(y==-1) {nr=1; y =x;}
		else
		{
			if(x==y) nr++;
			if(x!=y || fin.eof()) 
			{
				cout<<y<<' '<<nr<<' ';
				nr = 1;
			}
			y = x;
		}
	}
	fin.close();
	return 0;
}
