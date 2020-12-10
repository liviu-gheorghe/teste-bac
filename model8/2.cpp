#include <iostream>
using namespace std;
int main()
{
	int n,k,a[21][21];
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];

	//In cazul in care linia este mai mica decat 3,
	// atunci nu avem ce valori sa permutam,deoarece ar 
	// exista 0 valori(pentru linia 1) sau 1 valoare(pentru linia 1)
	// sub diagonala principala
	if(k>2)
	{
		int cp = a[k][1];
		for(int j=1;j<k-1;j++)
			a[k][j] = a[k][j+1];
		a[k][k-1] = cp;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<a[i][j]<<' ';
		cout<<'\n';
	}
	return 0;
}