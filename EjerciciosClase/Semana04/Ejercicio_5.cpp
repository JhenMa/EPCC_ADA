//Pregunta 1: 
//Pregunta 2: O(log n)
#include <iostream>

using namespace std;

void pick_resume(int* [],int);

int main(){
    int arra[10]={1,2,3,4,5,77,7,8,9,20};
    pick_resume(arra,10);
    return 0;
}

void pick_resume(int* array[],int n){
    string eliminate = "top";
    int* temp = new int[n];
    while (n>1)
    {
        if (eliminate == "top")
        {
            temp = array[n/2,n-1];
            eliminate = "bottom";
        }
        else if (eliminate == "bottom")
        {
            temp = array[0,n/2];
            eliminate = "top";
        }
    }
    cout<<"pick resume: " <<temp<<endl;;
}