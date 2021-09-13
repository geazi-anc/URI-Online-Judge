#include <bits/stdc++.h>
using namespace std;

int main ()
		{
int x,op,c;
cin>>op;
for(x=0;x<op;x++)
{
cin>>c;
cout<<(long long)(pow(2,c)/12000)<<" kg"<<endl;
}
return 0;
}