#include <iostream>
#include <cstring>
using namespace std;

char sir[200],cp[200];
bool gasit;
int main() 
{
	cin.get(sir,101);
	char* p = strtok(sir," ");
	while(p) 
	{
		strcat(cp,p);
		strcat(cp," ");
		bool ok = true;
		for(int i=0;i<strlen(p);i++)
		if(!strchr("aeiou",p[i]))
		{ok = false; break;}
		if(ok) 
		{
			gasit = true;
			strcat(cp,p);
			strcat(cp," ");
		}
		p = strtok(NULL," ");
	}
	if(!gasit) cout<<"nu exista";
	else 
	{
		strcpy(sir,cp);
		cout<<cp;	
	}
	return 0;
}
