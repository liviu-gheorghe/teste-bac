#include <iostream>
#include <fstream>
using namespace std;


ifstream fin("bac.txt");
bool f[10000];
int x,y,nr,n;
int main() 
{
	fin>>n;
	for(int i=1;i<=n;i++)
	{
		fin>>x; f[x]=true;
	}
	while(fin>>x>>y) 
	{
		bool gasit = false;
		for(int i=x;i<=y;i++)
		if(f[i]) 
		{
			gasit = true;
			break;
		}
		if(!gasit) nr++;
	}
	cout<<nr;
	fin.close();
	return 0;
} 
