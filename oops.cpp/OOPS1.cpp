#include<iostream>
#include<string>
using namespace std;
//class Teacher{
//    // to show the data not to everyone 
//private:
//    double salary;
//
//public:// to show the data to everyoone
//// properties
//string name;
//string dept;
//string subject;
//// method/ member functions
//
//void changedept(string newdept){
//    dept= newdept;
//}
//// to give the acces of private class  we use
//
////setter  > to get the private value
//void setsalary(double s){
//    salary=s;
//}
////getter
//double getsalary(){
//    return salary;
//   }
//
//    
//
//};
//
//
// int main(){
//    Teacher t1;
//    t1.name="Sumit";
//    t1.subject="ruby";
//    t1.dept= "computer Science";
//    t1.setsalary(250000);
//
//
//    cout<<t1.name<<endl;
//    cout<<t1.getsalary()<<endl;
//    return 0;
// }
//#include<iostream>
//#include<string>
//using namespace std;

//class Student{
// //propeties 
//    string name ;
//    float cgpa;
//    // method 
//public:
//    void getpercentage(){
//        cout<<(cgpa*10)<<"%\n";
//    }
////setter
//        void setname(string nameVal){
//            name= nameVal;
//        }
//        void setcgpa( float cgpaval){
//            cgpa= cgpaval;
//        }
//        // getter
//
//         string getname( ){
//            return name;
//
//        }
//        float getcgpa(){
//            return cgpa;
//
//        }
//
//
//    
//};
//    int main(){
//        Student s1;
//        s1.setname("Abhishek");
//        s1.setcgpa(10);
//        cout<<s1.getname()<<endl;
//        cout<<s1.getcgpa()<<endl;
//      
//        return 0; 
//
//    }  


//class car{
//    public:
//     string name;
//     string color;
//
//
//    car (){
//        cout<<"without parametetr constructor \n";}
//    car( string name, string color){
//        cout<<"with parameter constructor";
//        this->name= name;
//        this->color=color;
//    }
//     void start() {
//        cout<<" car is started";
//    }
//    void stop(){
//        cout<<"car is stopped";
//    }
//    string getname(){
//        return name;
//
//    }
//
//
//    };
//
//    int main(){
//        car c0;
//        car c1( "maruti 800", "red");
//            cout<<" the car is :"<<c1.getname()<<endl;
//            cout<<endl;
//            return 0;
//
//        
//    }
// 
#include<iostream>
#include<string>
using namespace std;

// for making the function for user having account
//class user{
//    private:   
//    int id;
//    string password;
//    public:
//    string username;
//    
//    user( int id ){
//        this-> id= id;
//    }
//    // getter
//    string getpassword(){
//        return password;
//    }
//    //setter
//    void setpassword(string password){
//        this->password=password;
//
//
//    }
//};
// int main(){
//    user user1(101);
//    user1.username= "apna college";
//    user1.setpassword("abcd");
//    cout<<"username :"<<user1.username<<endl;
//    cout<<"user password :"<<user1.getpassword()<<endl;
//    return 0;
//
// }


// single level inheritance
//class animal{
//public:
//    string color;
//    void eats() {
//        cout<<"eats\n";
//
//    }
//    void breaths(){
//        cout<<"breaths";
//
//    }
//};
//
//class fish : public animal {
//        public:
//        int fins;
//        void swim(){
//            cout<<" swim";
//
//        }
//
//    
//};
//
// int main() {
//    fish f1;
//    f1.swim();
//    cout<<endl; 
//    f1.eats();
//    cout<<endl;
//    f1.breaths();
//}


//multiple level inheritance 
// by an example of dog and mammel 
//class animal{
//    public:
//    void eats(){
//        cout<<"eats"<<endl;
//    }
//    void breaths(){
//        cout<<"breaths"<<endl;
//
//    } 
//};
//class mammel: public animal{
//    public:
//    string bloodtype;
//    mammel(){
//        bloodtype= "warm";
//
//    }
//};
//class dog : public mammel{
//    public:
//    void tailwags(){
//        cout<<"tailwaags "<<endl;
//    }
//
//} ;  
//int main(){
//    dog d1;
//   d1.eats();
//   d1.breaths();
//   d1.tailwags();
//    cout<<d1.bloodtype<<endl;
//   
//     
//     return 0;
//
//}
// 



// multiple inheritance 
//class teacher{
//    public:
//    int salary;
//    string subject;
//
// };
// class student{
//    public:
//    int rollno;
//    float cgpa;
//
// };
//
//
// class TA:  public teacher, public student{
//     string name;
//
// };
//int main(){
//     TA ta1;
//    
//    ta1.rollno= 23;
//    ta1.subject= " sst";
//    ta1. cgpa = 9.5;
//    cout<<ta1. rollno<<endl;
//    cout<<ta1.subject<<endl;
//    cout<<ta1.cgpa<<endl;
//    return 0;
//
//}


// polymorphism
//compile time polymorphism
//class print{
//    public:
//    void show( int x){
//      cout<<" int:"<<x<<endl;
//
//    }
//    void show( string str){
//      cout<<"string:"<<str<<endl;
//    }
//
//};
//int main( ){
//   print p1;
//   p1.show(25);
//   p1.show("Abhishek");
//   return 0;
//   
//}


// run time polymorphism 
// function overloading 
 class parents{
   public:
   void show (){
      cout<<"parent class show....\n";
   }
 };
 class child: public parents {
   public:
   void show(){
      cout<<"child class show....\n";
   }

 };
 int main(){
    child child1;
    child1.show();

    
 }





 
     









