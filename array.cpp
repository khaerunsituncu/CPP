#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int pencacah;
	int nilai[50];
	float total;
	
	cout<<"Masukkan data bilangan bulat "<<endl;
	cout<<"Akhiri dengan memasukkan nilai negarif"<<endl;
	pencacah = 0;
	total = 0;
	while (1){
		cout<<"Nilai ke-"<<pencacah+1<<" = "; cin>>nilai[pencacah];
		if (nilai[pencacah] < 0)
		break;
		total += nilai[pencacah];
		pencacah++;
	}
	
	cout<<"Data yang telah di input : ";
	int max = 0;
	for (int x=0;x<pencacah;x++){
		cout<<setw(5)<<nilai[x];
		if (max<nilai[x]);
		max= nilai[x];
	}
	cout<<"\nJumlah data = "<<pencacah<<endl;
	cout<<"Nilai Total = "<<total<<endl;
	cout<<"Nilai Maximum = "<<max;
}
