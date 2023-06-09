#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double a, b, c, d, pole, obwod;
	cout<<" Podaj dlugosci bokow wieksze od 0 "<<endl;
	cout<<" Podaj a : ";
	cin>>a;
	cout<<" Podaj b : ";
	cin>>b;
	cout<<" Podaj c : ";
	cin>>c;
	cout<<" Podaj d : ";
	cin>>d;
	
	if( a==b && a==c && a==d )
	{
		cout<<" Jest to kwadrat ! "<<endl;
		obwod = a+b+c+d;
		cout<<" Obwod wynosi : "<<obwod;
		pole = a*b;
		cout<<" Pole wynosi : "<<pole;
	}else
		if( a==c && b==d || a==b && c==d || a==d && b==c )
		{
			cout<<" Jest to prostokat "<<endl;
			obwod = a+b+c+d;
			pole = a*b || a*d;
			cout<<" Obowd wynosi : "<<obwod<<endl;
			cout<<" Pole wynosi : "<<pole;
		}else
			cout<<" Z tych dlugosci bokow nie mozna zbudowac ani prostokata ani kwadratu :( ";
		
	return 0;
}
