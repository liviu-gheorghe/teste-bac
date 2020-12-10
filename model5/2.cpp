#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char sir[100];
int nr;
int main()
{
	cin.get(sir,101);
	char *p = strtok(sir," ");
	while(p!=NULL)
	{
		if(isdigit(p[0]) && !strchr(p,',')) nr++;
		p = strtok(NULL," ");
	}
	cout<<nr;
	return 0;
}