// program for finding the max element in array
// #include <bits/stdc++.h>
//
// using namespace std;
// int Maxelement(vector<int> &nums)
//{
//    int maxelement = INT_MIN;
//    for (int i = 0; i <= nums.size(); i++)
//    {
//        maxelement = max(maxelement, nums[i]);
//    }
//    return maxelement;
//}
// int main()
//{
//    vector<int> nums = {23, 34, 78, 56, 67};
//    cout << Maxelement(nums) << endl;
//    cout << "REG NO 24BCE10272" << endl
//         << "Name:Abhishek";
//
//    return 0;
//}
//

// program for making the array in reverse
// #include <bits/stdc++.h>
// using namespace std;
// int reversethearray(vector<int> &nums)
//{
//    int left = 0;
//    int right = nums.size() - 1;
//    while (left < right)
//    {
//        swap(nums[left], nums[right]);
//        left++;
//        right--;
//    }
//}
// int main()
//{
//    vector<int> nums = {23, 34, 45, 56, 67, 78};
//    reversethearray(nums);
//
//    for (int num : nums)
//    {
//        cout << num << " ";
//    }
//    cout << endl;
//    cout << "REG NO. 24BCE10272";
//    return 0;
//}
#include <iostream>
#include <vector>
#include <cstdlib>  // For exit()

using namespace std;

// Function declarations
void insert();
void deleteElement();
void display();

// Global variables
int front = -1, rear = -1;
vector<int> queue;

int main() {
    int choice = 0;
    while (choice != 4) {
        cout << "\n*************************Main Menu*****************************\n";
        cout << "\n==============================================================\n";
        cout << "\n1. Insert an element\n2. Delete an element\n3. Display the queue\n4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}

void insert() {
    int item;
    cout << "Enter the element to insert: ";
    cin >> item;
    
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    queue.push_back(item);
    cout << "Value " << item << " inserted successfully!" << endl;
}

void deleteElement() {
    if (front == -1 || front > rear) {
        cout << "UNDERFLOW - Queue is empty!" << endl;
        return;
    }
    
    int item = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    queue.erase(queue.begin());  // Remove the front element
    cout << "Value " << item << " deleted successfully!" << endl;
}

void display() {
    if (rear == -1) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}