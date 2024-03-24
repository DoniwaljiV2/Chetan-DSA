#include <iostream>
#include <vector>
using namespace std;

vector<int> generateArray(int n)
{
    if (n == 1)
    {
        return {1};
    }
    else
    {
        vector<int> prevArray = generateArray(n - 1);
        prevArray.push_back(n);
        return prevArray;
    }
}

int main()
{
    int n = 5;
    vector<int> result = generateArray(n);
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}
