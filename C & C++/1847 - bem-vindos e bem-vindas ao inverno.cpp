/*• Se a temperatura desceu do 1º para o 2º dia, mas subiu ou permaneceu constante do 2º para o 3º, as pessoas ficam felizes (primeira figura).
• Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu constante do 2º para o 3º, as pessoas ficam tristes (segunda figura).
• Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficam tristes (terceira figura).
• Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º, as pessoas ficam felizes (quarta figura).
• Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º menos do que descera do 1º para o 2º, as pessoas ficam felizes (quinta figura).
• Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes (sexta figura).
• Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes se subiu do 2º para o 3º dia ou tristes caso contrário (respectivamente, sétima e oitava figuras).*/


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
