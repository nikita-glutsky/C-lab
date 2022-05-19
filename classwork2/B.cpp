#include<iostream>
using namespace std;
int main(){
int a = 1;
int b = 0;
while (a != 0){
    cin >> a;
    if ((a%2 == 0)&&(a != 0)) {
    b += 1;
    }
}
cout<< b <<endl;

return(0);
}
