#include <iostream>
using namespace std;
int countOne(int arr[], int n)
{
    int flag1 = 0;
    int flag2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            flag1++;
        }
        else
        {
            if (flag1 > flag2)
            {
                flag2 = flag1;
            }
            flag1 = 0;
        }
    }
    cout << "flag value is " << flag1 << " " << flag2 << endl;
    if (flag2 > flag1)
    {
        return flag2;
    }
    else
        return flag1;
    return 0;
}
int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    int n = 11;
    int count = countOne(arr, n);
    cout << "count of one is: " << count;
}
