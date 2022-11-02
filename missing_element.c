#include<stdio.h>
#include<stdbool.h>


int main(){

int arr[11]={12,10,1,3,5,6,7,8,11,18,22};

for (int i = 1; i <= 50;i++){
  bool value = false;
  for (int j = 0; j < 11;j++){
    if(arr[j]==i){
value=true;
}

  }
  if(!value){
    printf("%d\n", i);
  }

}
}