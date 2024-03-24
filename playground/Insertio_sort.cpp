#include <iostream>
using namespace std;
void insertion_Sort(int arr[], int n)
{
    for (int i = 0; i <=n - 1; i++)
    {
        int j=i ;
        while(j>0&& arr[j-1]>arr[j])
        {
        swap(arr[j-1], arr[j]);
        j--;
        }
    } 
};
int main()
{

    int arr[5] = {3, 4, 5, 1, 2};
    int n = 5;
    insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}