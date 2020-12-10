#include <iostream>
#include <cstring>
using namespace std;
char a[20][20];
int n,k,nr;
int main() 
{
        cin>>n>>k;
        cin.get();
        for(int i=0;i<n;i++)
        {
                cin>>a[i];
                cin.get();
        }
        char* sufix = a[k-1];
        for(int i=0;i<n-1;i++)
	{
		if(i==k-1) continue;
                if(strstr(a[i],sufix)-a[i] == strlen(a[i])-strlen(sufix))
                {
                        nr++;
                        cout<<a[i]<<' ';
                }
	}
        if(nr==0) cout<<"nu exista";
        return 0;
}


