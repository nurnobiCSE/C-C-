#include<bits/stdc++.h>
#include<stack>
using namespace std;

int forOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 1;
    }
    return -1;
}
int forOperand(char ch){
    if(ch>='0' && ch<='9'){
        return 1;
    }
    return -1;
}
float scan(char ch)
{
    int val;
    val =ch;
    return float(val-'0');
}
float PolishOperation(int a, int b, char op){
    if(op=='+'){
        return a+b;
    }
    else if(op=='-'){
        return b-a;
    }
    else if(op=='*'){
        return a*b;
    }
    else if(op=='/'){
        return b/a;
    }
    else if(op=='^'){
        return pow(a,b);
    }
}
float Disply_polish(string stt){
    int a,b;
    stack<float>stk;
    string::iterator it;

    for(it=stt.begin();it!=stt.end();it++){
        if(forOperator(*it)!=-1){
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(PolishOperation(a,b,*it));
        }
        else if(forOperand(*it)>0){
            stk.push(scan(*it));
        }
    }
    return stk.top();
}
int main(){
    string st = "67-32/*23+";
    cout<<"final Output is : "<<Disply_polish(st)<<endl;
}
