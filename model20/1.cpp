#include <iostream>
#include <cmath>
using namespace std;

int transformareBaza10(int b,int n) {
	int rez = 0,poz=0;
	while(n) {
		rez+=(n%10)*pow(b,poz);
		poz++;
		n/=10;
	}
	return rez;
}

int main() {
return 0;
}
