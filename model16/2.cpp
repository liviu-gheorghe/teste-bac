#include <iostream>
using namespace std;
int a[21][21];
int n,m,x;
int main() {
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			x = (n-i)*m+m-j+1;
			x = 2*x-1;
			a[i][j] = x*x;
			cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
