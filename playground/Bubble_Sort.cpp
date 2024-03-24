#include <iostream>
using namespace std;
void Bubble_Sort(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int didSwap = 0;
        for (int j = 1; j <= n - i - 1; j++)
        {
                if(arr[j-1]>arr[j])
                {
                    swap(arr[j - 1], arr[j]);
                    didSwap = 1;
                }

        }
        if(didSwap==0){
            break;
        }
        
    }
};
int main()
{

    int arr[5] = {3, 6, 15, 16, 21};
    int n = 5;
    Bubble_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}