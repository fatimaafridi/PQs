#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int res = 0;
        unordered_map<char, int> m1;
        for (auto c : chars)
        {
            m1[c]++;
        }
        for (int i = 0; i < words.size(); i++)
        {
            unordered_map<char, int> m2;
            int j = 0;
            for (; j < words[i].length; j++)
            {
                char c = words[i][j];
                m2[c]++;

                if (m1.find(c) == m1.end() || m1[c] < m2[c])
                {
                    break;
                }
            }
            if (j == words[i].length)
                res = res + j;
        }
        return res;
    }
};
int main()
{
}