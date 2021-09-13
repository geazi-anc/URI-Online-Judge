#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
				int horas,minutos,op,casos,x;
				
				
				cin>>casos;
				
				for(x=0;x<casos;x++)
				{
					cin>>horas>>minutos>>op;

//if(horas==0)			
//cout<<"00";

if(horas<10)
cout<<"0"<<horas;

else
cout<<horas;

					if(minutos<10)
cout<<":0"<<minutos;
					
					else
					cout<<":"<<minutos;
					
	
					if(op==0)
				cout<<" - A porta fechou!"<<endl;
					
					else if(op==1)
					cout<<" - A porta abriu!"<<endl;
					
				}
				
				
				
				
			return 0;	
			}
