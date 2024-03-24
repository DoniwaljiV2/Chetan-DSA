#include <iostream>
using namespace std;

int check(char ch)
{
    if (ch > 'A' && ch < 'Z')
        return 1;
    else if (ch > 'a' && ch < 'z')
        return 0;
    else
        return -1;
}
int main()
{
    char ch;
    cout << "Enter char :" << endl;
    cin >> ch;
    cout << check(ch);
}