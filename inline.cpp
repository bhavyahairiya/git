#include<iostream>
using namespace std;
 inline int produt(int a,int b){
    //do not use inline with static function
//     static int c=0;//this value only execute once
// c=c+1;//next time this function will run
return a*b;}//+c
float moneyrecived(int currentmoney,float factor=1.04){

return currentmoney *factor;


}int main() {
    int a,b;
int currentmoney=100000;
    cout<<"enter the valxue of a and b";
    cin>>a>>b;
    cout<<"If you have "<<currentmoney<<"Rs in you bank account you will get an intrest of "<<moneyrecived(currentmoney,1.01)<<"after one year"<<endl;
    cout<<"If you have "<<currentmoney<<"Rs in you bank account you will get an intrest of "<<moneyrecived(currentmoney)<<"after one year"<<endl;//defaut agrument used
    cin>>a>>b;
    
//     cout<<"the product off a and b is"<<produt(a,b)<<endl;
//    cout<<"the product off a and b is"<<produt(a,b)<<endl;
// cout<<"the product off a and b is"<<produt(a,b)<<endl;    
// cout<<"the product off a and b is"<<produt(a,b)<<endl;           inline function
// cout<<"the product off a and b is"<<produt(a,b)<<endl;
// cout<<"the product off a and b is"<<produt(a,b)<<endl;
// cout<<"the product off a and b is"<<produt(a,b)<<endl;return 0;
}
//constant argument
//int contant(const char *p)

///....inlinefunction
// Reduced function call overhead
// Faster execution
// Improved performance



// Here are scenarios when to use inline functions:for small functions only

//Few lines of code (e.g., getters, setters)
//Simple calculations (e.g., arithmetic operations)
//Loops with frequent function calls
// No recursive calls
// No dynamic memory allocation