#include<iostream>
using namespace std;
void toh(int n, int from, int to, int aux) {
        if(n>0)
   {
     toh(n-1,from,aux,to);
    cout<<"move disk from"<<from<<"to"<<to<<endl;
    toh(n-1,to,from,aux);
    }
}
int main()
{
    int n;
    cin>>n;
    toh(n,1,3,2);
    return 0;
}
