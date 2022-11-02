#include<iostream>
using namespace std;

class Time{

private:
  int min, hrs;

  public:
  Time(int h,int m){
    hrs = h;
    min = m;
  }
  void operator++(){
    min++;
    if(min>=60){
      min-=60;
      hrs++;
    }
  }


  void display(){
    cout << hrs<< ":" << min;
  }
};

class Space{
private:
  int x, y, z;

  public:
  void getData(int a,int b,int c);
  void display();
  void operator-();
};

void Space::getData(int a,int b,int c){

  x = a;
  y = b;
  z = c;
}

void Space::display(){
  cout << endl;
  cout << x <<" "<< y <<" "<< z;
}


void Space::operator-(){
  x = -x;
  y = -y;
  z = -z;
}
int main(){
  //for class Time for increment value
  Time t1(1,2);
  ++t1;
  t1.display();


  //For class space to change into negative value

  Space s;
  s.getData(1, 2, 3);
  -s;
  s.display();

  return 0;
}