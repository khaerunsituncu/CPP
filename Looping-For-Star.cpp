#include <iostream>
using namespace std;

int a,b;

int main()
{
		for(a=1;a<=5;a++)
	{
		for(b=a;b<=5;b++)
		cout<<" ";
		
		for(b=1;b<=a;b++)
		cout<<"*";
		
		for(b=2;b<=a;b++)
		cout<<"*";
		cout<<endl;	
	}
}
