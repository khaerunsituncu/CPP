#include <iostream>
using namespace std;

void tukarab(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"Dalam Fungsi TukarAB\n";
	cout<<"Nilai a = "<<a<<" dan Nilai b = "<<b<<endl;
}
int main(){
	int a,b;
	cout<<"Masukkan nilai a : "; cin>>a;
	cout<<"Masukkan nilai b : "; cin>>b;
	cout<<"Nilai a dan b sebelum masuk fungsi TukarAB : ";
	cout<<"Nilai a = "<<a <<" dan b = "<<b<<endl;
	
	tukarab(a,b);
	cout<<"Nilai a dan b sesudah keluar fungsi TukarAB : ";
	cout<<"Nilai a = "<<a <<" dan Nilai b = "<<b<<endl;
	return(0);
}
