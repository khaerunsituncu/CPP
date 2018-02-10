#include <iostream>
using namespace std;

/*class a{//class sifat dasarnya private
public://agar sifat nya berubah menjadi public
int b;
int c;
};

int main() {
    a apa;
    apa.b = 21;
    cout<<apa.b;
}*/

class Rectangle{
  int width,height;
public:
  void set_values(int, int);
  int area(){
    return width*height;
  }
};

void Rectangle::set_values(int x, int y){
  width=x;
  height=y;
}

int main(){
  Rectangle rect;
  rect.set_values(3,4);
  cout<<"area : "<<rect.area()<<endl;
  return 0;
}
