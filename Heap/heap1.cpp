#include <iostream>
using namespace std;

// imp imp imp
//  1->kisi bhi array ka max , main nikkaal na hai to heap se 0(1) TC se nikal jata hai  hai
//  2->kisi bhi n size ke array ko heap  ke creation  me 0(n) TC lagta hai not 0(nlogn); //very imp
//  3->for  insertion and deletion in heap 0(logn);

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

    void insert(int val) // time complexity is logn
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
            // and  for min heap ->     parentindex= 2*index  or 2*i+1;
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

    // deletion  of root node  in heap
    //  step1-> remove the  root node and replace it with last node
    // step 2-> correct the position for  last node to make it in correct posstion by heapifiction process;
    // and thats we make a deletion process;
    int deleteHeap()
    {
        int answer = arr[1];
        // for replacemant
        arr[1] = arr[size];
        // because the size for heap is now decerreas
        size--;
        // now for making the replacemnt it in correct position
        int index = 1;
        while (index < size)
        {
            int leftindex = 2 * index;
            int rightindex = 2 * index + 1;

            int largestkaindex = index;
            // now condition for making it in either in in left side or in right side
            if (leftindex <= size && arr[largestkaindex] < arr[leftindex])
            {
                largestkaindex = leftindex;
            }
            if (rightindex <= size && arr[largestkaindex] < arr[rightindex])
            {
                largestkaindex = rightindex;
            }

            if (index == largestkaindex)
            { // if replace Node is largest than this condition
                break;
            }
            else
            {
                swap(arr[index], arr[largestkaindex]);
                index = largestkaindex;
            }
        }
        return answer;
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
    // cout << "printing the insertion heap " << endl;
    // h.printheap();

    // main function for deletion
    int ans = h.deleteHeap();
    cout << "Answer :" << ans << endl;
    cout << "printing  the result " << endl;
    h.printheap();
}
