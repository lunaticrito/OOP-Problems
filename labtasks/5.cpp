#include <bits/stdc++.h>
using namespace std;

class Trans{
    string trx;
    float amt;
    public:
    Transaction(string t,float a):trx(t),amt(a){}
    
};
class Curr:virtual public Trans{
    int trx;
    float amt;
    public:
    Curr(string t,float a):trx(t),amt(a){}
};
class Tax:virtual public Trans{
    int trx;
    float amt;
    public:

};
class Curr_conv:public Curr{

};
class Tax_proc:public Tax{

};
class Final:public Curr_conv,public Tax_proc{

};
int main(){
    return 0;
}