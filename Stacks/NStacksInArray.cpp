// next ka scene aisa h ki jab stack mei kuch h nhi toh point karega next free space ki taraf but maan lo agar stack mei kuch already h toh usme hoga ki top ke next wala element kaunsa h
// ek variable lenge free spot jo btayega ki khaali spot kaha pe h
// push ka scene aisa h ki sabse pehle woh check karega ki agla khali jagah kaha h toh woh btayega freespot kaha h and phir woh free ko update karega uske baad mai array mai insert karunga iske baad merko next ko update karna h maine jaise next se value nikal ke free spot mei update kiya tha toh ab next of index mei yeh btayega ki uska next element kidhar h

#include <bits/stdc++.h>
using namespace std;
class Nstack{
    int *a,*top, *next;
    int n;//number of stacks;
    int size;//size of main array
    int freeSpot; //tells the freespace in main array
    public:
        Nstack(int _n, int _s):n(_n), size(_s){
            freeSpot=0;
            a=new int [size];
            top=new int[n];
            next =new int[size];

            for(int i=0;i<n;i++){
                top[i]=-1;
            }
            for(int i=0;i<size;i++){
                next[i]=i+1;
            }
            next[size-1]=-1;
        }
        ~Nstack()
        {
            delete[] a;
            delete[] top;
            delete[] next;
        }
        //pushing x into mth array
        bool push(int x,int m){
            if(freeSpot==-1){
                return false;//stack overflow
            }
            //find index
            int index=freeSpot;

            // update freespot
            freeSpot=next[index];
            //insert
            a[index]=x;
            //update next
            next[index]=top[m-1];
            //update top
            top[m-1]=index;

            return true;
        }
        int pop(int m){
            if(top[m-1]==-1){
                return -1;//stack overflow
            }
            int index=top[m-1];
            top[m-1]=next[index];
            int poppedElement=a[index];
            next[index]=freeSpot;
            freeSpot=index;
            return poppedElement;
        }

        
};
int main() {
    
    Nstack s(3,6);
    cout<<s.push(10,1)<<endl;
    cout << s.push(10, 1) << endl;
    cout << s.push(10, 1) << endl;
    cout << s.push(10, 1) << endl;
    cout << s.push(10, 1) << endl;
    cout << s.push(10, 1) << endl;
    cout << s.push(10, 1) << endl;
    cout<<s.pop(1)<<endl;
    cout << s.push(10, 1) << endl;
    return 0;
}