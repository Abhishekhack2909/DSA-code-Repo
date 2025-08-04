#include <iostream>
#include <vector>
using namespace std;

// binary search algorithm> optimal solution

int binarySearch(vector<int> &arr, int target)
{ // iterative code

    int str = 0, end = (arr.size()) - 1;
    while (str <= end)
    {
        int mid = (str + end) / 2;
        if (target > arr[mid])
        {
            str = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
// drive call
int main()
{
    vector<int> arr2 = {23, 34, 56, 78, 234, 345, 345, 567, 678, 890};
    int target = 345;
    cout << binarySearch(arr2, target) << endl;
    // vector<int>arr1={ 1, 2,3,4 , 5}; // odd
    // int target= 4;
    // cout<<binarySearch(arr1, target)<<endl;
}