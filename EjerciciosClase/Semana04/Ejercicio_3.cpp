//Pregunta 1: Encuentra dos numeros en la lista que sumen 10 y que sean diferentes.
//Pregunta 2: O(n**2)
#include <iostream>

using namespace std;

bool twoSum(int [],int );

int main(){
    int arra[10]={1,2,3,4,5,77,7,8,9,20};
    bool Bandera = twoSum(arra,10);
    cout<<Bandera<<endl;
    return 0;
}

bool twoSum(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=j && array[i]+array[j]==10) return true;   
        }
    }
    return false;
}