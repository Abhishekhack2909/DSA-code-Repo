#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // unordered map store the in random way
    //  creation
    unordered_map<string, int> m;
    // insertion
    // 1st method
    pair<string, int> p = make_pair("scorpio", 9);
    m.insert(p);
    // 2nd method
    pair<string, int> p2("alto", 2);
    m.insert(p2);
    // 3rd method
    m["fortuner"] = 10; // best method

    // for accces the element
    cout << m.at("alto") << endl; // it print its key value which  is 2
    cout << m.at("fortuner") << endl;
    // it print its key value which is 10
    // or we use
    cout << m["fortuner"] << endl; //  best option it print its key value which is 10

    // for search the element is in the map or not
    cout << m.count("fortuner") << endl; // output is 1
    cout << m.count("innove") << endl;   // output is 0 as it is not existed

    // imp -> for search function (.find)

    if (m.find("fortuner") != m.end())
    {
        cout << "fortuner found" << endl; // if fortuner is in the map than this will found
    }
    else
    {
        cout << "fortuner not found" << endl;
        ;
    }

    cout << m.size() << endl; // then it will print the current size of map whih is 3
    cout << m["hummer"] << endl;
    cout << m.size() << endl; // now this will incerease  by 1 as hummer as 0 key

    // for printing all the entries all at a time
    cout << "printing all the entries" << endl;
    for (auto i : m)
    {
        cout << i.first << "->" << i.second << endl;
    }

    return 0;
}
