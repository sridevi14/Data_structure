#include<iostream>

using namespace std;
int main()
{
  int arr[5] = {1, 4, 10, 6, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
 // cout << "ii"<<n<<"rr";
  for (int i = 1; i <= 10;i++)
  {
    bool value = false;
    for (int j = 0; j<5;j++)
    {
      if(arr[j]==i)
      {
        value = true;
       // break;
       }
    }
    if(!value){
      cout << i<<endl;
    }
  }
  return 0;
}