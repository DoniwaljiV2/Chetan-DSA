#include <iostream>
using namespace std;
void merge(int [], int , int , int );
void mergeSort(int[], int , int );
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];
    int index = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }
    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }
    while (right <= high)
    {
        temp[index++] = arr[right++];
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
int main()
{
    int arr[] = {3, 6, 4, 8, 1, 2};
    int low = 0;
    int high = 6;
    cout << "The unsorted array is\n";
    for (int i = 0; i <high; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, low, high);
    cout << "\nThe sorted array: \n";
    for (int i = 0; i < high; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}