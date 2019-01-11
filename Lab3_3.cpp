#include <iostream>
using namespace std;

int main(){
    float x=69,y=0;
    while(x>=2){
        y=1/x+y;
      x=x-1;
       
       
    }
    cout << "Sum = "<<y;
    return 0;
}