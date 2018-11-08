//
//Test
// google code signal
//

#include <iostream>
#include <string>

int main(){
    int value, g, max, j;
    int arr[6] = {2,1,3,5,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int dumj[];
    int dumg[];
    max = -1;
    j = 0;
    g = 0;
    for (int i = 0; i < len/2;i++)
    {
        for(int k = i+1; k < len;k++)
        {
          if(arr[i] == arr[k])
              dumj.push_back(arr[i]);
              dumg.push_back(k-i);
              j++;
              g++;
        }

    }
    for(int i = 0; i < sizeof(dumj)/sizeof(dumj[0]);i++)
        if(dumj[i] > max)
            max = dumj[i];
    std::cout << max;
    std::getchar();
	return 0;
}
