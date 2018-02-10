#include <iostream>
#include <iomanip>
using namespace std;

int matriksa[10][10], matriksb[10][10], matriksc[10][10];
int i,j,baris,kolom;

void input(int m[10][10], char n){
	cout<<"Masukkan elemen dari Matriks "<<n<<" : \n";
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<"Elemen ["<<i<<","<<j<<"] : ";
			cin>>m[i][j];
		}
		cout<<endl;
	}
	
}

void cetak(int m[10][10]){
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<setw(4)<<m[i][j];
		}
		cout<<endl;
	}
}

void hitung(int x[10][10], int m[10][10], int n[10][10]){
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			x[i][j]=m[i][j]+n[i][j];
		}
	}
}

int main(){
	cout<<"Program Penjumlahan Matriks\n";
	cout<<"Masukkan Jumlah Baris : "; cin>>baris;
	cout<<"Masukkan Jumlah Kolom : "; cin>>kolom;
	input(matriksa,'A');
	cout<<endl;
	input(matriksb,'B');
	
	cout<<"Elemen Matriks A : \n";
	cetak(matriksa);
	cout<<"Elemen Matriks B : \n";
	cetak(matriksb);
	hitung(matriksc,matriksa,matriksb);
	cout<<"Hasil MatriksA + MatriksB = \n";
	cetak(matriksc);
}
