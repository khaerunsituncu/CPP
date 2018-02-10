#include <iostream>
using namespace std;

int a,b;

int main()
{
	a=1;
	do{
		b=a;
		do{
			cout<<"*";
			b++;
		  }while(b<=5);
		a++;
		cout<<endl;
	}while(a<=5);
}
