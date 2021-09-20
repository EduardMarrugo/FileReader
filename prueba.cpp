//Comentario de prueba
#include <iostream>

using namespace std;
int suma(int, int);
int main(){
	
	/*
	
	Programa de suma
	*/
	
	int a, b; /*Variables para sumar*/
	int sum = a + b; //hola
	
	string v = 1 +"0";
	cout<<v;
	
	a++;
	if( a == b )cout<<"Hola";
	cout<<"\nResultado: "<< suma(a, b);
	
	cout<<"Insertar variables a sumar 'a + b': \n";
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	
	
	
	cout<<"\n\n\n";
	system("PAUSE");
	return 0;
}
int suma(int a, int b){
	return (a+b);
}
