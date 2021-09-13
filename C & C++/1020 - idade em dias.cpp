#include <bits/stdc++.h>
		using namespace std;
			int main ()
					{
		int recebe,dia,mes,ano;
		
		cin>>recebe;
		
		ano=recebe/365;
mes=(recebe-(ano*365))/30;
		dia=recebe-((ano*365)+mes*30);
		
cout<<ano<<" ano(s)"<<endl<<mes<<" mes(es)"<<endl<<dia<<" dia(s)"<<endl;
		
	return 0;	
	}
