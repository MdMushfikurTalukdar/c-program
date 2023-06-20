#include<bits/stdc++.h>

using namespace std;

bool isBalanced(string str, int n, int count = 0)
{
    
    if (n == 0)
    {
        return (count == 0);
    }

    if (str[n - 1] == '(')
        return isBalanced(str, n - 1, count + 1);

    if (str[n - 1] == ')')
        return isBalanced(str, n - 1, count - 1);

    return isBalanced(str, n - 1, count);
}

int main()
{
    string str;
    cout << "Enter the brackets: ";
    cin >> str;

    int n = str.length();
    bool result = isBalanced(str, n);

    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}