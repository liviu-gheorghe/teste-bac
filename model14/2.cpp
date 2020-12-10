#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	char sir[100];
	cin.get(sir,100);
	for(int i=0;i<strlen(sir);i++)
	if(sir[i]=='-') strcpy(sir+i,sir+i+1);
	cout<<sir;
	return 0;
}

