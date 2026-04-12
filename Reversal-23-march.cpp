// Q-1 Reverse Array.. 
// Q-2 Check Palindrome.. 
// Q-3 Remove Duplicates.. 

#include <iostream> 
using namespace std; 

int main(){
    int arr[5] = {1, 2, 3, 4, 5};  // size = 5; when we divied 5/2 = 2.5 but in int it is 2 ; 
    int i; 
    int size; 
    int check;

    cout<< "Enter an element here :";

    for(i = 0; i <= size / 2; i++){ // i=0 is 1; 1/2 = 1; 1++; 
        cout<< arr[i];
    }

    return 0; 
}