//empty string
#include <iostream>
#include <cstring>
using namespace std;

void fn(string s)
{
    if (s.length() > 0)
    {
        int k = s.length();
        for (int i = 0; i < k - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
            }
        }
        cout << s << endl;
    }
    else
    {
        cout << "empty string" << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    fn(s);
    return 0;
}