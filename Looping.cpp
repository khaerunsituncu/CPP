#include <iostream>
using namespace std;

int a,b;
char lagi='y'/*di tentukan langsung karena while langsung memeriksa dan karena menggunakan == */, lagi1;

int main()
{
	/*Looping do while - Melooping ketika kondisinya benar dan berhenti ketika kondisi salah
	 * Pertama kali memerisa kondisi terlebih dahulu sebelum di jalankan
	 * Aturan penulisan Looping While :
	 * while (kondisi looping)
	 * {
	 * isinya
	 * inputan kondisi
	 * }*/
	while (lagi=='y')/*harus ditentukan di isi variabel(lagi='y') karena langsung memeriksa kondisi
	jika y=='y'(Kondisi benar akan tetap melooping) t=='y'(kondisi salah maka akan berhenti)*/
	{
		cout<<"---------------\n";
		cout<<"Looping While :\n";
		cout<<"---------------\n";
		a++;//a++ kerena nilai a=0 maka 0+1=1, ini saya tulis hanya sebagai penanda jumlah looping
		cout<<"Angka Looping : "<<a<<endl;
		cout<<"Masih mau input y/t :";cin>>lagi;
		cout<<endl;
	}

	/*Looping do while - Melooping ketika kondisinya benar dan berhenti ketika kondisi salah
	 * Pertama kali TIDAK memerisa kondisi, namun yang kedua baru memeriksa kondisi
	 * Aturan penulisan Looping Do-While :
	 * do
	 * {
	 * isinya
	 * inputan kondisi
	 * }while(kondisi looping)*/
	do
	{
		cout<<"---------------\n";
		cout<<"Looping Do-While :\n";
		cout<<"---------------\n";
		b++;
		cout<<"Angka Looping: "<<b<<endl;
		cout<<"Selesaikan Looping [y] :";cin>>lagi1;
		cout<<endl;
	}
	while (lagi1!='y');/*di gunakan != agar looping terus berjalan bila kondisinya salah.
	y!='y'(kondisinya salah maka akan berhenti) t!='y'(kondisinya benar makan akan melooping terus)  */

	/*Looping for - Melooping sesusai jumlah yang ketahui
	 * Aturan Penulisan Looping For
	 * for(nilai_awal;Jumlah_looping;Pertambahan_nilainya)
	 * {
	 * 	isinya
	 * }*/
		cout<<"---------------\n";
		cout<<"Looping For :\n";
		cout<<"---------------\n";
	for(a=1;a<=5;a++)
	//a=1 1<=5 benar lalu di cetak Angka Looping 1
	//lalu di tambah 1 jadi a=1+1=2
	//a=2 2<=5 benar lalu di cetak Angka Looping 2
	//lalu di tambah 1 jadi a=2+1=3
	{
		cout<<"Angka Looping "<<a<<"\n";
	}
}
