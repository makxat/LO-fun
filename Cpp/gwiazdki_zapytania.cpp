#include <iostream>
using namespace std;

main()
{
	char z1, z2;
	z1 = '*';
	z2 = '?';
	
	for(int i=1; i<=25; i++)
	{
		if(i%2) cout<<"* ";
		else cout<<"? ";
		if(!(i%5)) cout<<endl;
	}		
		
	return 0;
}
