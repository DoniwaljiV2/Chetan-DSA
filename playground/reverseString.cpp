#include<iostream>
using namespace std;
int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int len){
    int s = 0;
    int e = len - 1;
    while (s<e)
    {
        swap(name[s++], name[e--]);
    }
    
}
bool checkPalindrome(char name[],int len){
    int s = 0;
    int e = len - 1;
    while (s<=e)
    {
        if(name[s]!=name[e]){
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
bool valid(char ch){
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= 0 && ch <= 9){
        return 1;
    }
    return 0;
}
int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    int len = getLength(name);
     reverse(name, len);
     cout << "reversed name is: "<< name;

     if (checkPalindrome(name, len))
     {
         cout << endl
              << "it's a palindrome string "  ;
     }

     return 0;
}
// void reverse(string name)
// {
//     int s = 0;
//     int e = name.length() - 1;
//     int scount = s;
//     while (s < e)
//     {

//         if (name[s] != ' ')
//         {
//             scount++;
//         }
//         swap(name[s], name[scount]);
//         s = scount;
//     }
// }