#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int x = 0, y = 0;
    cin >> x;
    cin >> y;
    vector<int> res;
    for (int j = x; j <= y; j++)
    {
        int i = j;
        bool p = false;
        string ki = to_string(i);
        for (auto s : ki)
        {
            int x = s - '0';
            if (i % x == 0)
                p = true;
            else
            {
                p = false;
                break;
            }
        }
        if (p == true)
            res.push_back(j);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}