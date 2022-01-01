#include <iostream>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
        return;
        string rest = s.substr(1);
        reverse(rest);
        cout<<s[0];
}
int main()
{
    string s;
    cout << "Enter the string to be reversed:";
    cin >> s;
    reverse(s);
    return 0;
}