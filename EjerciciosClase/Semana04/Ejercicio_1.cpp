//Pregunta 1: Encontra el numero mas grande del arreglo
//Pregunta 2: O(n**2)
#include <iostream>

using namespace std;

void greatestNumber(int [],int);

int main(){
    int arra[10]={1,2,3,4,5,77,7,8,9,20};
    greatestNumber(arra,10);
    return 0;
}

void greatestNumber(int array[],int n){
    int temp=0;
    for(int i = 0;i < n; ++i) {
        if(temp < array[i]) temp = array[i];
    }  
    cout<<"Greatest Number: " <<temp<<endl;;
}