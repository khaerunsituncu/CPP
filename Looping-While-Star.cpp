#include <iostream>
using namespace std;

int a,b,c;
int main()
{
	a=1;
	while(a<=5){
		/*a=1
		while(1<=5) benar maka di kerjakan isinya,*/
		b=a;
		while(b<=5){
  	/*b=1
		while(1<=5) benar maka di cetak cout<<" "*/
			cout<<" ";
		b++;//b++ = b+1 = 1+1=2 lalu di kembali ke while
		}

		c=1;
		while(c<=a)
		{
			cout<<"*";
			c++;
		}

		c=2;
		while(c<=a)
		{
			cout<<"*";
			c++;
		}

	cout<<"\n";
	a++;
	}
}
