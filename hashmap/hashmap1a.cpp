#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "thrivanathpuram ";
    unordered_map<char, int> freq;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        freq[ch]++;
    }
    for (auto i : freq)
    {
        cout << i.first << "->" << i.second << endl;
        // if we use ordered map than we get the result in  sorted manner
    }
}