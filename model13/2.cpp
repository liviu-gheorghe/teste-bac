#include <iostream>
using namespace std;
int main() 
{
	int n,k,m[401][21];
	cin>>n>>k;
	for(int i=1;i<=n*k;i++)
	for(int j=1;j<=n;j++)
	m[i][j] = j+(i-1)/k;

	for(int i=1;i<=n*k;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<m[i][j]<<' ';
		cout<<'\n';
	}
	return 0;
}
