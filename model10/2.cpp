#include <iostream>
#include <cstring>
using namespace std;
char sir[100],ant[100],rez[100];
bool gasit = false;
int main()
{
	cin.get(sir,101);
	char *p = strtok(sir," ");
	while(p) {
		strcpy(ant,p);
		strcat(rez,ant);
		strcat(rez," ");
		p = strtok(NULL," ");
		if(p)
		{
			if(ant[strlen(ant)-1]==p[strlen(p)-1])
			{
				strcat(rez,"succes ");
				gasit = true;
			}
		}
	}
	strcpy(sir,rez);
	if(!gasit) cout<<"nu exista";
	else
	cout<<sir;
	return 0;
}
