#include <iostream>
using namespace std;

class my_class{
  int umur;
public:
  my_class (int);//constructor
  int show_age(){
    return umur;
  }
  ~my_class();//destructor
};

my_class::my_class (int age){
  //definisi
  umur=age;
}

my_class::~my_class(){
  //definisi
  umur = 0;
}

int main(){
  my_class first(34);
  cout << first.show_age()<<"\n";

}
