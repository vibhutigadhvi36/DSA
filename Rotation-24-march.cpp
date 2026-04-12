//Q.1 Left Rotate the Array.. 
// #include <iostream> 
// using namespace std; 

//     int main() { // 0,  1,  2,  3,  4; // 
//         int arr[5]{10, 20, 30, 40, 50}; 
//         int i; 
//         int temp = arr[0]; 
//         int size = 5; 

//         for(i = 0; i < size - 1; i++){ 
//             arr[i] = arr[i + 1]; 
//         }
//         arr[size - 1] = temp; 

//         for(i = 0; i < size; i++ ){
//             cout<< arr[i] << " "; 
//         }
//         return 0;
//     }   
// 0-20, 1-30, 2-40, 3-50, 4-10; cout<< "Written by one and only OG"  << VG!! <<.. 


// #include <iostream> 
// using namespace std; 

// int main() { 
//     int arr[5] = {10, 20, 30, 40, 50}; 
//     int i; 
//     int size = 5; 
//     int temp = arr[0]; 

//     for(i = 0; i < size - 1; i++){
//         arr[i] = arr[i + 1]; 
//     }
//     arr[size - 1] = temp; 

//     for(i = 0; i < size; i++){
//         cout<< arr[i] << " "; 

//     }
//     return 0; 
// }


#include <iostream>
using namespace std; 

int main() {
    int arr[10]= {10, 20, 30, 40, 50}; 
    int i; 
    int size = 10; 
    int temp = arr[0]; 

    for(i = 0; i < size -1; i++){
        arr[i] = arr[i + 1]; 
    }
    arr[size - 1] = temp; 

    for(i = 0; i < size; i++){
        cout<< arr[i] << " "; 
    }
    return 0; 
} 
    