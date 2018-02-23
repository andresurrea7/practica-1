#include <iostream>

using namespace std;

int main()
{
    int total=0, numerador=0, denominador=0, x=0;
    float div=0;
    cout<<"ingrese el numero que se va a dividir: ";
    cin>>numerador;
    cout<<"ingrese el numero en cuanto lo quieres dividir: ";
    cin>>denominador;
    total= numerador%denominador; //para saber si la divisíon es exacta
    if (total==0){
        total =numerador/denominador;
        cout<<"el resultado es: "<<total<<endl;
    }
    else{
        div=(float)numerador/(float)denominador;
        x=div*10;
        x=x%10;
        if(x<5)
            x=(numerador/denominador);
        else
            x=(numerador/denominador)+1;
        cout<<"el resultado es: "<<x<<endl;

    }


    return 0;
}
