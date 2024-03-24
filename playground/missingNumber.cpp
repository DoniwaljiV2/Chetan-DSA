#include <iostream>
using namespace std;
int missingNum(int arr[],int n){
    // for (int i = 0; i < n;i++){
    //     if(arr[i+1]-arr[i]==1){

    //     }
    //     else{
    //         return i + 2;
    //     }
    // }
    // return 0;
    int sum = n * (n + 1) / 2;
    int s = 0;
    for (int i = 0; i < n-1;i++){
        s += arr[i];
    }
    return sum - s;
}
int main()
{
    int arr[] = {1, 2,3,4};
    int n = 5;
    int missing=missingNum(arr, n);
    cout << "missing num is : " << missing;
    return 0;
}