#include <iostream>
#include <string>
#include <fstream>
using namespace std; 
struct Universidad{
	string codigo;
	string nombre;
};
void crear(string ruta, string informacion){
	ofstream archivo(ruta, ios::app);
	if (archivo.is_open()){
		archivo<<informacion;
		archivo.close();
		cout<<"Archivo creado y datos escritos exitosamente."<<endl;
	}else{
		cerr<<"No se pudo abrir el archivo. "<<endl;
	}
}
int main(){
	Universidad uni[]={
		{"EPN","Escuela Politecnica Nacional\n"},
		{"UCE","Universidad Central del Ecuador\n"},
		{"PUCE","Pontificia Universidad Católica del Ecuador"}};
	for (int j=0; j<3;++j){
		crear("C://Users//PROGRAMACION//Desktop//universidades.txt",uni[j].codigo+","+uni[j].nombre); //cambiar la palabra:    PROGRAMACION
	}
	return 0; 
}
