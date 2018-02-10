#include <iostream>
#include <math.h>
using namespace std;

int panjang,lebar;

void input();
void luas(){
	int ls;
	ls=panjang*lebar;
	cout<<"Luasnya adalah : "<<ls<<endl;
}
int keliling(){
	int kl;
	kl=(2*panjang)+(2*lebar);
	//cout<<"Kelilingnya adalah : "<<kl<<endl;
	return(kl);
}
void diagonal(){
	float dg;
	dg=sqrt((panjang*panjang)+(lebar*lebar));
	cout<<"Diagonalnya adalah : "<<dg<<endl;
}

int main()
{
	int pilih;
	do{
		cout<<"Pilihlah ------->\n";
		cout<<"1.Luas Persegi Panjang\n";
		cout<<"2.Keliling Persegi Panjang\n";
		cout<<"3.Diagonal Persegi Panjang\n";
		cout<<"4.Selesai\n";
		cout<<"Masukkan Pilihan Anda :"; cin>>pilih;
		if (pilih != 4)
		input();
		switch(pilih)
		{
			case 1 : luas();
			break;
			case 2 : cout<<"Kelilingnya Adalah : "<<keliling()+1<<endl;
			break;
			case 3 : diagonal();
			break;
			case 4 : cout<<"Terimah kasih ...!";
		}
	}while(pilih!=4);
	return(0);
}	
	void input(){
	cout<<"Masukkan Nilai Panjang : "; cin>>panjang;
	cout<<"Masukkan Nilai Lebar : "; cin>>lebar;
	return;
	}	
	

