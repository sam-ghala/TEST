//
//Test
// google code signal
//

#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int value, min, j;
    int arr[6] = {2,1,3,5,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int dumj[len];
    j = 0;
    min = len;
    for (int i = 0; i < len/2;i++)
        for(int k = i+1; k < len;k++)
          if(arr[i] == arr[k])
            if(min > (k-i))
            {
              min = (k-i);
              dumj[j] = arr[i];
              j++;
            }
        }
    }
      std::cout << *std::max_element(dumj,dumj + 4) << std::endl;

    std::getchar();
	return 0;
}
