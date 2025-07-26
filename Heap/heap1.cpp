#include <iostream>
using namespace std;

//  for  heap we need  to visulze it in binary tree and implement it in array format
class Heap
{
public:
    int *arr; // dynamic array
    int capacity;
    int size;

    Heap(int capacity)
    {
        this->arr = new int[capacity];
        this->capacity = capacity;
        // for size we need to make it equal to capacity;
        this->size = 0;
    }

    void insert(int val)
    {
        if (size == capacity)
        {
            cout << "heap is overflowed" << endl;
            return;
        }
        size++; // size ko increase karna hoga

        int index = size; // bade hue size ko index ke equal karke usko arr me value deni hai
        arr[index] = val;
        // next we need to take this into at right position

        while (index > 1)
        {                                // this alogo called  hepification  andmethod called  heapify
            int parentindex = index / 2; // formula for  max hap
            // and  for min heap ->     parentindex= 2*index;
            if (arr[index] > arr[parentindex])
            {
                swap(arr[index], arr[parentindex]);
                index = parentindex;
            }
            else
            {
                break;
            }
        }
    }
    void printheap()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Heap h(20);
    // insertion
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);
    cout << "printing the insertion heap " << endl;
    h.printheap();
}
