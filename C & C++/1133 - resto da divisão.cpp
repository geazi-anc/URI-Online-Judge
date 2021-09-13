#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int a,b,x,aux;

cin>>a;
cin>>b;

if(a>b)
{
aux=a;
a=b;
b=aux;
}

for(x=a;x<b;x++)
 if(x%5==2||x%5==3)
 cout<<x<<endl;

 return 0;
}
