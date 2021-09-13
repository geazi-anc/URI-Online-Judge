#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
				int x,numero,casos,y,a,b,aux,fib;
				
				cin>>casos;
				
				for(x=0;x<casos;x++)
				{
				cin>>numero;
a=0;
b=1;


if(numero==0)
			cout<<"Fib(0) = 0"<<endl;
				
				else
				{
				
				for(y=0;y<numero;y++)
				{
					if(y==0)
					{
					a=0;
					b=1;
					fib=0;
					}
					
					else
					{
fib=a+b;
aux=a;
a=b;
b=fib;
}
				}
				
				cout<<"Fib("<<numero<<") = "<<fib<<endl;
			}
		}
			return 0;	
			}
