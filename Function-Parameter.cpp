#include <iostream>
#include <math.h>
using namespace std;

int hitung(int x, int y)/*parameter inputan*/{
	int ls;
	ls=x*y;
	return(ls);
}

int main(){
	int pilih;
	int panjang,lebar,alas,tinggi,sisi;
	float luas;
	
	do{
		cout<<"Pilihan ---------->\n";
		cout<<"1. Luas Persegi Panjang\n";
		cout<<"2. Luas Segitiga\n";
		cout<<"3. Luas Bujursangkar\n";
		cout<<"4. SELESAI\n";
		cout<<"Masukkan Pilihan Anda : "; cin>>pilih;
		switch(pilih)
		{
			case 1 : cout<<"Masukkan nilai Panjang :"; cin>>panjang;
					 cout<<"Masukkan nilai Lebar :"; cin>>lebar;
					 luas=hitung(panjang,lebar);
					break;
			case 2 : cout<<"Masukkan nilai Alas :"; cin>>alas;
					 cout<<"Masukkan nilai Tinggi :"; cin>>tinggi;
					 luas=hitung(alas,tinggi)*0.5;
					break;
			case 3 : cout<<"Masukkan nilai Sisi :"; cin>>sisi;			 
					 luas=hitung(sisi,sisi);
					break;
			case 4 : cout<<"Terimah Kasih ..!";
		}
		
		if (pilih!=4)
			cout<<"Luasnya adalah : "<<luas<<endl;
	}while(pilih!=4);
}
