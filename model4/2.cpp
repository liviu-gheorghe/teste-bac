#include <iostream>
using namespace std;
int main() 
{
	int n,m,a[20][20],nr=0;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];


	for(int j=1;j<n;j++)
	{
		bool complementar = true;
		for(int i=0;i<m;i++)
			if(a[i][0] == a[i][j])
			{
				complementar = false;
				break;
			}
		if(complementar == true) nr++;
	}

	cout<<nr;
	return 0;
}