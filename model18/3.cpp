#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int x,smax,s,nr_secv;

// Retinem lungimea maxima a unei secvente
// numarul de secvente de lungime maxima si lungimea maxima 
// a secventei curente
int main() 
{
        while(fin>>x)
        {
                // Daca valoarea curenta a lui x respecta conditiile impuse 
                // de problema atunci incrementam lungimea secventei 
                // curente
                if(x%10==0)
                        s++;
                // Altfel reinitializam cu 0 lungimea secventei curente
                else 
                        s=0;
                // In cazul in care secventa curenta are o lungime
                // mai mare decat lungimea maxima globala actualizam 
                // lungimea maxima si reinitializam cu 1 numarul de 
                // secvente de lungime maxima
                if(s>smax) 
                {
                        smax = s;
                        nr_secv = 1;
                }
                // Altfel daca lungimea secventei curente coincide 
                // cu lungimea maxima a unei secvente incrementam 
                // numarul total de secvente de lungime maxima
                else if(s == smax) 
                nr_secv++;                      
        }
        cout<<smax<<' '<<nr_secv;
        fin.close();
        return 0;
}

