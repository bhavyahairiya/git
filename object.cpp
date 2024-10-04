#include <iostream>
using namespace std;
class employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a,int b,int c);//decleration matlab mil gayega
void getdata(){


    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
    cout<<"the value of c is"<<c<<endl;
    cout<<"the value of d is"<<d<<endl;
    cout<<"the value of e is"<<e<<endl;
} 



};
void employee :: setdata(int a1,int b1, int c1){//it can access the private member by putting diffrent variables
a=a1;
b=b1;
c=c1;


}






int main() {
employee bh;
// bh.a=1//this will throw error as it is a private member
bh.d=33;
bh.e=12;

bh.setdata(1,2,3);

bh.getdata();



    return 0;
}