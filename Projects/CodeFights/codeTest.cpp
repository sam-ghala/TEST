//
//Test
// google code signal
//

#include <iostream>
#include <string>

int main(){
    int a[] = {2,1,3,5,3,2};
    int index = -1;
    int value;
    int len = (sizeof(a)/sizeof(a[0]));
    for (int i =0; i < len/2 ;i++)
    {
        for(int k = 1; k < len;i++)
        {
          if(a[i] == a[k])
              index = k - i;
              value = a[i];
        }

    }
    std::cout << value << "TESTING...\n";
    std::cin >> index;
	return 0;
}
