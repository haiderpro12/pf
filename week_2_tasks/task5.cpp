#include <iostream>
using namespace std;
void f1();
int x=6;
main(){
f1();
cout<<x;
}
void f1()
{
int x = 4;
}
int f2(int a, int b){
return a+b+x;
}