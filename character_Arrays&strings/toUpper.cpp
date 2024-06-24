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
void toUpper(char ch[]){
    int n=sizeOfCharArray(ch);
    for (int i = 0; i < n; i++)
    {
        if((int)ch[i]>=97&&(int)ch[i]<=122){
            ch[i]=ch[i]-'a'+'A';
        }
    }
    
}
int main() {
    char ch[100];
    cin>>ch;
    toUpper(ch);
    cout<<ch;
return 0;
}