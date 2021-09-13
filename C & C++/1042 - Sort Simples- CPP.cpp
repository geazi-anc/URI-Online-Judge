#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
	int a,b,c,d,e,f,g;
cin>>d>>e>>f;
a=d;
b=e;
c=f;
do
{
if(a>=b)
{
g=b;
b=a;
a=g;
}
else if(b>=c)
{
g=c;
c=b;
b=g;
}
}
while(c<=b||b<=a);
cout<<a<<endl<<b<<endl<<c<<endl;
cout<<endl<<d<<endl<<e<<endl<<f<<endl;
cin>>a;
	return 0;
	}
