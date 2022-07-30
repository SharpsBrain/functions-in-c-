#include <iostream>

using namespace std;
/*int max(int x, int y){
if(x>y)
    return x;
    else
        return y;

}
int main(void)
{
    //declaration of variables:
    int a=10,b=20;
    //calling the above function:
    int m=max(a,b);
    cout<<"m is \n"<<m;
    return 0;
}*/
/*void fun(int x){
x=30;
}
int main(void){
int x=20;
fun(x);
cout<<"x = \n"<<x;
return 0;
*/
//declaration of the function:
int sum(int a, int b=20){
int result;
result=a+b;
return (result);
}
int main(){
//local variables declaration:
int a=100;
int b=200;
int result;
//calling the function to add the values:
result=sum(a,b);
cout<<"Total value is :"<<result<<endl;
//calling the function again as follows:
result=sum(a);
cout<<"Total value is :"<<result<<endl;
return 0;
}
