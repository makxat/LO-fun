#include <iostream>
using namespace std;

main()
{
	char z1, z2;
	int x = 1;
	z1 = '*';
	z2 = '?';

	for(int i=1; i<=30; i++)
	{
		if(x%2) cout<<"* ";
		else cout<<"? ";
		if(!(i%6))
		{
			cout<<endl;
			x++;
		} 
		x++;
		
	}		
			
	return 0;
}
