#include <iostream>
#include <map>
using namespace std;
int appearsOneTime(int arr[], int n)
{
    // int maxi = 0;
    // for (int i = 0; i < n;i++){
    //     maxi = max(maxi, arr[i]);
    // }
    // int hash[maxi]={0};
    // for (int i = 0; i < maxi;i++){
    //     hash[arr[i]]++;
    // }
    // for (int i = 0; i < n;i++){
    //     if(hash[i]==1){
    //         return arr[i];
    //         break;
    //     }
    // }
    
    map<long long, int> mp;
    for (int i = 0;i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second==1){
            return it.first;
            break;
        }
    }
        return 0;
        // Optimal Solution

        // int xorr = 0;
        // int n = arr.size();
        // for (int i = 0; i < n; i++)
        // {
        //     xorr = (xorr ^ arr[i]);
        // }
        // return xorr;
}
}
int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;
    int count = appearsOneTime(arr, n);
    cout << "count of one is: " << count;
}
