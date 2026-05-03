// Stack..
#include <iostream>
using namespace std; 

int main(){ 
    int top = -1; 
    int stack[5]; 

    top++; 
    stack[top] = 10; 

    top++; 
    stack[top] = 20;

    top++; 
    stack[top] = 30; 

    top--;

    cout<< "Top element is : " << top[stack] << endl; 

    return 0; 
}