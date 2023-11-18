#include <iostream>
//se utilizara una nueva libreria esta libreria se llamara fstream
#include <fstream>
using namespace std;
class usuario{
public:
	string nombre;
	string apellido;
	string Nusuario;
	string telefono;
	string direccion;
	string gmail;
	int edad;
	void mostrarperfil(){
		cout<<"nombre"<<nombre<<endl;
	    cout<<"apellido"<<apellido<<endl;
	    cout<<"Nusuario"<<Nusuario<<endl;
	    cout<<"telefono"<<telefono<<endl;
	    cout<<"direccion"<< direccion<<endl;
	    cout<<"gmail"<<gmail<<endl;
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
		cout<<"telefono:";
		getline(cin,usuario.telefono);
		cout<<"direcion:";
		getline(cin,usuario.direccion);
		cout<<"ingresa tu gmail:";
		getline(cin,usuario.gmail);
		cout<<"ingrese tu edad:";
		cin>>usuario.edad;
		
		cout<<"\nperfil del usuario:\n";
		usuario.mostrarperfil();
		ofstream archivo ("Perfil de usuario.txt");
		if (archivo.is_open()){
			archivo<<"nombre:"<<usuario.nombre<<endl;
			archivo<<"apellido:"<<usuario.apellido<<endl;
		    archivo<<"usuario:"<<usuario.Nusuario<<endl;
			archivo<<"telefono:"<<usuario.telefono<<endl;
			archivo<<"direccion:"<<usuario.direccion<<endl;
			archivo<<"gmail:"<<usuario.gmail<<endl;
			archivo<<"edad:"<<usuario.edad<<"edad"<<endl;


		

			archivo.close();
				cout<<"\nperfil del usuario guardado en 'perfil de usuario.txt'.\n";
			}else{
				cout<<"error al abrir el archivo.\n";
			}
			return 0;


		}
		

