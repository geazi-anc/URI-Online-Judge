#include <bits/stdc++.h>
using namespace std;
int main ()
{
int n,x,y=1,z;
cin>>n;
for(x=0;x<n;x++)
{
for(z=0;z<3;z++)
{
cout<<y<<" ";
y++;
}
cout<<"PUM"<<endl;
y++;
}
cin>>n;
return 0;
}
