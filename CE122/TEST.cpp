#include <iostream>
#include <vector>

int main()
{
    
    int sequence[] = {1,2,3};
    for(int i = 0; i < sequence.size(); i++)
    {
        if (sequence[i+1] < sequence[i])
        {
            sequence.erase (sequence.begin()+(i));
            break;
        }
    }
    for(int i = 0; i < sequence.size(); i++)
        std::cout << sequence[i];
    for(int i = 0; i < sequence.size(); i++)
    {
        if (sequence[i+1] <= sequence[i])
            std::cout << "false";
    }
    std::cout << "true";
    return 0;
}

