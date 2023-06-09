#include <iostream>
using namespace std;

int NWD (int a, int b)
{
	int r;
	while(b>0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	
	return a;
}

main()
{
	int a, b;

	cout<<" Podaj a (licznik) : ";
	cin>>a;
	cout<<" Podaj b (mianownik) : ";
	cin>>b;
 	
 	if(a==0)
 		cout<<" Wynik = 0 ";
 	else
 		if(b==0)
 			cout<<" Blad ! ";
 		else
 			if(a<=b)
 				cout<<a<<"/"<<b<<" = "<<a/NWD(a,b)<<"/"<<b/NWD(a,b);
 			else
 				cout<<endl<<a/NWD(a,b)<<"/"<<b/NWD(a,b)<<" = "<<a/b<<" i "<<(a/NWD(a,b))%(b/NWD(a,b))<<"/"<<b/NWD(a,b);
	return 0;
}

