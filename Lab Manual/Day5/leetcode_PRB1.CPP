#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int s[2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                s[0] = i;
                s[1] = j;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "[" << s[0] << "," << s[1] << "]";
    return 0;
}
