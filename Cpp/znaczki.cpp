#include<iostream>
using namespace std;

main()
{
	char x;
	char y;
	int kolumna, wiersz, z=1;
	
	cout<<" Podaj 2 znaczki ktorych chcesz uzyc : "<<endl;
	cout<<" Pierwszy znaczek : ";
	cin>>x;
	cout<<" Drugi  znaczek : ";
	cin>>y;
	cout<<" Podaj liczbe kolumn : ";
	cin>>kolumna;
	cout<<" Podaj liczbe wierszy : ";
	cin>>wiersz;

	for(int i=1; i<=(kolumna*wiersz); i++)
	{
		if(z%2) 
			cout<<x;
		else 
			cout<<y;
		if(i%kolumna==0)
		{
			cout<<endl;
			z++;
		} 
		z++;
		
	}	

	return 0;
}
