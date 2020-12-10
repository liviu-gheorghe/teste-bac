#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");

int ant = -1,x;
bool gasit;
int main() 
{
	while(fin>>x) 
	{
		if(x%2==0) 
		{
			if(ant==-1 || x!=ant)
			cout<<x<<' ';
			ant = x;
			gasit = true; 
		}
	}
	if(!gasit) cout<<"nu exista";
	fin.close();
	return 0;
}
