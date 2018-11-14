#include <iostream>
#include<vector>
int main(){
      std::vector<int> scores = {10,20,30,40,50};
      int sum = 0;
      std::vector<int>output;
      for(int i = 0; i < scores.size(); i++){
          sum = sum + scores[i];
          output[i] = (sum/(i+1));
          std::cout << output[i] << std::endl;
      }
    return 0;
}
