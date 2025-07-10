//#include<iostream>
//#include<vector>
//using namespace std;
// class stack{     // stack is the LIFO(last in first out -00) memory
//    //create stack by vector
//    vector<int>vec;
//    public: 
//    void push( int val){
//        vec.push_back(val);   
//    }
//    bool isempty(){
//            return  vec.size()==0;     
//        }
//    
//    void pop(){
//        if(isempty()){
//            cout<<"stack is empty"<<endl;
//            return ;
//
//        }
//       
//        vec.pop_back();
//
//    }
//     int top(){
//        if(isempty()){
//            cout<<"stak is empty";
//             return -1;
//            
//        }
//        int lastidx= vec.size()-1;
//        return vec[lastidx];
//     }
//
//
//
//
// };
// int main(){
//    stack s;
//    s.push(3);
//    s.push(2);
//    s.push(1);
//
//    while(!s.isempty()){
//    cout<<s.top()<<" ";
//    s.pop();
//    
//    }
//    return 0;
//
//}


 // stacke by vector with using  class templete(we can make any datatype)
 #include<iostream>
 #include<vector>
 using namespace std;
  template<class T>
  class stack{
    vector<T>vec;
    public:
    
    void push(T val){
        vec.push_back(val);
        

    }
     bool isempty(){
         return vec.size()==0;

     }
    void pop(){
        if( isempty()){
            cout<<"stack is empty";
            return ;    
        }
        vec.pop_back();

    }
    T top(){
        if( isempty()){
            cout<<"stack is empty";
            return -1;

        }

        int lastidx= vec.size()-1;
         return vec[lastidx];


    }

  };

  int main(){
    //stack<int >s;// output is 1 2 3  if int in stack<int>s and in push of 3 2 1
    stack<char>s; // then output is s d c if  char in stack<char>s and in push of c d s 
    s.push('c');
    s.push('d');
    s.push('s');
 while( !s.isempty()){
    cout<<s.top()<<" ";
    s.pop();
   

 }
 cout<<endl;

  }
  


