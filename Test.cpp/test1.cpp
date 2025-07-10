
// void pattern1( int n){
//     for( int i =0 ; i<n; i++ ){
//
//     for( int j=0; j<2*i+1; j++){
//         cout<<"*";
//     }
//     for( int j=0; j<(n-i-1); j++){
//         cout<<" ";
//
//     }
//     cout<<endl;
//     }
// }
//
// void inverted_pyramid(int n){
//    for( int i=0; i<n;i++){
//
//
//
//     for( int j=0;j<2*n-(2*i-1); j++){
//         cout<<"*";
//
//     }
//     for( int j =0;j<i; j++){
//         cout<<" ";
//     }
//     cout<<endl;
//  }
// }
//
// int main(){
//     int n =8;
//
//
//
//        pattern1(n);
//        inverted_pyramid(n);
//
//       return 0;
// }
//
//

// void pattern( int n){
//     int start =1;
//     for( int i=0;i<n;i++){
//         if(i%2==0) start = 1;
//         else start =0;
//         for( int j=0; j<i;j++){
//             cout<<start;
//         start = 1-start;
//         }
//         cout<<endl;
//
//     }
//
//
// } int main(){
//     int n=10;
//     pattern(n);
//     return 0;
//
// }
// #include<iostream>
// using namespace std;
// void pattern(int n){
//     int spaces= 2*(n=2);
//     for( int i =0; i<=n;i++){
//         for( int j=1; j<i; j++){
//             cout<<j;
//         }
//         for( int j=1; j<=spaces; j++){
//             cout<<" ";
//         }
//         for( int j=i; j>i;j--){
//             cout<<j;
//         }
//
//
//         cout<<endl;
//
//
//
//
//     }
//
//
//
// }
//  int main(){
//     int n=7;
//     pattern( n);
//     return 0;
//  }
// #include<iostream>
// using namespace std;
//
//
//  void bubblesort( int arr[], int n){
//  for( int i=0; i<n-1; i++ ){
//     for(int j=0; j<n-i-1; j++){
//         if( arr[j] >arr[j+1] ){
//
//         swap(  arr[j],arr[j+1]);
//         }
//     }
//
//  }
//
//  }
//  void printarray(int arr[],int n){
//     for( int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//
//     }
//     cout<<endl;
//  }
//
//  int main(){
//     int n=5;
//     int arr[]={2,7,3,6,5};
//     bubblesort( arr,n);
//     printarray( arr,n );
//     return 0;
//  }
//
//
// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
//
//
//   string str="Abhishk Tripathi";
//     cout <<str.length()<<endl;
//
//     return 0;
// }
//
// #include <iostream>
// #include <vector>
// #include <climits> // For INT_MIN
// using namespace std;
//
// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int n = nums.size();
//         int maxprod = INT_MIN;
//
//         for (int i = 0; i < n-2; i++) {
//             for (int j = i+1; j < n-1; j++) {
//                 for (int k = j+1; k < n; k++) {
//                     int curr = nums[i] * nums[j] * nums[k];
//                     if (curr > maxprod) {
//                         maxprod = curr;
//                     }
//                 }
//             }
//         }
//         return maxprod;
//     }
// };
//
// int main() {
//     // Test case 1: [-10, -10, 5, 2, 8, 7] → 800
//     vector<int> nums = {-10, -10, 5, 2, 8, 7};
//
//     Solution sol;
//     cout << "Maximum product: " << sol.maximumProduct(nums) << endl;
//     // Output: 800
//
//     return 0;
// #include<bits/stdc++.h>
// using namespace std;
// int result;
//  template<typename t>t add( t num1 , t num2){
//    return (num1+num2);
//  }
//   int  main(){
//     int result1;
//     double result2;
//      result1= add<int> (2, 3);
//      cout<<" 2+3 ="<< result1<<endl;
//
//      result2=  add<int>(2.2, 3.3);
//      cout<<" 2.2 + 3.3= "<<result<<endl;
//
//      return 0;
//
//
//
//  }

