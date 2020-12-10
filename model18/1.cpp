#include <iostream>
using namespace std;

void suma(int n,int &s) 
{
        s=0;
        bool f[]={0,0,0,0,0,0,0,0,0,0};
        while(n) {
                int c = n%10;
		if(c%2==0)
                {
                        if(f[c]==0)
                        {
                                s+=c;
                                f[c]=1;
                        }
                }
                n/=10;
        }
}

int main()
{
        return 0;
}

