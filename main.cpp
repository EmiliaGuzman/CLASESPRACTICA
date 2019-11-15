#include <iostream>

using namespace std;

class Empleado{
private:
    string nombre;
    string apellido;
    double salario;
public:
    Empleado();
    Empleado(string a,string b,double c);
    ///Empleado(const Empleado &e);
    void getDatos();
    void getSalario();
};

Empleado::Empleado(string a,string b,double c){
    nombre = a;
    apellido = b;
    salario = c;
}

void Empleado::getDatos(){
    cout << "Ingrese su nombre: " ;
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;

}


void Empleado::getSalario(){
    cout << "Ingrese su salario: ";
    cin >> salario;
    cout << endl;
    cout << "Su salario anual actual es"<< salario<< endl;
    if(salario<0){
            cout << "Su salario es negativo, se le ajustara a 0"<< endl;
            salario=0;}
    double sueldored=salario*0.1;
    cout << "Su sueldo anual descontado es: "<< sueldored;

}


int main()
{
    Empleado desc(0,0,0);
    desc.getDatos();
    desc.getSalario();

}
