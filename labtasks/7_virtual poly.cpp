#include <bits/stdc++.h>
using namespace std;
class Bill{
public:
    int num;
    Bill(int a):num(a){};
    virtual float revenue()=0;
};
class General:public Bill{
    public:
    General(int a):Bill(a){} 
    float revenue(){return 500*num;}
};
class Surgery:public Bill{
    public:
    Surgery(int a):Bill(a){}
    float revenue(){return 2000*num;}
};
int main(){
    int n;
    cin>>n;
    string type;
    int num;
    float revenue=0;
    while(n--){
        cin>>type>>num;
        Bill *a = nullptr;
        if(type=="General" || type=="general"){
            a = new General(num);
        }
        else if(type=="Surgery" || type=="surgery"){
            a = new Surgery(num);
        }
        else{
            cout<<"Invalid"<<endl;
        }
        revenue+=a->revenue();
        delete a;
    }
    cout<<revenue<<endl;
}
