#include <iostream>
using namespace std;
int nrDivPrimi(int n) 
{
        int nr=0;
        int d = 2;
        while(n!=1) 
        {
                if(n%d==0) 
                {
			int p = 0;
                        while(n%d==0) 
			{
				n/=d;
				p++;
			}	
			nr += (p%2);
                }
		d++;
        }
	return nr;
}
int main() 
{
	return 0;
}

