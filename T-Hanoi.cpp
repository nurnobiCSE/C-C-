#include<bits/stdc++.h>
using namespace std;

void ToweOfHanoi(int n, char start[], char target[], char middle[])
{
    if(n==1){
        cout<<"Move Pallet 1: "<<start<<" To "<<target<<endl;
        return;
    }
    ToweOfHanoi(n-1,start,middle,target);
    cout<<"Move Pallet "<<n<<" :"<<start<<" To "<<target<<endl;
    ToweOfHanoi(n-1,middle,target,start);
}

int main()
{
    char a[20]="Source";
    char b[20]="Auxilary";
    char c[20]="Destination";
    int n= 3;
    ToweOfHanoi(n, a, c, b);
return 0;
}
