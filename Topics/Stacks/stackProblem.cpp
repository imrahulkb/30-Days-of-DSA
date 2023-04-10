//stacks can be used to check balancing of symbols
#include<iostream>
using namespace std;
#include<vector>
#include<map>
int main()
{
    string S;
    cin>>S;
    vector<char> C;
    map<char,char> CC;
    CC['}']='{';
    CC[']']='[';
    CC[')']='(';
    for(auto a: S)
    {
        if(a=='(' || a=='[' || a=='{')
            C.push_back(a);  
        if((a==']' || a=='}' || a==')') && C.size()>0)
        {
            if(C[C.size()-1]==CC[a])
                C.pop_back();
            else{
            cout<<"N0"<<endl;
            return 0;
            }
        }
        else if (a==']' || a=='}' || a==')')
        {
             cout<<"N0"<<endl;
             return 0;
        }
    }
    if(C.size()==0)
        cout<<"YES"<<endl;
    else
        cout<<"N0"<<endl;
    return 0;
}