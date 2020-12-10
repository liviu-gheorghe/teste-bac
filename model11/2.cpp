#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
char sir[100];
int main() 
{
	cin.get(sir,101);
	for(int i=0;i<strlen(sir);i++)
	if(isalpha(sir[i])) 
	{
		if(i==0 || sir[i-1]==' ')
		sir[i] = toupper(sir[i]);
		else 
		sir[i] = tolower(sir[i]);
	}
	cout<<sir;
	return 0;
}
