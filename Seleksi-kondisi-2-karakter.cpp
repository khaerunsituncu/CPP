#include <iostream>//iostream agar cout dan cin bisa di gunakan
#include <string.h>//string agar strcmp bisa di gunakan
using namespace std;

int a;
char b[5],c[5];//[5] array agar bisa menampung nilai lebih dari satu

int main()
{
	cout<<"Masukan kategori ai,au,ao: "; cin>>b;

	cout<<!strcmp(b,"uncu")<<"\n";//mencetak hasil proses strcmp kalau di cetak 1 benar kalau 0 salah

	/*strcmp(membandingkan string) -> strcmp(variabel-char,"string yang di bandingkan");
	nilainya 0=false makanya di beri "!" agar nilainya 1=true*/

	if(!strcmp(b, "uncu")){
		cout<<"berhasil";
		}
	else{
		cout<<b;
		}
}
