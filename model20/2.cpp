#include <iostream>
#include <cstring>
using namespace std;

char sir[100],rez[100],nr[100];
int poz;
int main() {
	cin.get(sir,101);
	char* p = strtok(sir," ");
	while(p) {
		if(strchr(p,',')) {
			poz = strchr(p,',')-p;
			strncpy(nr,p,poz);
			nr[poz]=0;	
		}
		else {strcpy(nr,p); nr[strlen(p)]=0;}
		strcat(rez,nr);
		p = strtok(NULL," ");
		if(p) strcat(rez," ");
	}
	strcpy(sir,rez);
	cout<<sir;
	return 0;
}
