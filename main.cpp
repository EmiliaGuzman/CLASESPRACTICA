#include <iostream>

using namespace std;

class Estudiante{

private:
    string nombre;
    string apellido;
    string codigo;
public:
    /*Estudiante(string name,string lname,string code )
    {
        nombre=nombre;
        apellido=apellido;
        codigo=codigo;
    }*/
    void getDatos();
    void imprimirDatos();

};


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

class Curso{
private:
    string nombre;
    string codigo;
    char alumnos[4];
    int cantidadAlumnos();
public:
    void getDatos();
    void imprimirDatos();

};

void Curso::getDatos()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su codigo: ";
    cin >> codigo;
    cout << "Ingrese la lista de alumnos: ";
    cin >> alumnos[4];
    for(int i=0; i<4; i++)
    {
        alumno[i];
    }
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
}

void Curso::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
    cout << "La lista de alumnos es como sigue: "<< alumnos[4]<< endl;
    cout << "La cantidad de alumnos"<< cantidadAlumnos[];
    cout << endl;

}

};

class Curso{
private:
    string nombre;
    string codigo;
    char alumnos[4];
    int cantidadAlumnos();
public:
    void getDatos();
    void imprimirDatos();

};

void Curso::getDatos()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su codigo: ";
    cin >> codigo;
    cout << "Ingrese la lista de alumnos: ";
    cin >> alumnos[4];
    for(int i=0; i<4; i++)
    {
        alumno[i];
    }
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
}

void Curso::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
    cout << "La lista de alumnos es como sigue: "<< alumnos[4]<< endl;
    cout << "La cantidad de alumnos"<< cantidadAlumnos[];
    cout << endl;

}

int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
    
    Curso df;
    df.getDatos();
    df.imprimirDatos();
}

class Empleado{
private:
    string nombre;
    string apellido;
    double salario;
public:
    Empleado(string a,string b,double c):nombre(a),apellido(b), salario(c){}
    Empleado(const Empleado &e);
    void getDatos();
    void getSalario();
};

void Empleado::getDatos(){
    cout << "Ingrese su nombre: " ;
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
}

void Empleado::getSalario(){
    cout << "Ingrese su salario: ";
    cin >> salario;
    if(salario<0){salario=0;}
    double sueldored=salario*0.1;
    cout << "Su nuevo sueldo anual es: "<< sueldored;

}

Empleado::Empleado(string a,string b,double c):nombre(a),apellido(b), salario(c){}
Empleado::Empleado(const Empleado &e) : nombre(e.nombre), apellido(e.apellido), salario(e.salario){}

int main()
{
    Empleado desc;
    desc.getDatos();
    desc.getSalario();

}
