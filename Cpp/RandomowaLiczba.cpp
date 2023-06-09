#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main() 
{
    //Przyklad A
	cout<<" A) ";
	srand(time(NULL));
	int a = (-15) + rand() % (15-(-15)+1);
	cout<<a<<endl;
	
	//Przyklad B
    cout<<" B) ";
	srand(time(NULL));
	int b = (3) + rand() % (25-3+1);
	cout<<b<<endl;
   
   //Przyklad C
  	cout<<" C) ";
	srand(time(NULL));
	float c =  1.5 + (double) rand()/RAND_MAX * (2.25 - 1.5);
	cout<<c<<endl;
	
	//Przyklad D
	cout<<" D) ";
	srand(time(NULL));
	float d =  0 + (double) rand()/RAND_MAX * (1 - 0);
	cout<<d<<endl;
	
	//Przyk³ad E
	cout<<" E) ";
	srand(time(NULL));
	float e =  0 + (double) rand()/RAND_MAX * (64.5 - 0);
	cout<<e<<endl;
  
  return 0;
}  

