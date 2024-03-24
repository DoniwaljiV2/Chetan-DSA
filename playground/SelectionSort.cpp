#include<iostream>
using namespace std;
void Selection_Sort( int arr[], int n){
    int min = 0;
    for (int i = 0; i <n-1;i++){
        min = i;
        for (int j = i; j <= n - 1;j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
            
        }
        swap(arr[i], arr[min]);
    }
};
int main(){

    int arr[5] = {3, 4, 5, 1, 2};
    int n = 5;
    Selection_Sort(arr, n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i];
    }
        return 0;
}