#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
int main() {
	int x,y=-1,smax = 0,s=0;
	while(fin>>x) {
		if(y==-1) s = smax = x;
		else if(x%2==y%2) s+=x;
		else {
			smax=s>smax?s:smax;
			s=x;
		}
		y = x;
	}
	cout<<smax;
	return 0;
	fin.close();
}
