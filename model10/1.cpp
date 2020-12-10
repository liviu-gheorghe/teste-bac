/**
#include <iostream>
using namespace std;
**/
void produs(int n,int &p) 
{
        bool gasit = false;
        p=1;
        bool f[]={0,0,0,0,0};
        while(n) {
                int c = n%10;
                if(c%2==0)
                {
                	gasit = true;
                        if(f[c/2]==false)
                        {
                                p*=c;
                                f[c/2]=true;
                        }
                }
                n/=10;
        }
        if(!gasit) p=-1;
}
/**
int main()
{
    return 0;
}
**/