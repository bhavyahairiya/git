#include <iostream>
using namespace std;
class calculator{

    public:
int sum(int a,int b=5) {
return a+b;}
int substract(int a ,int b=4){
return a-b;
}
};
int main(){
calculator c;
cout<<"The sum is"<<c.sum(10,8)<<endl;
cout<<"THE default sum is"<<c.sum(10)<<endl;        /*default sum printing*/

cout<<"THE DIFFRENCE IS"<<c.substract(89,78)<<endl;
cout<<"THE Default DIFFRENCE IS"<<c.substract(89)<<endl;
return 0;



}