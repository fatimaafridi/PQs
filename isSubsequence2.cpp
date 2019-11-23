#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
    bool flag = false;
    int count = 0;
    int count1 = 0;
    int i = 0;
    if (s.length() == 0)
        return true;
    for (i = count; i < s.length(); i++)
    {
        flag = false;
        for (int j = count1; j < t.length(); j++)
        {
            if (s[i] == t[j])
            {
                flag = true;
                count = i + 1;
                count1 = j + 1;
                break;
            }
        }
        if (flag == false)
            break;
    }
    if (flag == true)
        return true;
    else
        return false;
}
int main()
{
    cout << isSubsequence("", "ahbgdc");
}