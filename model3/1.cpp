int factori(int n,int m) 
{
	int numar=0,d=2;
	while(n!=1)
	{
		if(n%d==0) 
		{
			if(m%d==0) numar++;
			while(n%d==0) n/=d;
		}
		d++;
	}
	return numar;
}
