#include <bits/stdc++.h>
using namespace std;
int main ()
		{
float c=0;
int dias=0,x,t;
cin>>t;
for(x=0;x<t;x++)
{
cin>>c;

if(c==0||(c==1))
cout<<"0 dias"<<endl;
else
{
do
{
c=c/2;
dias++;
}
while(c>=1);
cout<<dias<<" dias"<<endl;
dias=0;
}
}
return 0;
}
