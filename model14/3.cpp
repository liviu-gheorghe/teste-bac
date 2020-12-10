#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int min1,min2,min3,x;
int main() 
{
	min1=min2=min3=(1<<30);
	while(fin>>x) 
	{
		if(x/10>0&&x%10==0&&x/10%10==2)
		{
			if(x<min1) {min3 = min2;min2=min1;min1=x;}
			else if(x<min2) {min3 = min2; min2 = x;}
			else if(x<min3) min3 = x;
		}
	}
	cout<<min1<<' '<<min2<<' '<<min3;
	fin.close();
	return 0;
}
