#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int x,y,z=5;

for(x=1;x<=9;x+=2)
{
z+=2;
for(y=z;y>=z-2;y--)
cout<<"I="<<x<<" J="<<y<<endl;
}

return 0;
}
