#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
float a,b,c,x,casos,media=0;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>a>>b>>c;

media=(a*2+b*3+c*5)/10;
cout<<fixed<<setprecision(1);
cout<<media<<endl;
}

return 0;
}
