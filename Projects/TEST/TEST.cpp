#include <iostream>
#include<vector>
int main(){
  int ar[10] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
  int n = 10;
  int nu[10] = {0};
  int sum;
  for(int i = 0; i <n ; i++){
      for(int k = 0; k < n; k++){
          if(ar[i] == ar[k]){
              nu[i] += 1;
          }
      }
  }
  for(int i = 0; i < n; i++){
      nu[i] = (nu[i]/2);
      std::cout << nu[i] << std::endl;
    }
  //std::cout << sum;
    return 0;
}
