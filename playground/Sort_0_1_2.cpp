#include <iostream>
using namespace std;
void sort012(int arr[], int n)
{

    // int count0=0,count1=0,count2=0;
    // for (int i = 0; i < n;i++){
    //     if(arr[i]==0){
    //         count0++;
    //     }
    //     else if (arr[i]==1)
    //     {
    //         count1++;
    //     }
    //     else{
    //         count2++;
    //     }

    // }

    // int index = 0;
    // while(index < n && count0>0){
    //     arr[index] = 0;
    //     index++;
    //     count0--;
    // }
    // while(index < n && count1>0){
    //     arr[index] = 1;
    //     index++;
    //     count1--;
    // }
    // while(index < n && count2>0){
    //     arr[index] = 2;
    //     index++;
    //     count2--;
    // }

    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (low < high && mid <high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 1, 2, 2, 0};
    int n = 6;
    sort012(arr, n);
    cout << "The array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}