/**
#include <iostream>
using namespace std;
**/
void perechi(int n) 
{
	bool gasit = false;
	for(int d=1;d*d<=n;d++)
	if(n%d==0 && n/d>d && d%2!=n/d%2)
	{
		gasit = true;
		printf("[%d %d]",d,n/d);
	}
	if(!gasit) cout<<"nu exista";
}
/**
int main() 
{
	return 0;
}
**/

