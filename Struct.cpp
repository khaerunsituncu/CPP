#include <iostream>
#include <cstring>
using namespace std;

struct tipe_data_baru{
  string nama_depan;
  string nama_belakang;
  int umur;
};

int main(){
  tipe_data_baru variabelku;//membuat objeck variabelku untuk struct tipe_data_baru
  // variabelku.nama_depan = "Khaerun";
  // variabelku.nama_belakang = "Situncu";
  // variabelku.umur = 25;
  // cout<<"halo, nama saya: "<<variabelku.nama_depan<<" "
  //     <<variabelku.nama_belakang<<endl;
  // cout <<"umur saya" <<variabelku.umur <<'\n';
  cout<<"Masukkan Nama Depan Anda: ";
  cin>>variabelku.nama_depan;//objeck.anggota struct
  cout<<"Masukkan Nama Belakang Anda: ";
  cin>>variabelku.nama_belakang;
  cout<<"Masukkan Umur Anda: ";
  cin>>variabelku.umur;
  cout<<"Nama Lengkap Anda adalah "<<variabelku.nama_depan<<" "<<variabelku.nama_belakang<<"\n";
  cout<<"Umur Anda "<<variabelku.umur<<" Tahun";
}
