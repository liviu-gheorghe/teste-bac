#include <iostream>
using namespace std;
int m[11][11],val,n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>m[i][j];
	for(int i=1;i<=n;i++)
	{
		val = 0;
		for(int j=1;j<=n;j++)
			if(m[i][j])
				val += 1<<(4-j);
		cout<<val<<' ';
	}	
	return 0;
}