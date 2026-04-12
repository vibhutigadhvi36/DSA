// Self Exercises #2.3
// Q-1 Search an element..
// Q.2 Count occurrences..
// Q.3 Calculate sum or average..
// Q.4 Find min or max.. 

#include <iostream>
using namespace std; 
// Q1. Search an Element..

int main(){
    int arr[5] = {10, 7, 40, 54, 65};
    int number;
    bool  found = false; 

            cout<< "Enter an element to search : \n"; 
             cin>> number; 

    for(int i = 0; i < 5; i++){
            cout<< arr[i]; 
    }
    if(found){ 
        cout<< "Element found!"; 
    }
    else{
        cout<< "not found"; 
    }
    return 0;
}