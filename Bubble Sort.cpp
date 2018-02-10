#include <iostream>
using namespace std;

void tampilan_larik(int data[], int n){
  int i;
  for(i=0;i<n;i++)
  cout<<data[i]<<" ";
  cout<<"\n";
}

void bubble_sort(int data[], int n){
  int tahap,j,tmp;
  for(tahap=1;tahap<n;tahap++){
    for(j=0;j<n-tahap;j++){
      if(data[j]>data[j+1]){
        //tukarkan
        tmp=data[j];
        data[j]=data[j+1];
        data[j+1]=tmp;
      }
    }
      cout<<"hasil tahap"<<tahap<<":";
      tampilan_larik(data,n);

  }
}

int main(){
const int jum_data=8;
int i;
int data[]={25,57,48,37,12,92,80,33};
bubble_sort(data,jum_data);

//hasil pengurutan
cout<<endl;
cout<<"Hasil Pengurutan:\n";
tampilan_larik(data,jum_data);

}

//
// void bubble_sort1(int array[], int jdata){
// for(i=1;i<jdata;i++){
//   for(j=1;j<jdata-1;j++){
// if (array[j]>array[j]+1){
//   tempat=array[j]+1;
//   array[j]+1=array[j];
//   array[j]=tempat;
// }
// }
// cout<<"cetak";
// cetak(array,jdata);
// }
// }
//
// void cetak(int array[], int jdata){
//   for(int i=0;i<jdata;i++){
//     cout<<array[i];
//   }
// }
