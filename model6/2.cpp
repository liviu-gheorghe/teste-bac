#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int nr = 0;
	char sir[100];
	cin.get(sir,101);
	char* p = strtok(sir," ");
	while(p!=NULL) 
	{
		int nr_voc = 0;
		int nr_cons = 0;
		for(int i=0;i<strlen(p);i++)
		if(strchr("aeiou",p[i]))
			nr_voc++;
		else 
			nr_cons++;
		if(nr_voc < nr_cons) 
		{
			cout<<p<<'\n';
			nr++;
		}
		p = strtok(NULL," ");
	} 
	if(nr==0) cout<<"nu exista";
	return 0;
}