#include <iostream>//memanggil header iostream(input output stream)
using namespace std;//agar setiap kita menulis cout tidak perlu pake std
//Dibagain ini anda bisa membuat variabel global
int main()//untuk pembuka program
{
	//Penulisan variabel local->> tipedata variabel ->> int a,b;
	//menampilkan string ->> cout<<"disini string" atau cout<<variabel;
	//menyimpan nilai ->> cin>>namavariabel;
	//rumus ->> variabel = variabel [operasi +-*/] variabel
	int x,y,luas;
	cout<<"Menghitung Bangun\n";
	cout<<"Masukkan Panjang : "; cin>>x;
	cout<<"Masukkan Lebar : "; cin>>y;
	luas=x*y;
	cout<<"Hasil : "<<luas;
}
