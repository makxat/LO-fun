#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib> 
using namespace std;

void wypelnij (float T[], int n)
{
	for(int i=0; i<=n; i++)
		T[i]= -10+(float)rand()/RAND_MAX*(23+10);
}

void wyswietl (float T[], int n)
{
	for(int i=0; i<n; i++)
		cout<<setw(9)<<T[i];	
	
}

float suma(float T[], int n)
{
	float s=0;
	for(int i=0; i<=n; i++)
		s+=T[i];
	return s;
}

main()
{
	int n=10;
	float Tab[n];
	
	srand(time(NULL));
	wypelnij(Tab, n);
	wyswietl(Tab, n);
	cout<<endl<<" Suma wszystkich liczb wynosi : "<<suma(Tab, n);
	
	return 0;
}
