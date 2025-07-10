 #include<iostream>
 #include<iterator>
 using namespace std;

  void printlist( list<int>ll){
list<int>::iterator itr;
 for(itr=ll.begin(); itr != ll.end(); itr++){
    cout<<(*itr)<<"->";

 }
 cout<<"NULL"<<endl;

}

int main(){
    list<int> ll;
    cout<<ll.size()<<endl;


    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    cout<<" head ="<<ll.front()<<endl;
    cout<<"tail= "<<ll.back()<<endl;
    printlist(ll);
    return 0 ;


   }