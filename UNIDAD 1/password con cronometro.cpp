#include "iostream"
#include "stdio.h"
using namespace std;
int main(){
	
	string user,pass,usuario="sistema",password = "admin01";
    char seguir,opc;
    int multiplicacion,numero,i;
    cout<<"bienvenido(a)por favor ingresa al sistema:\n";
    cout<<"ingresa tu usuario:";
    cin>>user;
    cout<<"ingresa tu password:";
    cin>>pass;
    if(user==usuario && pass ==password){
    	do{
    		cout<<"porfavor ingresa el numero de la tabla a imprimir:";
    		cin>>numero;
    		for(int i=1;i<=10;i++){
    			multiplicacion =i*numero;
    			cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;			
			}
			cout<<"�quieres generar otra tabla de multiplicar (s/n)?";
			fflush(stdin);
			cin>>seguir;
		}
        while( seguir!='n');
        
	int h = 0, m = 0, s = 0;
	while (1){
		
		if(s>=60){
			s = 0;
			m++;
			if(m>=60){
				m = 0;
				h++;
			}
		}
		system("cls");
		cout<<h<<":"<<m<<":"<<s;

	
	}
	cin.get();
	}
	else{
		cout<<"usuario no valido porfavor contacta a soporte";
	}
	cin.get();
	return 0;
	
}

