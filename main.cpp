#include <iostream>
#include <fstream>

using namespace std;
void ejercicio1();
void ingresar (int a[], int n);
void ordenarSeleccion(int a[], int tam);
void ejercicio2();
void imprimir (int a[], int n);
void intercambio (int a[], int n);
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

    cout << "Arreglo de tamaño 6: \n";
    ingresar(arreglo, 6);
    cout << endl;
    imprimir(arreglo, 6);
    cout << endl;
    intercambio (arreglo, 6);
    cout << endl;
}

void ingresar (int a[], int n){
	for (int i=0; i<n; i++){
		cout <<"Ingrese el elemento " << i+1 << " del arreglo: ";
		cin >> a[i];
	}
}
void imprimir (int a[], int n){
    ofstream arreglo1;
    arreglo1.open("intercambiar.txt",ios::app);
    arreglo1 << "Intercambiar numero\n";
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    arreglo1 << "Arreglo original: " ;
    for (int i=0; i<n; i++)
    {
        arreglo1 << a[i] << " ";
    }


    arreglo1.close();
}

void intercambio(int a[], int n)
{
    ofstream arreglo2;
    arreglo2.open("intercambiar.txt",ios::app);
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

    for (int i; i<n; i++){
      cout << a[i] << " ";
		}

		arreglo2 << "\nArreglo intercambiado: " ;
    for (int i=0; i<n; i++)
    {
        arreglo2<< a[i] << " ";
    }

    arreglo2.close();

}

void ejercicio2() {
    ofstream arreglo3;
    arreglo3.open("ordenamiento.txt",ios::app);
  int num=0;

  cout << "Cuantos numeros desea ingresar? ";
  cin >> num;
  int a[100];
  cout << "Ingrese los elementos del  arreglo: " << endl;
  for (int i=0;i<num;i++){
    cout << "numero"<< "[" << i << "] = ";
    cin >> a[i];
  }
  arreglo3 << "\nOrdenar arreglo de tamaño " << num << "\n";
  cout << "Arreglo desordenado: " ;
  for ( int i=0;i<num;i++){
    cout << a[i] << " ";
  }
  arreglo3 << "Arreglo desordenado: " ;
  for ( int i=0;i<num;i++){
    arreglo3 << a[i] << " ";
  }
  ordenarSeleccion(a,num);
  cout << "\nArreglo ordenado: ";
  for(int i=0;i<num; i++){
        cout << a[i] << " ";
    }
  cout << endl;
  arreglo3<< "\nArreglo ordenado: ";
  for(int i=0;i<num; i++){
        arreglo3 << a[i] << " ";
    }
  arreglo3.close();
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
  ofstream dinero;
  dinero.open("cuenta.txt",ios::out);
  dinero << "\nCUENTA DE AHORROS DE ALBERTO PEREZ \n";
  int opciones=0 ;
  do {
  cout <<"\n\tBANCO PICHINCHA";
  cout << "\n\tCUENTA DE AHORROS DE ALBERTO PEREZ\n";
  cout << "1. DEPOSITAR DINERO \n";
  cout << "2. CONSULTAR\n";
  cout << "3. Salir\n";
  cin >> opciones;
  switch (opciones){
    case 1 :
        float AX [12];
        for (int i = 0 ; i <12;i++){
            cout << "INGESAR DINERO DEL MES "<<i+1<<endl;
            cin >> AX [i];
            }
    dinero << "CANTIDAD DE DINERO como un arreglo: ";
    for (int i = 0 ; i <12;i++){
      dinero << AX [i] << " ";
    }
    dinero << "\n";

    break;
    case 2 :

    float num, band ;
    cout<<"INGRESE LA CANTIDAD A BUSCAR : ";
    cin>>num;
    dinero << "Cantidad a buscar: " << num;

band=0;
for(int i=0;i<12;i++)
if(AX[i]==num){
    dinero<<"\nEL DINERO FUE DEPOSITADO EN EL MES:"<<i+1<<" \n";
    cout<<"\nEL DINERO FUE DEPOSITADO EN EL MES:"<<i+1<<" \n";
    band=1;
}
if(band==0){
dinero<<"\nElemento no encontrado";
cout<<"Elemento no encontrado";
}
    break ;
  }
  }
  while (opciones !=3);
dinero.close();
}
