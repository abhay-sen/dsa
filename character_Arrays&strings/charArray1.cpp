#include <bits/stdc++.h>
using namespace std;
int sizeOfCharArray(char name[]){
    int length=0;
    int i=0;
    while(name[i] != '\0'){
        i++;
        length++;

    }
    return length;
}
void indexByindex(char name[]){
    int n=sizeOfCharArray(name);
    for (int i = 0; i < n; i++)
    {
        cout << "at index " << i << " is " << name[i] << endl;
    }
}
void reversedString(char name[]){
    int start=0;
    int end=sizeOfCharArray(name)-1;
    while(start<=end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}
void replaceWithat(char name[]){
    int n=strlen(name);
    for (int i = 0; i < n; i++)
    {
        if(name[i]==' '){
            name[i]='@';
        }
    }
    
}
int main() {
    char name[100];
    cin.getline(name,1000);
    cout<<name<<endl;
    cout<<sizeOfCharArray(name)<<endl;
    reversedString(name);
    cout<<"reversed "<<name<<endl;
    reversedString(name);
    replaceWithat(name);
    cout<<"with at the rate "<<name<<endl;
return 0;
}