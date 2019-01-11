#include <iostream>
using namespace std;

int main(){
    float x=19,y=0;
    while(x>=6){
        y=1/x+y;
      x=x-1;
       
       
    }
    cout << "Sum = "<<y;
    return 0;
}