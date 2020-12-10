#include <iostream>
using namespace std;

int main() 
{
	int a[20][20],m,n;
	bool polarizate = false;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];

	for(int i=0;i<m;i++)
	{
		bool gasit = false;
		for(int j=0;j<m;j++)
			if(a[i][0]==a[j][n-1])
			{
				gasit = true;
				break;
			}
		if(gasit)
		{
			if(polarizate==false) 
				polarizate = true;
			cout<<a[i][0]<<' ';
		}
	}
	if(polarizate==false) cout<<"nepolarizate";
	return 0;

}