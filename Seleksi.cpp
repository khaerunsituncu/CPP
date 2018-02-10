#include <iostream>
using namespace std;

int a;
char b;

int main()
{
	//seleksi if else menggunakan kondisi angka
	cout<<"IF : Masukkan Angka 1 atau 2 :"; cin>>a;
		if (a==1)
		//kondisinya ==(persamakan) / <(lebih keci) / >(lebih besar) / <>(tidak sama) / &&(and-bisa menggunakan 2 kondisi)
		// || (or)
			{cout<<"Kamu memasukkan nilai : " <<a <<"\n";}// \n(new line) atau menggunakan endl
		else if (a==2)
			{cout<<"Kamu memasukkan nilai : " <<a <<"\n";}
		else
			{cout<<"Kamu tidak memasukkan nilai 1 atau 2 !\n";}

	//seleksi if else menggunakan kondisi huruf
	cout<<"IF : Masukkan Huruf A atau B :"; cin>>b;
		if (b=='a'||b=='A')
			{cout<<"Kamu memasukkan huruf " <<b <<"\n";}
		else if (b=='b'||b=='B')
			{cout<<"Kamu memasukkan huruf " <<b <<"\n";}
		else
			{cout<<"Kamu tidak memasukkan nilai A atau B !\n";}

	//seleksi switch menggunakan kondisi angka
	cout<<"SWITCH-CASE : Masukkan Angka 1 dan 2 :"; cin>>a;
		switch (a)
		{
		case 1 : cout<<"Kamu memasukkan nilai " <<a <<"\n";
			break;
		case 2 : cout<<"Kamu memasukkan nilai " <<a <<"\n";
			break;
			default:
				 cout<<"Kamu tidak memasukkan nila 1 atau 2\n";
		}

	//seleksi switch menggunakan kondisi huruf
	cout<<"SWITCH-CASE : Masukkan Huruf A atau B :"; cin>>b;
		switch (b)
		{
		case 'a' : cout<<"Kamu memasukkan nilai " <<b; cout<<"\n";
			break;
		case 'b' : cout<<"Kamu memasukkan nilai " <<b; cout<<"\n";
			break;
			default :
				   cout<<"Kamu tidak memasukkan nila A atau B\n";
		}
}
