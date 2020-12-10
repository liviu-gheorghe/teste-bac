#include <iostream>
using namespace std;


int maxim(int n) 
{
	if(!n) return -1;
	int mr = maxim(n/10);
	if(n%10%2) return mr>n%10?mr:n%10;
	else return mr;
}
int main() 
{
	return 0;
}
