#include<bits/stdc++.h>
using namespace std;

class Complex{
    
    public:
    
    int real;
    int imag;
    
    void get_real(int r){
        real=r;
    }
    void get_imag(int i){
        imag=i;
    }
    
    void sum(const Complex &obj1, const Complex &obj2){
        int a = obj1.real + obj2.real;
        int b = obj1.imag + obj2.imag;
        cout<<a<<" + "<<b<<" i "<<endl;
    }
    void diff(const Complex &obj1, const Complex &obj2){
        int a = obj1.real - obj2.real;
        int b = obj1.imag - obj2.imag;
        cout<<a<<" + "<<b<<" i "<<endl;
    }
    void pro(const Complex &obj1, const Complex &obj2){
        int a = obj1.real * obj2.real;
        int b = obj1.imag * obj2.imag;
        cout<<a<<" + "<<b<<" i "<<endl;
    }
    
    
};

int main(){
    
    Complex obj1 , obj2;
    obj1.get_real(2);
    obj1.get_imag(3);
    obj2.get_real(2);
    obj2.get_imag(3);
    Complex result;
    result.sum(obj1,obj2);
    result.diff(obj1,obj2);
    result.pro(obj1,obj2);
    
    
    
    return 0;
}
