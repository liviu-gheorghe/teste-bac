/**
#include <cmath>
#include <iostream>
#include <cstring>
**/
using namespace std;

unsigned int pDoi(unsigned int x) {
	unsigned int p = log2(x);
	return 1<<p; 
}

/**
int main(int argc,char* argv[]) 
{
	cout<<pDoi(atoi(argv[1]));
	return 0;
}
**/

