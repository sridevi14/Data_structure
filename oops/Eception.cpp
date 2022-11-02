#include<iostream>
using namespace std;

int main(){


  int a,b;
  cin >> a >> b;
  try{
if(b==0){
  throw(b);
}
else if(b==1){
  throw("4");
}
else{
  cout << a / b;
}
  }

  catch(...){
    cout <<" exception happening ";
  }
  
  return 0;
}