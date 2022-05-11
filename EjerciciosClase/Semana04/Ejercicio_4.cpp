//Pregunta 1: Compara si existe todas las letras de una cadena secundaria en la cadena principal
//Pregunta 2: O(m*n)
#include <iostream>

using namespace std;

bool find_needle(string needle,string haystack, int tam_n, int tam_h);

int main(){
    string needle = "ac";
    string haystack = "abcdefghi";
    int tam_n = needle.length();
    int tam_h = haystack.length();
    bool Bandera= find_needle( needle, haystack,  tam_n,  tam_h);
    cout<<Bandera<<endl;
    return 0;
}

bool find_needle(string needle,string haystack, int tam_n, int tam_h){
    int needle_index=0;
    int haystack_index=0;
    bool found_needle;
    while (haystack_index < tam_h)
    {
        if (needle[needle_index] == haystack[haystack_index])
        {
            found_needle = true;
            while (needle_index < tam_n)
            {
                if ( needle[needle_index] != haystack[haystack_index+needle_index])
                {
                    found_needle = false;
                }
                break;
            }
            needle_index +=1;
        }
        if(found_needle) return true;
        needle_index=0;
        haystack_index += 1;
    }
    return false;
}