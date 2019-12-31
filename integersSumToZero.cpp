#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    if (n == 0)
        return 0;
    if (n % 2 == 0)
    { //even input
        for (int i = 1; i <= n; i++)
        {
            arr.push_back(i);
            arr.push_back(-i);
            if (arr.size() == n)
                break;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                arr.push_back(0);
            else
            {
                arr.push_back(i - 1);
                arr.push_back(-(i - 1));
                if (arr.size() == n)
                    break;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}