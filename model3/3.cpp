#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int main()
{
	int x,cnt=0,i=0,j=0;
	while(fin>>x) 
	{
		cnt++;
		if(x<0)
		{
			if(i==0)
			{
				i=j=cnt;
			}
			else j = cnt;
		}
	}
	cout<<max(cnt-i+1,j);
	fin.close();
	return 0;
}