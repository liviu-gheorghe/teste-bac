#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bac.out");
int main() 
{
	int n;
	cin>>n;
	while(n>0) 
	{
		fout<<n<<' ';
		if(n%2||n<=10) n--;
		else
		n/=2;
	}
	fout.close();
	return 0;
}
