#include <bits/stdc++.h>
using namespace std;
int main ()
{
int *pv,x,n[20];
pv=n;
for(x=0;x<20;x++,pv++)
cin>>n[x];
pv--;
for(x=0;x<20;x++)
cout<<"N["<<x<<"] = "<<*pv--<<endl;
cin>>x;
return 0;
}
