#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    { // left half
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    { // right half
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
}

void mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        // now by recursion
        mergesort(arr, st, mid); // for left half

        mergesort(arr, mid + 1, end); // for right half

        merge(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {45, 23, 67, 26, 12, 34};
    mergesort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
