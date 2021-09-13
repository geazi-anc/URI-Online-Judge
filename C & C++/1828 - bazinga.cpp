/*1. a tesoura corta o papel;
2. o papel embrulha a pedra;
3. a pedra esmaga o lagarto;
4. o lagarto envenena Spock;
5. Spock destrói a tesoura;
6. a tesoura decapita o lagarto;
7. o lagarto come o papel;
8. o papel contesta Spock;
9. Spock vaporiza a pedra;
10. a pedra quebra a tesoura.
*/

#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
				int casos,x;
char sheldon[10],raj[10];

cin>>casos;

for(x=1;x<=casos;x++)
{
cin>>sheldon>>raj;

if(sheldon[0]=='p'&&sheldon[2]=='p'&&raj[2]=='d'&&raj[0]=='p')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='t'&&raj[0]=='p'&&raj[2]=='p')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='p'&&sheldon[2]=='d'&&raj[0]=='l')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='l'&&raj[0]=='S')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='S'&&raj[0]=='t')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='t'&&raj[0]=='l')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='l'&&raj[0]=='p'&&raj[2]=='p')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='p'&&sheldon[2]=='p'&&raj[0]=='S')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='S'&&raj[0]=='p'&&raj[2]=='d')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]=='p'&&sheldon[2]=='d'&&raj[0]=='t')
cout<<"Caso #"<<x<<": Bazinga!"<<endl;
else if(sheldon[0]==raj[0]&&sheldon[1]==raj[1]&&sheldon[2]==raj[2])
cout<<"Caso #"<<x<<": De novo!"<<endl;

else
cout<<"Caso #"<<x<<": Raj trapaceou!"<<endl;
}

return 0;
}
