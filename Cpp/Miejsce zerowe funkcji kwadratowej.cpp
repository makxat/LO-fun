#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double a,b,c;
	cout<<" Program liczy miejsca zerowe funkcji w postaci "<<endl<<" y=ax^2+bx+c "<<endl;
	cout<<" Podaj a : ";
	cin>>a;
	cout<<" Podaj b : ";
	cin>>b;
	cout<<" Podaj c : ";
	cin>>c;
	
	double delta=b*b-4*a*c;
	double x1, x2;
	cout<<endl<<" y = "<<a<<"x^2 + "<<b<<"x + "<<c<<endl; 
	
	if(delta>0)
	{
		x1=-(b+sqrt(delta))/(2*a);
		x2=-(b-sqrt(delta))/(2*a);
		cout<<endl<<" Funkcja posiada 2 miejsca zerowe : "<<x1<<", "<<x2;
	}else 
		if(delta==0)
		{
			x1=-b/(2*a);
			cout<<endl<<" Funkcja posiada 1 miejsce zerowe "<<x1;
		}else
			cout<<" Funkcaj nie posiada miejsc zerowych ! ";

	return 0;
}
