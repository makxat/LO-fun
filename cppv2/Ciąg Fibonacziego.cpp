#include <iostream>

using namespace std;

int cf(int x)
{
    if(x < 2)
        return x;
    else
        return cf(x-1) + cf(x-2);
}

int main()
{
    int x;
    cerr<<" Podaj liczbe x = ";
    cin>>x;
    cerr<<" "<<x<<" wyraz w ciagu Fibonacziego to : "<<cf(x)<<endl;
    cout<<cf(x)<<endl;

    return 0;
}
