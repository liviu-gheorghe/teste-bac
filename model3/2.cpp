#include <iostream>
using namespace std;
int a[21][21];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		if(i+j==n+1)
			a[i][j]=0;
		else if(i+j<n+1)
			a[i][j] = n-i-j+1;
		else a[i][j] = -n+i+j-1;
	}

	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=n;j++)
		cout<<a[i][j]<<' ';
	cout<<"\n";
	}



	return 0;
}