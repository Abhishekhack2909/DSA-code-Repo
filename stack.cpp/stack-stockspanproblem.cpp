#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//span problem mean we need to calculate the span in which price less than or equal to the today's price then span count
//approach
// we need to calculate the previous high vlaue and count the span betweeen them including current position
// span= (i - prevhigh(idx) )
// prevhigh= first greater value previous to currrent 
void stockspanproblem( vector<int>stock, vector<int>span){
    stack<int> s;
    // for very first stock
    s.push(0);
    span[0]=1;
    
    for(int i=1; i<stock.size();i++){
        int currprice= stock[i];
        // for cheaking the condition for previous stock
        while(!s.empty()&& currprice>= stock[s.top()]){
            
            s.pop();// delete the lesser stock


        }
        if(s.empty()){
            // for the stock in which every stock is  lesser than  that 
            span[i]=i+1;

        }
        else{
            int prevhigh=s.top();
            // prevhigh define for cheaking the value of previous
            span[i]= i-prevhigh;
          
        }  

    }
    for (int i=0; i<span.size(); i++){
// for print the span 
        cout<<span[i]<<" ";

    }
    cout<<endl;

}

int main(){
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span={0,0,0,0,0,0,0};// for instilaiztion
    stockspanproblem(stock,span);// recall the function
    return 0;

}
