#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
				int soma=0,casos,x,numeroa,numerob;

char a[100],b[100],ea[10],eb[10];

cin>>casos;

for(x=0;x<4;x++)
{
cin>>a>>ea>>b>>eb;
cin>>numeroa>>numerob;

soma=numeroa+numerob;

if(ea[0]=='P'&&soma%2==0)
cout<<a<<endl;
else if(ea[0]=='I'&&soma%2!=0)
cout<<a<<endl;
else
cout<<b<<endl;
}

return 0;
}
