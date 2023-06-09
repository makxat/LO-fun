#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int x, a, b, c;
	cout<<" Program na oblicznie poteg liczb calkowitych z danego przedzialu "<<endl;
	cout<<" Podaj poczatek przedzialu : ";
	cin>>a;
	cout<<" Podaj koniec przedzialu : ";
	cin>>b;
	
	for(int i=a; i<=b; i++)
	{
		cout<<i<<" do kwadratu = ";
		c = pow(i,2);
		cout<<c<<endl;
	}
	
	return 0;
}
