// Traversing-a-string..


#include <iostream>
using namespace std; 

    int main(){
        string name = "Vibhut"; 
        int i; 
    for (i = 0;  i < name.length(); i++){
        cout << name[i] << ""; 
    }
        return 0; 
    }  

// #include <iostream>
// using namespace std; 

// int main() {
//     string name = "Vibhuti"; 
//     int i;  
    
//     for(i = 0; i < name.length(); i++){ 
//         cout<< name[name.length()-5] << ""; 
//     }
//     return 0; 
// } 


#include <iostream>
using namespace std; 

int main(){
    string name = "Vibhuti"; 

    cout<< name[name.length()/2]; 
} 