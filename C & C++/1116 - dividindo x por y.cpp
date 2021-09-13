#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int x,casos;
float a,b,r;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>a>>b;

if(b==0)
cout<<"divisao impossivel"<<endl;

else
{
r=a/b;

cout<<fixed<<setprecision(1);
cout<<r<<endl;
}
}

return 0;
}
