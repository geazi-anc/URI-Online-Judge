/*? Se a temperatura desceu do 1? para o 2? dia, mas subiu ou permaneceu constante do 2? para o 3?, as pessoas ficam felizes (primeira figura).
? Se a temperatura subiu do 1? para o 2? dia, mas desceu ou permaneceu constante do 2? para o 3?, as pessoas ficam tristes (segunda figura).
? Se a temperatura subiu do 1? para o 2? dia e do 2? para o 3?, mas subiu do 2? para o 3? menos do que subira do 1? para o 2?, as pessoas ficam tristes (terceira figura).
? Se a temperatura subiu do 1? para o 2? dia e do 2? para o 3?, mas subiu do 2? para o 3? no m?nimo o tanto que subira do 1? para o 2?, as pessoas ficam felizes (quarta figura).
? Se a temperatura desceu do 1? para o 2? dia e do 2? para o 3?, mas desceu do 2? para o 3? menos do que descera do 1? para o 2?, as pessoas ficam felizes (quinta figura).
? Se a temperatura desceu do 1? para o 2? dia e do 2? para o 3?, mas desceu do 2? para o 3? no m?nimo o tanto que descera do 1? para o 2?, as pessoas ficam tristes (sexta figura).
? Se a temperatura permaneceu constante do 1? para o 2? dia, as pessoas ficam felizes se subiu do 2? para o 3? dia ou tristes caso contr?rio (respectivamente, s?tima e oitava figuras).*/


#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
				int a,b,c;
				
		
				
				cin>>a>>b>>c;
				
				if(b<a&&c>b||b==c)
				cout<<":)"<<endl;
				else if(a==b&&c<b)
				cout<<":("<<endl;
			
				else if(b>a&&c<b||b==c)
				cout<<":("<<endl;
				else if(c>b&&b>a&&c-b<b-a)
				cout<<":("<<endl;
				else if(c>b&&b>a&&c-b==b-a)
				cout<<":)"<<endl;
				else if(a>b&&b>c&&b-c<a-b)
				cout<<":)"<<endl;
				else if(a>b&&b>c&&b-c==a-b)
				cout<<":("<<endl;
				else if(a==b&&c>b)
				cout<<":)"<<endl;
				else
				cout<<":("<<endl;
				
				
							return 0;	
			}
