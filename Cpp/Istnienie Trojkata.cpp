#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double a, b, c;
	char znak;
	cout<<" Podaj dluosci bokow trojkata : ";
	cin>>a>>b>>c;
	
	do
	{
		if(a+b>c && a+c>b && b+c>a)
			cout<<endl<<" Mozna zbudowac taki trojkat ! "<<endl;
		else
			cout<<" Taki trojkat nie istnieje ! ";
		cout<<" Jezeli chcesz zakonczy program wcisnij K lub k "<<endl;
		cin>>znak;
	}while(znak!='k'&& znak!='K');
	
	return 0; 
}
