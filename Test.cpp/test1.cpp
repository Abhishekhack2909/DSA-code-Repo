
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
// #include <bits/stdc++.h>
// using namespace std;
// int reversethearray(vector<int> &nums)
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
// int main()
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
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
//
//// Function to get precedence of operators
// int precedence(char op) {
//     if(op == '+' || op == '-') return 1;
//     if(op == '*' || op == '/') return 2;
//     return 0;
// }
//
//// Function to convert infix to postfix
// string infixToPostfix(string infix) {
//     stack<char> s;
//     string postfix = "";
//
//     for(char ch : infix) {
//         if(isalpha(ch)) {
//
//             postfix += ch;
//         }
//         else if(ch == '(') {
//             s.push(ch);
//         }
//         else if(ch == ')') {
//             while(!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             if(!s.empty()) s.pop();
//         }
//         else {
//
//             while(!s.empty() && precedence(s.top()) >= precedence(ch)) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }
//     while(!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }
//
//     return postfix;
// }
//
// int main() {
//     string infix;
//     cout << "Enter infix expression (e.g., A+B*C): ";
//     cin >> infix;
//
//     string postfix = infixToPostfix(infix);
//     cout << "Postfix expression: " << postfix << endl;
//
//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <string>
// #include <cctype>
// using namespace std;
//
//// Function to get precedence of operators
// int getPrecedence(char op) {
//     if(op == '^') return 3;
//     if(op == '*' || op == '/') return 2;
//     if(op == '+' || op == '-') return 1;
//     return 0;
// }
//
//// Function to check associativity: returns true if right-associative
// bool isRightAssociative(char op) {
//     return (op == '^');
// }
//
//// Function to check if character is an operator
// bool isOperator(char ch) {
//     return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
// }
//
//// Infix to Postfix Conversion Function
// string infixToPostfix(string infix) {
//     stack<char> st;
//     string postfix = "";
//
//     for(char ch : infix) {
//         if(isalnum(ch)) {
//             postfix += ch; // Operand directly to postfix
//         }
//         else if(ch == '(') {
//             st.push(ch);
//         }
//         else if(ch == ')') {
//             while(!st.empty() && st.top() != '(') {
//                 postfix += st.top();
//                 st.pop();
//             }
//             if(!st.empty()) st.pop(); // Remove '('
//         }
//         else if(isOperator(ch)) {
//             while(!st.empty() && st.top() != '(' &&
//                   ((getPrecedence(st.top()) > getPrecedence(ch)) ||
//                   (getPrecedence(st.top()) == getPrecedence(ch) && !isRightAssociative(ch)))) {
//                 postfix += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }
//
//     // Pop remaining operators
//     while(!st.empty()) {
//         postfix += st.top();
//         st.pop();
//     }
//
//     return postfix;
// }
//
//// Main function
// int main() {
//     string infix;
//     cout << "Enter infix expression (e.g., A+B*C^D): ";
//     cin >> infix;
//
//     string postfix = infixToPostfix(infix);
//     cout << "Postfix expression: " << postfix << endl;
//
//     return 0;
// }
//
// #include <iostream>
// using namespace std;
//
// unsigned long long factorial(int n) {
//     if (n < 0) return 0;
//     if (n == 0 || n == 1) return 1;
//     return n * factorial(n - 1);
// }
//
// int main() {
//     int num;
//     cout << "Enter a non-negative integer: ";
//     cin >> num;
//     cout << "Factorial of " << num << " is: " << factorial(num) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
//{
//     string n;
//     cin >> n;
//     int count = 0;
//     for (int i = 0; i < n.size(); i++)
//     {
//
//         if (n[i] == '4' || n[i] == '7')
//         {
//             count++;
//         }
//     }
//     if (count == 4 || count == 7)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     string n;
//     cin >> n;
//     vector<int> m;
//
//     for (char c : n) {
//         if (c != '+') {
//             m.push_back(c - '0');
//         }
//     }
//     sort(m.begin(), m.end());
//     for (int u = 0; u < m.size(); u++) {
//         cout << m[u];
//         if (u != m.size() - 1) {
//             cout << "+";
//         }
//     }
//
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
//{
//    int n;
//    cout << "enter the number";
//    cin >> n;
//    int array[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> array[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

