#include <iostream>
using namespace std;

int main()
{
    int high = 100 ;
    int low = 3 ;
    
    while (low < high)
    {
        int flag = 0;
        for(int i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << low << " ";
            ++low;
    }
    return 0;
}