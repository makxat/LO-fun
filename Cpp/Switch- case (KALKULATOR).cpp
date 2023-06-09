#include <iostream>
using namespace std;

int dodawanie(int a, int b)
{
	return a+b;
}

int odejmowanie(int a, int b)
{
	return a-b;
}

int mnozenie(int a, int b)
{
	return a*b;
}

float dzielenie(float a, float b)
{
	return a/b;
}

main()
{	
	int n, a, b, c;
	do
	{
		if(0)
			exit (0);
		cout<<endl<<" Wiaj w kalkulatorze "<<endl;
		cout<<" 0 - koniec "<<endl<<" 1 - dodawanie "<<endl<<" 2 - odejmowanie "<<endl<<" 3 - mnozenie "<<endl<<" 4 - dzielenie "<<endl;
		cout<<" Podaj 1 liczbe : ";
		cin>>a;
		cout<<" Podaj 2 liczbe : ";
		cin>>b;
		cout<<" Podaj co chcesz zrobic z tymi liczbami (Jezeli chcesz wylaczyc program kliknie dwa razy 0 ) : ";
		cin>>n;
	
		switch (n)
		{
			case 0: cout<<" Koniec programu "<<endl; break;
			case 1: cout<<" Wynik = "<<dodawanie(a, b); break; 
			case 2: cout<<" Wynik = "<<odejmowanie(a, b); break; 
			case 3: cout<<" Wynik = "<<mnozenie(a, b); break; 
			case 4:   
				if(b==0)
					cout<<" Nie mozna mnozyc ani dzielic przez 0 glabie ! "<<endl;
				else
				{
					cout<<" Wynik = "<<dzielenie(a, b); break;
				}
				
			default: cout<<" Podano bledna wartosc ! "<<endl;	
		} 
		
	}while(n!=0);

	return 0;
}


