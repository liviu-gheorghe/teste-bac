#include <iostream>
using namespace std;
bool a[21][21],gasit; 
int k,n,m;
int  main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	cin>>a[i][j];
	for(int i=1;i<=n;i++)
	{
		if(i==k) continue;
		bool comp = true;
		for(int j=1;j<=m;j++)
		if(a[i][j]==a[k][j])
		{
			comp = false;
			break;
		}
		if(comp)
		{
			gasit = true;
			break;
		}
	}
	if(gasit) cout<<"DA";
	else cout<<"NU";
	
	return 0;
}
