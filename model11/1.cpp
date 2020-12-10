/**
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
**/
void patrate(int x,int y)
{
	int nr = 0;
	int rez = 0;
	int st = sqrt(x);
	int dr = sqrt(y);
	for(int i=st;i<=dr;i++)
	{
		if(i*i<x) continue;
		nr++;
		rez += i*i;
		cout<<i*i;
		if(i<dr) 
		cout<<'+';
		else 
		cout<<'='<<rez;
	}
	if(nr==0) cout<<"nu exista";
}


/**
int main(int argc,char* argv[])
{
	patrate(atoi(argv[1]),atoi(argv[2]));
	return 0;
}
**/
