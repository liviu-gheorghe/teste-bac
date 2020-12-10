#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	char sir[100];
	cin.get(sir,101);
	int poz = -1;
	for(int i=0;i<strlen(sir);i++)
	if(strchr("aeiou",sir[i]))
	poz = i;
	if(poz==-1) cout<<"nu exista";
	else 
	{
		strcpy(sir+poz,sir+poz+1);
		cout<<sir;
	}
	return 0;
}
