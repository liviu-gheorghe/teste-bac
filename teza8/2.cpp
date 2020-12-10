#include <iostream>
#include <cmath>
using namespace std;
int patrat(int n)
{
	int max_val = sqrt(n);
	while(max_val--)
		if(n%(max_val*max_val)==0)
			return max_val*max_val;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	cout<<patrat(n);
	return 0;
}