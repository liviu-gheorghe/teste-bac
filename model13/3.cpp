#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bac.txt");
int main() 
{
	int n;
	cin>>n;
	while(n) 
	{
		fout<<n<<' ';
		n/=2;
	}
	fout.close();
	return 0;
}
