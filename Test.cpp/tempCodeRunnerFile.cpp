#include <iostream>
using namespace std;
int main()
{
    string username;
    cin >> username;
    int n = username.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (username[i] != username[j])
            {
                count++;
            }
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}