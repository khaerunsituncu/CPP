#include <iostream>
#include <string>
using namespace std;

struct manusia{
 int umur;
 int selisi_umur(manusia n, manusia m);
 // {
 //   if (n.umur < m.umur)
 //            return(m.umur-n.umur);
 //   else
 //            return(n.umur-m.umur);
 // }

};

int manusia::selisi_umur (manusia n, manusia m){
  if (n.umur < m.umur)
           return(m.umur-n.umur);
  else
           return(n.umur-m.umur);
}

int main(){
  manusia manusia1, manusia2;//objeck manusia ada 2 yaitu manusia1 dan manusia2
  manusia1.umur = 34;
  manusia2.umur = 16;
  cout<<"selisinya adalah: "<<manusia1.selisi_umur(manusia1, manusia2)<<endl;//memanggil fungsi selisi_umur menggunakan parameter

}
