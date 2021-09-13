#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int soma=0,numero,x;

while(cin>>numero&&numero!=0)
{
soma=0;

for(x=numero;x<=numero+9;x++)
if(x%2==0)
soma+=x;
cout<<soma<<endl;
}

return 0;
}