// codeforces  q ->words
// #include <bits/stdc++.h>
// using namespace std;
// int main()
//{
//    string s1;
//    cin >> s1;
//    int uppercount = 0;
//    int lowercount = 0;
//    for (char &c : s1)
//    {
//        if (c >= 'a' && c <= 'z')
//        {
//            lowercount++;
//        }
//
//        else if (c >= 'A' && c <= 'Z')
//            uppercount++;
//    }
//
//    if (uppercount == lowercount || lowercount > uppercount)
//    {
//        string cs;
//        for (char &w : s1)
//        {
//            cs += tolower(w);
//        }
//        cout << cs << endl;
//    }
//    else
//    {
//        string sc;
//        for (char &e : s1)
//        {
//            sc += toupper(e);
//        }
//        cout << sc << endl;
//    }
//    return 0;
//}
//

// codeforces q->467A - George and Accommodation
// #include <iostream>
// using namespace std;
// int main()
//{
//    int n;
//    cin >> n;
//    int count = 0;
//    if (n <= 0)
//    {
//        cout << "0" << endl;
//        return 0;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        int p, q;
//        cin >> p >> q;
//
//        if (q - p >= 2)
//        {
//            count++;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}
//
// codeforces questiioon string task
// #include <bits/stdc++.h>
// using namespace std;
// int main()
//{
//    string s1;
//    cin >> s1;
//    string result;
//    for (char &c : s1)
//    {
//        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
//              c == 'A' || c == 'Y' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
//        {
//            result += c;
//        }
//    }
//
//    string r1;
//    for (char &w : result)
//    {
//        cout << "." << (char)tolower(w);
//    }
//
//    return 0;
//}

// codeforces question boy or girl
// #include <iostream>
// using namespace std;
// int main()
//{
//     string username;
//     cin >> username;
//     int n = username.length();
//     int count = 0;
//
//     for (int i = 0; i < n; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (username[i] = username[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             count++;
//         }
//     }
//     if (count % 2 == 0)
//     {
//         cout << "CHAT WITH HER!" << endl;
//     }
//     else
//     {
//         cout << "IGNORE HIM!" << endl;
//     }
//
//     return 0;
// }
//

