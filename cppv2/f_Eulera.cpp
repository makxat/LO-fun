#include <iostream>
using namespace std;

int main()
{
	long long N;

	long long liczba_dzielnikow = 0;
	long long ilosc_wzg_pierwszych = 1;
	long long T[10000];
	cin >> N;
	ilosc_wzg_pierwszych = N;
	for (long long i = 2; i <= N; i++)
	{
		if (N%i == 0)
		{
			T[liczba_dzielnikow] = i;
			liczba_dzielnikow++;
				while (N%i == 0 && N!=1) N /= i;
		}
	}

	for(long long i=0; i< liczba_dzielnikow;i++)
		ilosc_wzg_pierwszych=(double)( (double)(T[i]-1)/ T[i])*ilosc_wzg_pierwszych;

	cout << ilosc_wzg_pierwszych;

	return 0;
}
