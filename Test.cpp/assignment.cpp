//// program for finding the max element in array
//// #include <bits/stdc++.h>
////
//// using namespace std;
//int Maxelement(vector<int> &nums)
//{
//    int maxelement = INT_MIN;
//    for (int i = 0; i <= nums.size(); i++)
//    {
//        maxelement = max(maxelement, nums[i]);
//    }
//    return maxelement;
//}
//// int main()
////{
////    vector<int> nums = {23, 34, 78, 56, 67};
////    cout << Maxelement(nums) << endl;
////    cout << "REG NO 24BCE10272" << endl
////         << "Name:Abhishek";
////
////    return 0;
////}
////
//
//// program for making the array in reverse
//// #include <bits/stdc++.h>
//// using namespace std;
//// int reversethearray(vector<int> &nums)
////{
////    int left = 0;
////    int right = nums.size() - 1;
////    while (left < right)
////    {
////        swap(nums[left], nums[right]);
////        left++;
////        right--;
////    }
////}
//// int main()
////{
////    vector<int> nums = {23, 34, 45, 56, 67, 78};
////    reversethearray(nums);
////
////    for (int num : nums)
////    {
////        cout << num << " ";
////    }
////    cout << endl;
////    cout << "REG NO. 24BCE10272";
////    return 0;
////}
//#include <iostream>
//
//using namespace std;
//
//// Insert n into arr at the next open position.
//// Length is the number of 'real' values in arr, and capacity
//// is the size (aka memory allocated for the fixed size array).
//void insertEnd(int arr[], int n, int length, int capacity)
//{
//    if (length < capacity)
//    {
//        arr[length] = n;
//    }
//}
//
//// Remove from the last position in the array if the array
//// is not empty (i.e. length is non-zero).
//void removeEnd(int arr[], int length)
//{
//    if (length > 0)
//    {
//        arr[length - 1] = 0;
//    }
//}
//
//// Insert n into index i after shifting elements to the right.
//// Assuming i is a valid index and arr is not full.
//void insertMiddle(int arr[], int i, int n, int length)
//{
//    for (int index = length - 1; index >= i; index--)
//    {
//        arr[index + 1] = arr[index];
//    }
//    arr[i] = n;
//}
//
//// Remove value at index i before shifting elements to the left.
//// Assuming i is a valid index.
//void removeMiddle(int arr[], int i, int length)
//{
//    for (int index = i + 1; index < length; index++)
//    {
//        arr[index - 1] = arr[index];
//    }
//}
//
//void printArr(int arr[], int capacity)
//{
//    for (int i = 0; i < capacity; i++)
//    {
//        cout << arr[i] << ' ';
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int capacity = 10;
//    int arr[capacity] = {23, 34, 45, 45, 76, 89};
//    int length = 6;
//    cout << "before insertion";
//    printArr(arr, 10);
//
//    insertMiddle(arr, 0, 56, 6);
//    length++;
//
//    cout << "after insertion";
//    printArr(arr, 10);
//}
//
//#include<iostream>
//using namespace std;
// int main(){
//     // intilization
//      int w;
//      cin>>w;
//      if(w>2){
//        if(w%2==0 && w>2){
//            cout<<"YES"<<endl;
//        }
//        else{
//            cout<<"NO"<<endl;
//        }
//        
//    }
//        else{
//            cout<<"NO"<<endl;
//        }
//    
//      
// }
//
//

//#include<iostream>
//using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      for(int i =0; i<n ; i++){
//        string word;
//        cin>>word;
//        int l=word.length();
//          char first=word[0];  
//          char last= word[l-1];
//
//          if(l<=10){
//            cout<<word<<endl;
//         }
//         else{
//            cout<<first<<l-2<<last<<endl;
//         }
//      }
// }
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    
//    int min_pass = a[k - 1];
//    int count = 0;
//    for (int i = 0; i < n; ++i){
//        if (a[i] >= min_pass && a[i] > 0) count++;
//    cout << count << endl;
//    return 0;
//    }
//    }
//}
//
//#include<iostream>
//using namespace std;
// int main(){
//    int i=0;
//    int j=0;
//    vector<vector<int,int>>mat[i, j];
//  for( int i=0;i<5; i++){
//    for( int j =0; j<5; j++){
//        while(i>5 && j>5 && mat[3, 3]=1){
//            if( i==j && )
//        }
//        
//    }
//  }
// }
//


#include<iostream>
using namespace std;
int main(){
    string string1, string2;
     cin>> string1;
     cin>>string2;
     
   for( char &c: string1){
     c=tolower(c);
   }
    for( char  &c: string2){
        c=tolower(c);
  }

    int n =string1.length();
     int m =string2.length();
     
     if( n==m){
        cout<<"0"<<endl;
     } else if(n>m){
        cout<<"1"<<endl;
     }
     else{
        cout<<"-1"<<endl;
     }
    
     return 0;
    
    }