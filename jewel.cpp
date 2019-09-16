#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> hash2;
    string J = "za";
    string S = "ZZa";
    int count = 0;
    for (int i = 0; i < J.length(); i++)
    {
        hash2.insert(make_pair(J[i], i));
    }
    for (int i = 0; i < S.length(); i++)
    {
        if (!(hash2.find(S[i]) == hash2.end()))
        {
            count++;
        }
    }
    cout << count;
}