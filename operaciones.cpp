/*
CASTILLO PADRON STEFANY JOANA
CLASES SUMA, RESTA, MULTIPLICACION Y DIVISION
27/04/2021
*/
#include <iostream>//libreria de objetos de entrada y salida de datos
using namespace std;//uso de funciones estandar 
class suma{//clase suma
    public:
    float N1;//variables de tipo flotante de nombres N1,N2 y Res
    float N2;
    float Res;
    void OpSuma(); //declara metodo de nombre OpSuma
};
class resta{//clase resta
    public:
    float N1;//variables de tipo flotante de nombres N1,N2 y Res
    float N2;
    float Res;
    void OpResta(); //declara metodo de nombre OpResta
};
class multiplicacion{//clase multiplicacion
    public:
    float N1;//variables de tipo flotante de nombres N1,N2 y Res
    float N2;
    float Res;
    void OpMultiplicacion();//declara metodo de nombre OpMultiplicacion
};
class division{//clase division
    public:
    float N1;//variables de tipo flotante de nombres N1,N2 y Res
    float N2;
    float Res;
    void OpDivision();//declara metodo de nombre OpDivision
};

void suma::OpSuma(){ //estructuracion del metodo
	cout<<"ESO ES LA SUMA"<<endl;
    cout<<"Dame el numero 1:  ";//Pide datos
    cin>>N1;//guardar en variable de N1
    cout<<"Dame el numero 2:  ";
    cin>>N2;//guardar en variable de N2
    Res = N1+N2;//En res se guarda el resultado de la suma de N1 + N2
    cout<<"El resultado es:  "<<Res<<endl<<endl;//Imprime valor de res

}
void resta::OpResta(){ //estructuracion del metodo
	cout<<"ESO ES LA RESTA"<<endl;
    cout<<"Dame el numero 1:  ";
    cin>>N1;
    cout<<"Dame el numero 2:  ";
    cin>>N2;
    Res = N1-N2;//En res se guarda el resultado de la resta de N1 - N2
    cout<<"El resultado es:  "<<Res<<endl<<endl;//Imprime valor de res

}
void multiplicacion::OpMultiplicacion(){ //estructuracion del metodo
	cout<<"ESO ES LA MULTIPLICACION"<<endl;
    cout<<"Dame el numero 1:  ";
    cin>>N1;
    cout<<"Dame el numero 2:  ";
    cin>>N2;
    Res = N1*N2;//En res se guarda el resultado de la multiplicacion de N1 * N2
    cout<<"El resultado es:  "<<Res<<endl<<endl;//Imprime valor de res

}
void division::OpDivision(){ //estructuracion del metodo
	cout<<"ESO ES LA DIVISION"<<endl;
    cout<<"Dame el numero dividendo:  ";
    cin>>N1;
    cout<<"Dame el numero divisor:  ";
    cin>>N2;
    Res = N1/N2;//En res se guarda el resultado de la division de N1 / N2
    cout<<"El resultado es:  "<<Res<<endl<<endl;//Imprime valor de res

}
int main(){//Funcion principal 
	cout<<"+++ OPERACIONES BASICAS +++"<<endl<<endl;
    suma *objeto1 = new suma();//se declara un nuevo objeto de nombre objeto1 para la clase suma
    objeto1->OpSuma();//en objeto1 se invoca al metodo OpSuma
    
    resta *objeto2 = new resta();//se declara un nuevo objeto de nombre objeto2 para la clase resta
    objeto2->OpResta();//en objeto2 se invoca al metodo OpResta
    
    multiplicacion *objeto3 = new multiplicacion();//nuevo objeto de nombre objeto3 para la clase multiplicacion
    objeto3->OpMultiplicacion();//en objeto3 se invoca al metodo OpMultiplicacion
    
    division *objeto4 = new division();//se declara un nuevo objeto de nombre objeto4 para la clase division
    objeto4->OpDivision();//en objeto4 se invoca al metodo OpDivision
    
    return 0;
}
