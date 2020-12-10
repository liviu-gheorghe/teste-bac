#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int cnt = 1;
int main() {
	int x,y=-1;
	while(fin>>x)
	{
		if(y!=-1)
		{
			if(x==y) cnt++;
			// Daca valoarea curenta este diferita de 
			// valoarea anteriara sau am ajuns la 
			// finalul fisierului
			if(x!=y || fin.eof())
			{
				if(cnt==2) cout<<y<<' ';
				cnt=1;
			}
		}
		y = x;
	}
	fin.close();
	return 0;
}