#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int casos,x,a,b,soma=0,y;

cin>>casos;

for(x=0;x<casos;x++)
{
	soma=0;
cin>>a>>b;

for(y=a;y<a+(2*b);y++)
if(y%2!=0)
soma+=y;
cout<<soma<<endl;
}

return 0;
}
