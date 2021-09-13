#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int x,casos,produto;
double total=0,quantidade;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>produto>>quantidade;

if(produto==1001)
total+=quantidade*1.5;

else if(produto==1002)
total+=quantidade*2.5;

else if(produto==1003)
total+=quantidade*3.5;

else if(produto==1004)
total+=quantidade*4.5;

else if(produto==1005)
total+=quantidade*5.5;
}

cout<<fixed<<setprecision(2);
cout<<total<<endl;

return 0;
}
