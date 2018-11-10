//
//Test
// google code signal
//

#include <iostream>
#include <string>

int main(){
    int value, max, j;
    int arr[6] = {2,1,3,5,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int dumj[len];
    int dumg[len];
    j = 0;
    for (int i = 0; i < len/2;i++)
    {
        for(int k = i+1; k < len;k++)
        {
          if(arr[i] == arr[k])
              dumj[j] = arr[i];
              dumg[j] = (k-i);
              j++;
        }
    }
    max = dumg[0];
    for(int i = 0; i < sizeof(dumj)/sizeof(dumj[0]);i++){
        if(dumg[i] < max)
            max = dumj[i];
            std::cout << dumj[i] << " " << dumg[i] << std::endl;
          }
    std::cout << max << std::endl;
    std::getchar();
	return 0;
}
