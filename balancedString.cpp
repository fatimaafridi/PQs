#include <iostream>
using namespace std;

int main()
{
    string val;
    cin >> val;
    int l_count = 0, r_count = 0, count = 0;
    for (int i = 0; i < val.length(); i++)
    {
        if (val[i] == 'R')
            r_count++;
        if (val[i] == 'L')
            l_count++;

        if (l_count == r_count)
        {
            count++;
            l_count = 0;
            r_count = 0;
        }
    }
    cout << count;
}