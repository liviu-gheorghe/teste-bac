#include <iostream>
#include <cstring>
using namespace std;
char* rima(char* sir);
char voc[] = "aeiou";
int main(int argc,char *argv[])
{
	char S[256],C[30]; 
	//numarul de cuvinte ce rimeaza
	int nr_rime = 0;
	cin.get(S,255);
	cin.get();
	cin>>C;
	// "sufixul cuvantului C"
	char * sufix = rima(C);
	char *p = strtok(S," ");
	while(p!=NULL)
	{
		// pentru fiecare cuvant verificam daca 
		// rimeaza cu C
		if(strcmp(rima(p),sufix)==0)
		{
			cout<<p<<"\n";
			nr_rime++;
		}
		p = strtok(NULL," ");
	}
	if(!nr_rime) cout<<"NU EXISTA";
	//cout<<rima(argv[1]);
	return 0;
}
char* rima(char* sir)
{
	//functie ce returneza un pointer 
	// la subsirul care incepe cu ultima vocala 
	// din cuvant (pentru nu am gasit o functie care sa 
	//faca lucrul acesta in cstring)
	// in cazul in care cuvantul nu contine vocale 
	//se va returna un pointer nul
	for(int i=strlen(sir)-1;i>=0;i--)
		if(strchr(voc,sir[i])) return sir+i;
	return NULL;
}