#include <iostream>

using namespace std;

class Estudiante{

private:
    string nombre;
    string apellido;
    string codigo;
public:
    Estudiante();
    void getDatos();
    void imprimirDatos();

};

Estudiante::Estudiante(){

}

void Estudiante::getDatos()
{
        cout << "Ingrese su nombre:";
        cin >> nombre;
        cout << "Ingrese su apellido:";
        cin >> apellido;
        cout << "Ingrese su codigo:";
        cin >> codigo;
        cout << endl;}

void Estudiante::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
}


int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
}

