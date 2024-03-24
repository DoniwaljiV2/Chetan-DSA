#include <iostream>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrom(char name[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (name[left] != name[right])
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reversStr(char name[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        swap(name[left++], name[right--]);
    }
}
char mostOccChar(string s)
{

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        // char ch = s[i];
        int number = 0;
        number = s[i]- 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    char finalAns = 'a' + ans;
    
    return finalAns;
}
int main()
{
    // char name[30];
    // cout << "Enter you name" << endl;
    // cin >> name;
    // cout << "you name is: "<<name<<endl;
    // cout << "your name length is :" << getLength(name);
    // reversStr(name, getLength(name));
    // cout<<endl<< "After reverse the name is: " <<name ;
    // cout << "check palindrom " << checkPalindrom(name, getLength(name));
    string s;
    cout << "Enter your string: ";
    cin >> s;

    cout << "the Most occuring char is : " << mostOccChar(s);
    return 0;
}