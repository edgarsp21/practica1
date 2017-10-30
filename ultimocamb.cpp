#include <iostream>
using namespace std;
int main(){
    char opc;
    float a, b, suma, res, div, mul;
    cout<<"A. Suma."<<endl;
    cout<<"B. Resta."<<endl;
    cout<<"C. Multiplicacion."<<endl;
    cout<<"D. Division."<<endl;
    cin>>opc;
    opc = toupper(opc);
    switch (opc) {
        case 'A':
            cout<<"Ingresa un numero:"<<endl;
            cin>>a;
            cout<<"Ingresa un numero:"<<endl;
            cin>>b;
            suma=a+b;
            cout<<"EL resultado es:"<<" "<<suma<<endl;
            break;
        case 'B':
            cout<<"Ingresa un numero:"<<endl;
            cin>>a;
            cout<<"Ingresa un numero:"<<endl;
            cin>>b;
            res=a-b;
            cout<<"EL resultado es:"<<" "<<res<<endl;
            break;
        case 'C':
            cout<<"Ingresa un numero:"<<endl;
            cin>>a;
            cout<<"Ingresa un numero:"<<endl;
            cin>>b;
            mul=a*b;
            cout<<"EL resultado es:"<<" "<<mul<<endl;
            break;
        case 'D':
            cout<<"Ingresa un numero:"<<endl;
            cin>>a;
            cout<<"Ingresa un numero:"<<endl;
            cin>>b;
            if (a==0 || b==0) {
                cout<<"No se puede dividir"<<endl;
            }else{
                div=a/b;
                cout<<"El resultado es:"<<" "<<div<<endl;
            }
            default:
            break;
            
    }
}
