#include<iostream>
using namespace std;
class triangle{
    private:
    int l;
    int b;
    public:
    void read(){
        cin>>l;
        cin>>b;
    }
    void area(){
        cout<<.5*l*b<<endl;
    }
};


int main(){
    triangle t;
    t.read();
    t.area();
    
}               