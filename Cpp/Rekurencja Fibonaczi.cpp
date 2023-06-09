#include <iostream>
using namespace std;

int fibonaczi (int n)
{
    if(n==0)
        return 0;
	if(n==1||n==2)
		return 1;
	return fibonaczi(n-1) + fibonaczi(n-2);
}

main()
{
	int x;
	cout<<" Podaj x = ";
	cinn>x;

	return 0;
}
