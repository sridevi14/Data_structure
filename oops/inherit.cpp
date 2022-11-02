#include<iostream>
using namespace std;




class car{
public:
  int x;

private:
int y;

protected:
  int z;
};


class derived:public car{

  public:
  void methodd(){
    // protected int x ,protected int z if i use public accesss specifier here it should be like
    // public int x,protected int z;
    x = 20;
    z= 30;
    cout <<z<< x;
  }
};


int main()
{
derived obj;
 /// obj.methodd();
///  cout << obj.x;
obj.x = 10;
//obj.z = 20;
// car obj2;
// obj2.x=10;
 //obj2.y = 20;
 //obj2.z = 30;
}