// #include <iostream>
// using namespace std;
// int main()
//{
//     string position;
//     cin >> position;
//     int count = 1;
//     int n = position.length();
//     int maxi = 1;
//     for (int i = 0; i < n; i++)
//     {
//
//         for (int j = i + 1; j < n; j++)
//         {
//             if (position[i] == position[j])
//             {
//                 count++;
//                 if (count > maxi)
//                     maxi = count;
//             }
//             else
//             {
//                 count = 1;
//             }
//         }
//     }
//
//     if (count >= 7)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//
//     string position;
//     cin >> position;
//     int count = 1, maxi = 1;
//     for (int i = 1; i < position.length(); i++)
//     {
//         if (position[i] == position[i - 1])
//         {
//             count++;
//             if (count > maxi)
//                 maxi = count;
//         }
//         else
//         {
//             count = 1;
//         }
//     }
//     if (maxi >= 7)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
//     return 0;
// }
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i = 0; i < n; ++i) {
//         int p;
//         cin >> p;
//         sum += p;
//     }
//     double average = (double)sum / n;
//     cout << average << endl;
//     return 0;
// }

// code forces problem(queue of the school)
// #include <iostream>
// using namespace std;
// int main()
//{
//    char boy = 'B';
//    char girl = 'G';
//    int n;
//    int t;
//    cin >> n >> t;
//    string word;
//    cin >> word;
//    while (t--)
//    {
//        for (int i = 0; i < n - 1;)
//        {
//            if (word[i] == 'B' && word[i + 1] == 'G')
//            {
//                swap(word[i], word[i + 1]);
//                i++;
//            }
//            i++;
//        }
//    }
//    cout << word << endl;
//
//    return 0;
//}

// codeforces q presents
// #include <iostream>
// using namespace std;
// int main()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 1; i <= n; i++)
//    {
//        int a;
//        cin >> a;
//        arr[a - 1] == i;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}

// codeforces q Dubstep
// #include <iostream>
// using namespace std;
// int main()
//{
//    string w;
//    cin >> w;
//    int n = w.length();
//    string result;
//    for (int i = 0; i < n; i++)
//    {
//        if (i + 2 < n && w[i] == 'W' && w[i + 1] == 'U' && w[i + 2] == 'B')
//        {
//            if (!result.empty() && result.back() != ' ')
//            {
//                result += ' ';
//            }
//            i += 2;
//        }
//        else
//        {
//            result += w[i];
//        }
//    }
//    cout << result << endl;
//    return 0;
//}
// #include <iostream>
// using namespace std;
// int main()
//{
//    long long n, m;
//    cin >> n >> m;
//     long long sum = 0;
//      long long position = 1;
//
//    for (int current = 0; current <= m; current++)
//    {
//        int target;
//        cin >> target;
//          long long time;
//        if (target >= position)
//        {
//            time = target - position;
//        }
//        else
//        {
//            time = (n - position) + target;
//        }
//        sum += time;
//        position = target;
//    }
//    cout << sum << endl;
//    return 0;
//}
// #include <iostream>
// using namespace std;
// int main()
//{
//    string ch;
//    cin >> ch;
//    if (ch[0] >= 'a' && ch[0] <= 'z')
//    {
//        // we use Ascii approach here
//        ch[0] -= 32;
//    }
//    cout << ch << endl;
//}
//
// #include <iostream>
// #include <cmath>
////
// using namespace std;
//  int main()
//{
//      string ch;
//      cin >> ch;
//      char position = 'a';
//      int sum = 0;
//      for (char c : ch)
//      {    //we use abs for shorter code
//          int diff = abs(c - position);
//          // 2case here either clockwise  or counterclockwise
//          sum += min(diff, 26 - diff);
//          position = c;
//      }
//      cout << sum << endl;
//  }
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, m, a, b;
//     cin >> n >> m >> a >> b;
//     int normal = n * a;
//      int special = ((n + m - 1) / m) * b;
//     int mixed = (n / m) * b + min((n % m) * a, b);
//
//     cout << min({normal, special, mixed});
// }
//
// #include <bits/stdc++.h>
// using namespace std;
// int main()
//{
//    string ch, target;
//    cin >> ch >> target;
//    reverse(ch.begin(), ch.end());
//    if (ch == target)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//}
// #include <iostream>
// using namespace std;
// int main()
//{
//    long long n, k;
//    cin >> n >> k;
//
//     if (n < 1 || k < 1 || k > n) {
//        cout<<"Invalid"
//        return 0;
//    }
//    long long even_num = (n + 1) / 2;
//    if (k >= even_num && n > 0)
//    {
//        cout << 2 * (k - even_num) << endl;
//    }
//    else
//    {
//        cout << 2 * k - 1 << endl;
//    }
//}
//
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//    int num;
//    cin >> num;
//    vector<int> a(num);
//    int sum = 0;
//    for(int &x : a) {
//        cin >> x;
//        sum += x;
//    }
//    sort(a.rbegin(), a.rend());
//    int msum= 0;
//    int  count = 0;
//    for(int x : a) {
//        msum += x;
//        count++;
//        if(msum > sum - msum) {
//        break;
//        }
//    }
//    cout << count;
//}
//

// merge sort algorithm
// #include <iostream>
// using namespace std;
//
// void selectionsort(int arr[], int n)
//{
//     for (int i = 0; i < n - 1; i++)
//     {
//         int smallestindex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[smallestindex]) // Changed from while to if
//             {
//                 smallestindex = j;
//             }
//         }
//         swap(arr[i], arr[smallestindex]); // Added missing semicolon
//     }
// }
//
// void printarray(int arr[], int n)
//{
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
//
// int main()
//{
//     int arr[] = {23, 2, 45, 0};
//     int n = 4;
//     selectionsort(arr, n);
//     printarray(arr, n);
//     return 0; // Added return statement for good practice
// }

// quick sort algorightm
// #include <iostream>
// using namespace std;
// int main()
//{
//
//    int partition(arr[], int st, int end)
//    {
//        int pivot = patition
//    }
//    void quicksort(int arr[], int st, int end)
//    {
//        /// base case
//        if (start >= end)
//        {
//            return;
//        }
//
//        int p = partition(arr, st, end);
//
//        quicksort(arr, st, p - 1);
//        quicksort(arr, p + 1, end);
//    }
//}
//
// codeforces contests soultion
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//
//    string n;
//    cin>>n;
//     vector<int>prevrate(n);
//
//    for(int i=0;i<n;i++){
//        cin>>prevrate[i];
//    }
//    vector<int>newpos(n);
//    for( int i=0; i<n; i++){
//        int count=0;
//        for( int j=0; j<n; j++){
//            if(prevrate[j]> prevrate[i]){
//                count++;
//            }
//        }
//        newpos[i]=count+1;
//
//    }
//    for( int i =0; i<n;i++){
//        cout<<newpos[i]<<endl;
//    }
//    cout<<endl;
//    return 0;
//}

// codeforces elephant soln
// #include <iostream>
// using namespace std;
// int main()
//{
//    int x;
//    cin >> x;
//    if (x <= 5)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        int q = x % 5;
//        int w = (x - q) / 5;
//        if (x % 5 == 0)
//        {
//            cout << w << endl;
//        }
//        else
//        {
//            cout << w + 1 << endl;
//        }
//    }
//    return 0;
//}

// codeforces question  soldiers and bananaes
// #include <iostream>
// using namespace std;
// int main()
//{
//    int n, k, w;
//    cin >> k >> n >> w;
//    int cost = k * w * (w + 1) / 2;
//    int ans = cost - n;
//    if (ans < 0)
//    {
//        ans = 0;
//    }
//    cout << ans << endl;
//
//    return 0;
//}

// #include <iostream>
// using namespace std;
// class Stack
//{
// private:
//     int arr[100]; // Fixed-size array
//     int top;
//
// public:
//     Stack()
//     {
//         top = -1;
//     }
//
//     // Push element into stack
//     void push(int value)
//     {
//         if (top == 99)
//         {
//             cout << "Stack Overflow\n";
//         }
//         else
//         {
//             arr[++top] = value;
//         }
//     }
//
//     // Pop element from stack
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow\n";
//         }
//         else
//         {
//             top--;
//         }
//     }
//
//     // Peek top element
//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//
//     // Check if stack is empty
//     bool isEmpty()
//     {
//         return top == -1;
//     }
//
//     // Display stack elements
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty\n";
//         }
//         else
//         {
//             for (int i = top; i >= 0; i--)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };
//
// int main()
//{
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.display();
//     cout << "Top element: " << s.peek() << endl;
//     s.pop();
//     s.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Queue
{
private:
    int arr[100]; // Fixed-size array
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue element
    void enqueue(int value)
    {
        if (rear == 99)
        {
            cout << "Queue Overflow\n";
        }
        else
        {
            if (front == -1)
                front = 0;
            arr[++rear] = value;
        }
    }

    // Dequeue element
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
        }
        else
        {
            front++;
        }
    }

    // Get front element
    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    // Display queue elements
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Front element: " << q.getFront() << endl;
    q.dequeue();
    q.display();
    return 0;
}
