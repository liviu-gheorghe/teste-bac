#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int max1,max2,max3,x;
int main() 
{
	while(fin>>x) 
	{
		if(x/10>0&&x%10==0&&x/10%10==2)
		{
			if(x>max1) {max3 = max2;max2=max1;max1=x;}
			else if(x>max2) {max3 = max2; max2 = x;}
			else if(x>max3) max3 = x;
		}
	}
	cout<<max3<<' '<<max2<<' '<<max1;
	fin.close();
	return 0;
}