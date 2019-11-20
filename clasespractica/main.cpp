#include<stdio.h>
#include<conio.h>

using namespace std;

class Empleado{
private:
    string nombre;
    string apellido;
    double salario;
    int cantidadPersonas;

public:
    Empleado();
    Empleado(string a,string b,double c);
    ///Empleado(const Empleado &e);
    void getDatos();
    void getSalario();
    void ordenamientoApellido();
};

Empleado::Empleado(string a,string b,double c){
    nombre = a;
    apellido = b;
    salario = c;
}

void Empleado::getDatos(){

    cout << " Cuantos trabajadores hay: ";
    cin >> cantidadPersonas;
    for(int i=0; i<= cantidadPersonas; i++)
    {
        cout << "Ingrese su nombre: " ;
        cin >> nombre;
        cout << "Ingrese su apellido: ";
        cin >> apellido;
        cout << "Ingrese su salario: ";
        cin >> salario;

    }
    string apellido[cantidadPersonas];
    cout << apellido;
}


void Empleado::getSalario(){

    cout << endl;
    cout << "Su salario anual actual es"<< salario<< endl;
    if(salario<0){
            cout << "Su salario es negativo, se le ajustara a 0"<< endl;
            salario=0;}
    double sueldored=salario*0.1;
    cout << "Su sueldo anual descontado es: "<< sueldored;

}

void Empleado::ordenamientoApellido()
{
    

    string ordena ="";
    for(int i=0;i< cantidadPersonas;i++)
    {
        for(int j=i+2;j<cantidadPersonas;j++)
        {
            if(apellido[i]<apellido[j])
            {
                
                ordena = apellido[i];
                apellido[i]=apellido[j];
                apellido[j]= ordena;
            }
        }
    }

    for(int i=0; i<cantidadPersonas;i++)
    {
        cout << "Apellido: "<< apellido[i]<< endl;
    }
}

int main()
{
    Empleado desc(0,0,0);
    desc.getDatos();
    desc.getSalario();
    desc.ordenamientoApellido();
}
