#include <iostream>
#include <fstream>
using namespace std;
void ejercicio1();
void ingresar (int a[], int n);
void ordenarSeleccion(int a[], int tam);
void ejercicio2();
void imprimir (int a[], int n);
void intercambio(int a[], int n);
void ejercicio3();
void Ahorros();

int main() {
    int op;
    do{
        cout << "     Trabajo en Grupo    " << endl;
        cout << "     Algoritmos y Estructura de datos   "<< endl;
        cout << "Menú" << endl;
        cout << "1. Intercambio posiciones de un vector" << endl;
        cout << "2. Ordenamiento de un vector" << endl;
        cout << "3. Cuenta de Ahorros virtual del " << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> op;
        switch (op) {
        case 1:
        {
            ejercicio1();
        }
        break;
        case 2:
        {
            ejercicio2();
        }
        break;
        case 3:
        {
            ejercicio3();
        }
        break;
        case 4:
        {
          cout << "Gracias";
        }
        break;
        default:
        {
        cout << "Opción no válida";
        cout << endl;
        }
        break;
        }  
    }while (op != 4);
    
    return 0;   
}

void ejercicio1(){
  int arreglo[100];
    int n = 6;
    ingresar(arreglo, n);
    cout << endl;
    imprimir(arreglo, n);
    cout << endl;
    intercambio(arreglo, n);
    cout << endl;
    imprimir(arreglo, n);
    cout << endl;
}
void ingresar (int a[], int n){
  ofstream archivo1; 
        archivo1.open("Intercambiar.txt",ios::app);
        archivo1<<" Ejercicio 1 "<<endl;
        archivo1<<" ARRREGLO EN ORDEN / DESORDEN "<<endl;
        
  for (int i=0; i<n; i++){
    cout <<"Ingrese el elemento al arreglo: ";
    cin >> a[i];
  }
  
}
void imprimir (int a[], int n){
      ofstream archivo1; 
        archivo1.open("Intercambiar.txt",ios::app);
        archivo1<<endl;

    for (int i=0; i<n; i++)
    {
        cout << a[i];
        archivo1<<" "<<a[i];
    }
}
void intercambio(int a[], int n){
    int i = 0, j = 0, aux = 0, aux1 = 0, aux2 = 0;
   
    aux = a[i];
    a[i] = a[i+5];
    a[i+5] = aux;
            
           
    aux1 = a[i+1];
    a[i+1] = a[i+4];
    a[i+4] = aux1;
            
            
    aux2 = a[i+2];
    a[i+2] = a[i+3];
    a[i+3] = aux2;
            
}

void ejercicio2() {
  int num=0;
  ofstream archivo2;
 archivo2.open("Ordenamiento.txt",ios::app);
  archivo2<<" Ejercicio 2"<<endl;;
  cout << "Cuantos numeros desea ingresar? ";
  cin >> num;
  archivo2<<"Numero ingresados: ";
  int a[100];
  cout << "Ingrese los elementos del  arreglo: " << endl;
  for (int i=0;i<num;i++){
    cout << "numero"<< "[" << i << "] = ";
    cin >> a[i];
    archivo2<<" "<<a[i];
  }
  cout << "Arreglo desordenado: " ;
  archivo2<< "\nArreglo desordenado: ";
  for ( int i=0;i<num;i++){
    cout<<a[i]<<" ";
    archivo2 << a[i] << " ";
  }
  ordenarSeleccion(a,num);
  cout << "\nArreglo ordenado: ";
  archivo2<< "\nArreglo ordenado: ";
  for(int i=0;i<num; i++){
        cout<<a[i]<< " ";
        archivo2<< a[i] << " ";
    }
  cout << endl;
  archivo2.close();
}

void ordenarSeleccion(int a[], int tam){
    int i,j,aux,min; 
    for (i=0; i<tam;i++){ 
            min=i;

            for (j=i+1;j<tam;j++){ 
            if (a[j]<a[min]){ 
                min =j;       
            }
            }

     aux= a[i];
     a[i]= a[min];
     a[min] = aux;
    }
}

void ejercicio3(){
  float arreglo [12];
  Ahorros();
}

void Ahorros(){
  int opciones=0 ;
  ofstream archivo3;
   archivo3.open("Cuenta.txt",ios::app);
   archivo3<<"---------------------------"<<endl;
   archivo3<<"\t\tEjercicio 3\t\t"<<endl;;
  do { 
  cout <<"\n\t\t\t\t\tBANCO PICHINCHA";
  cout << "\n\t\tCUENTA DE AHORROS DE ALBERTO PEREZ\n";
  cout << "\n1.-DEPOSITAR DINERO \n";
  cout << "2.-CONSULTAR\n";
  cout << "3 Salir\n";
  cin >> opciones;
  switch (opciones){
    case 1 :float AX [12];

    for (int i = 0 ; i <12;i++){
      cout << "INGESAR DINERO DEL MES "<<i+1<<endl;
      cin >> AX [i];
      archivo3<<"EL DINERO GUARDADO EN EL MES "<<"["<<i+1<<"]"<<" ES: ";
      archivo3<<AX [i];
      archivo3<<endl;
    
    }
    break;
    
    case 2 :
    float num, band ; 
cout<<"INGRESE LA CANTIDAD A BUSCAR : ";
cin>>num;
archivo3<<"\nEL DINERO QUE DESEA BUSCAR ES: ";
archivo3<<num<<endl;
band=0;
for(int i=0;i<12;i++)
if(AX[i]==num)
{archivo3<<"\nEL DINERO FUE DEPOSITADO EN EL MES:"<<i+1<<endl;
cout<<"\nEL DINERO FUE DEPOSITADO EN EL MES:"<<i+1<<endl;
band=1;
}
if(band==0){  
cout<<"Elemento no encontrado";
}

    break ;
  }
  }
  while (opciones !=3);
  archivo3.close();
}

