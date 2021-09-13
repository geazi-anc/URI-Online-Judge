#include <bits/stdc++.h>
		using namespace std;
			int main ()
					{
		int recebe,segundos,minutos,horas;
		
		cin>>recebe;
		
		horas=recebe/3600;
		minutos=recebe/60;
		segundos=recebe-(minutos*60);

if(recebe>3600)
{
minutos=(recebe-(horas*3600))/60;
segundos=recebe-((horas*3600)+(minutos*60));
}
	
cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
		
	return 0;	
	}
