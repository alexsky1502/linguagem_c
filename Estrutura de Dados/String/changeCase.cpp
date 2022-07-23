#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    char a[] = "ALEX SE YOON KOO";
    char b[] = "alex se yoon koo";
    char copy1;
    char copy2;

    for(int i = 0; i < strlen(a); i++){
        copy1 = tolower(a[i]);
        cout << copy1;
    }

    cout << endl;
    
    for(int i = 0; i < strlen(a); i++){
        copy2 = toupper(a[i]);
        cout << copy2;
    }
}