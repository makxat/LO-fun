#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double a, b, x, y;
	cout<<" Funkcja : y=ax+b "<<endl;
	cout<<" Podaj a : ";
	cin>>a;
	cout<<" Podaj b : ";
	cin>>b;
	
	if(a!=0)
		x=-b/a;
	else 
	{
		if(a=0)
		{
			b=0;
			cout<<" Jest nieskonczenie miejsc zerowych ! ";
		}else
			{
				b!=0;
				cout<<" Brakmiejsc zerowych ! ";
			}
	}
	
	return 0; 
}
