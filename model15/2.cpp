#include <iostream>
#include <cstring>
using namespace std;
char sir[100];
int main() 
{
	int nr = 0;
	cin.get(sir,101);
	char* p = strtok(sir," ");
	while(p) 
	{
		int x = 0;
		for(int i=0;i<strlen(p);i++)
		if(strchr("aeiou",p[i]))
			x++;
		else x--;
		nr+=(x==0);
		p = strtok(NULL," ");
	}
	cout<<nr;
	return 0;
}

