#include <bits/stdc++.h>
using namespace std;
class Bill{
    int num;
    public:
    virtual float revenue()=0;
};
class General:public Bill{
    public:
    void revenue(int n){
        return 500*n;
    }
};
class Surgery:public Bill{
    public:
    void revenue(int n){
        return 2000*n;
    }
};
int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>type>>patient;
    }

}
