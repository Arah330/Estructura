#include<iostream>
#include<conio.h>
using namespace std;
struct elementos {
	char color[15];
	int tamano;
	char genero[15];
};
struct prendas{
	char nombre[15];
	int piezas;
	float medida;
	struct elementos elem;
};
int main(int argc,char**argv){
	struct prendas R1[5];
	
	struct prendas*apuntador;
	
	apuntador=&R1[0];
	
	for (int i=0;i<2;i++){
		
		cout<<"nombre: ";
		cin.getline(R1[i].nombre,15,'\n');
		cout<<"piezas: ";
		cin>>R1[i].piezas;
		cout<<"medida:";
		fflush(stdin);
		cin.getline(R1[i].elem.medida,15,'\n');	
	}
	cout<<"nombre guardado "<<*apuntador->nombre;
	cout<<"piezas guardadas "<<apuntador->piezas;
	cout<<"medida guardada "<<apuntador->elem.medida;
	getch();
	
	return 0;
	
}
