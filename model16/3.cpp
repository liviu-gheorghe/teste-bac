#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int main() 
{
	bool t = false;
	int v[1000000],n,m,x,ant,i=1;
	fin>>n>>m;
	for(i=1;i<=n;i++) fin>>v[i];
        i = 1;
	while(fin>>x)
	{
		while(v[i]<x && i<=n) 
		{
			if(t==false || (t==true && v[i]%2 != ant%2)) 
			{
				ant = v[i];
				cout<<v[i]<<' '; 
				t = t?t:!t;
			}
			i++;
		}
		if(t==false || (t==true && x%2!=ant%2)) 
		{
			 ant = x;
			cout<<x<<' ';
			t=t?t:!t;
		}
	}
	for(;i<=n;i++)
	if(v[i]%2!=ant%2) 
	{
		cout<<v[i]<<' ';
		ant = v[i];
	}
	fin.close();
	return 0;
}
