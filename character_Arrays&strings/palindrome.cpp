#include <bits/stdc++.h>
using namespace std;
int sizeOfCharArray(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}
bool checkPalindrome(char name[]){
    int start=0;
    int end= sizeOfCharArray(name)-1;
    while (start<=end)
    {
        if(name[start]!=name[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
int main() {
    char name[100];
    cin>>name;
    checkPalindrome(name)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}