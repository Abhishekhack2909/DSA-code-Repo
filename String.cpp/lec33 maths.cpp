#include<bits/stdc++.h>
using namespace std;


//no. is prime or not
string isprime( int n){
    for( int i=2;i*i<=n; i++){
        if (n%i==0) {
            return "Non prime";

        } 
        
    }
    return "prime";
    

}
int main(){
    int n =19;
    cout<<isprime(n)<<endl;
    return 0;

}

