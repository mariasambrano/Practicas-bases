#include <iostream>
//se utilizara una nueva libreria esta libreria se llamara fstream
#include <fstream>
using namespace std;
class usuario{
public:
	string nombre;
	string apellido;
	string Nusuario;
	int edad;
	void mostrarperfil(){
		cout<<"nombre"<<nombre<<endl;
		cout<<"nombre"<<nombre<<endl;
	    cout<<"apellido"<<apellido<<endl;
	    cout<<"Nusuario"<<Nusuario<<endl;
	     cout<<"edad"<<edad<<"años"<<endl;
	}
 }; 
	int main (){
		usuario usuario;
		cout<<"ingrese el nombre:";
		getline(cin,usuario.nombre);
		cout<<"ingrese el apellido:";
		getline(cin,usuario.apellido);
		cout<<"ingrese el nombre del usuario:";
		getline(cin,usuario.Nusuario);
		cout<<"ingrese tu edad:";
		cin>>usuario.edad;
		
		cout<<"\nperfil del usuario:\n";
		usuario.mostrarperfil();
		ofstream archivo ("Perfil de usuario.txt");
		if (archivo.is_open()){
			archivo<<"nombre:"<<usuario.nombre<<endl;
			archivo<<"apellido:"<<usuario.apellido<<endl;
		    archivo<<"usuario:"<<usuario.Nusuario<<endl;
			archivo<<"edad:"<<usuario.edad<<"años"<<endl;
			archivo.close();
				cout<<"\nperfil del usuario guardado en 'perfil de usuario.txt'.\n";
			}else{
				cout<<"error al abrir el archivo.\n";
			}
			return 0;

		}
		

