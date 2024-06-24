// //agar kisi pointer ke upar pointer lagta toh uske data type mei dalta h int** agar koi bhi data h jiska data type x h toh uspe pointer lagane ko simply x* karna padega
// //agar pointer ke upar pointer ke upar pointer h then woh int*** se initialise hoga
// #include <bits/stdc++.h>
// using namespace std;
// #define out(x) cout<<x<<endl;
// int main() {
//     int a=5;
//     int* p = &a;
//     int** q= &p;
//     out(&a);//address of a
//     out(a);//data in a
//     out(p);// address of a
//     out(&p);//address of p
//     out(*p); //value in a
//     out(q);//address of p
//     out(&q);//address of q
//     out(*q);//address of a
//     out(**q);//data of a
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<endl;
void util(int* p){
    *p=*p+1;
}
int main() {
    int a=5;
    int * p=&a;
    out("before:");
    out(a);
    out(p);
    out(*p);
    util(p);
    out("after");
    out(a);
    out(p);
    out(*p);
    

return 0;
}