#include <iostream>
#include <cstring>
using namespace std;

class my_class{
  int umur;
  string nama;
public:
  my_class (int, string);
  ~my_class ();
  int show_age(){
    return umur;
  }

  string show_name(){
    return nama;
  }
};

my_class::my_class(int age, string name) {
  umur = age;
  nama = name;
}

my_class::~my_class(){
  umur=0;
  nama="";
}

int main(){
  my_class first(21, "Andy"), *pfirst;
  pfirst = &first;
  /*pointer menunjuk ke fungsi sebuah variabel dari class dengan tanda "->"*/
  cout<<"hi, namaku" << pfirst->show_name()<<" umur "
  << pfirst->show_age()<<" tahun\n";
}