// program for mfinding the max elemnet in array
// #include <bits/stdc++.h>
//
// using namespace std;
// int Maxelement(vector<int> &nums)
//{
//  int maxelement = INT_MIN;
//  for (int i = 0; i <= nums.size(); i++)
//  {
//    maxelement = max(maxelement, nums[i]);
//  }
//  return maxelement;
//}
// int main()
//{
//  vector<int> nums = {23, 34, 78, 56, 67};
//  cout << Maxelement(nums) << endl;
//  return 0;
//}
////program worked

// program for making the array in reverse
//#include <bits/stdc++.h>
//using namespace std;
//int reversethearray(vector<int> &nums)
//{
//  int left = 0;
//  int right = nums.size() - 1;
//  while (left < right)
//  {
//    swap(nums[left], nums[right]);
//    left++;
//    right--;
//  }
//}
//int main()
//{
//  vector<int> nums = {23, 34, 45, 56, 67, 78};
//  reversethearray(nums);
//
//  for (int num : nums)
//  {
//    cout << num << " ";
//    }
//  return 0;
//}
//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//// Function to get precedence of operators
//int precedence(char op) {
//    if(op == '+' || op == '-') return 1;
//    if(op == '*' || op == '/') return 2;
//    return 0;
//}
//
//// Function to convert infix to postfix
//string infixToPostfix(string infix) {
//    stack<char> s;
//    string postfix = "";
//
//    for(char ch : infix) {
//        if(isalpha(ch)) {
//            
//            postfix += ch;
//        }
//        else if(ch == '(') {
//            s.push(ch);
//        }
//        else if(ch == ')') {
//            while(!s.empty() && s.top() != '(') {
//                postfix += s.top();
//                s.pop();
//            }
//            if(!s.empty()) s.pop(); 
//        }
//        else {
//            
//            while(!s.empty() && precedence(s.top()) >= precedence(ch)) {
//                postfix += s.top();
//                s.pop();
//            }
//            s.push(ch);
//        }
//    }
//    while(!s.empty()) {
//        postfix += s.top();
//        s.pop();
//    }
//
//    return postfix;
//}
//
//int main() {
//    string infix;
//    cout << "Enter infix expression (e.g., A+B*C): ";
//    cin >> infix;
//
//    string postfix = infixToPostfix(infix);
//    cout << "Postfix expression: " << postfix << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <stack>
//#include <string>
//#include <cctype>
//using namespace std;
//
//// Function to get precedence of operators
//int getPrecedence(char op) {
//    if(op == '^') return 3;
//    if(op == '*' || op == '/') return 2;
//    if(op == '+' || op == '-') return 1;
//    return 0;
//}
//
//// Function to check associativity: returns true if right-associative
//bool isRightAssociative(char op) {
//    return (op == '^');
//}
//
//// Function to check if character is an operator
//bool isOperator(char ch) {
//    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
//}
//
//// Infix to Postfix Conversion Function
//string infixToPostfix(string infix) {
//    stack<char> st;
//    string postfix = "";
//
//    for(char ch : infix) {
//        if(isalnum(ch)) {
//            postfix += ch; // Operand directly to postfix
//        }
//        else if(ch == '(') {
//            st.push(ch);
//        }
//        else if(ch == ')') {
//            while(!st.empty() && st.top() != '(') {
//                postfix += st.top();
//                st.pop();
//            }
//            if(!st.empty()) st.pop(); // Remove '('
//        }
//        else if(isOperator(ch)) {
//            while(!st.empty() && st.top() != '(' &&
//                  ((getPrecedence(st.top()) > getPrecedence(ch)) ||
//                  (getPrecedence(st.top()) == getPrecedence(ch) && !isRightAssociative(ch)))) {
//                postfix += st.top();
//                st.pop();
//            }
//            st.push(ch);
//        }
//    }
//
//    // Pop remaining operators
//    while(!st.empty()) {
//        postfix += st.top();
//        st.pop();
//    }
//
//    return postfix;
//}
//
//// Main function
//int main() {
//    string infix;
//    cout << "Enter infix expression (e.g., A+B*C^D): ";
//    cin >> infix;
//
//    string postfix = infixToPostfix(infix);
//    cout << "Postfix expression: " << postfix << endl;
//
//    return 0;
//}
//