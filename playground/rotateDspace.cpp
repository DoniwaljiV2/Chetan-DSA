#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<=end){
        swap(arr[start++], arr[end--]);
    }
}
void rotateD(int arr[],int n,int d)
{
    int start = 0;

    if(n>2)
    {

    reverse(arr, start, d-1);
    reverse(arr, d, n-1);
    reverse(arr,start, n-1);

    }
    reverse(arr, start, d-1);
}
int main()
{
    int arr[] = {1, 2,3,4,5,6,7};
    int n = 7;
    int d = 1;
    rotateD(arr, n,d);
    cout << "the array is: ";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}