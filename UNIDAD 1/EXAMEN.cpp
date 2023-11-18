#include <iostream>
#include <string>
#include"iostream"
#include "conio.h"
#include "iostream"
#include "stdio.h"
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
        
        
    }
	do {
		char opc;
	cout <<"a)hola mundo "

        cin>>opc;
     switch (opc){
	 case 'a':
	 	cout<<"hola mundo programadores" ;
     cin.get();
	             break;
	             do {
		char opc;
	cout <<"b)es vocal";

        cin>>opc;
     switch (opc){
	             case 'b':
	             char letra;
	cout<<"digita una letra";
	cin>>letra;
	if(letra== 'a' or letra =='e' or letra=='i' or letra=='o'or letra=='u')
	cout<<"es vocal";
	else
	cout<<"no es vocal";
	return 0;
	break;
	do {
		char opc;
	cout <<"c) es vocal";

        cin>>opc;
     switch (opc){
	case 'c':
		
		char letra;
	cout<<"digita una letra";
	cin>>letra;
	if(letra== 'a' or letra =='e' or letra=='i' or letra=='o'or letra=='u')
	cout<<"es vocal";
	else
	cout<<"no es vocal";
	return 0;
	break;
	do {
		char opc;
	cout <<"d)tablas de multiplicar";

        cin>>opc;
     switch (opc){
		case 'd':
			int numero;
	
	cout<<"Porfavor agregue el numero de multiplicacion de la tabla:"<<endl;
	cin>>numero;
	 
	 for(int i=1;i<=10;i++){
	 	int multiplicacion = i * numero;
	 	cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;
		 }
		 return 0;
		 break;
		 do {
		char opc;
	cout <<"e)1 al 1000";

        cin>>opc;
     switch (opc){
		 case 'e':
		 	int a;
		for(a=0;a<=1000;a+=2){
		
			cout<<a<<endl;
			
		}
		return 0;
		cin.get();
		break;
		do {
		char opc;
	cout <<"f)cronometro";

        cin>>opc;
     switch (opc){
		case 'f':
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
		Sleep(1000);
		s++;
		 break;
		 do {
		char opc;
	cout <<"g)portada";

        cin>>opc;
     switch (opc){
		case 'g':
			cout<<("PORTADA")<<endl;
	cout<<("Modulo:PROGRAMACION BASICA")<<endl;
	
	cout<<("grupo:305")<<endl;
	
	cout<<("Carrera:Tecnico Informatico en Bachiller")<<endl;
	
    cout<<("Nombre:Maria del carmen Sambrano Castañeda")<<endl;
    
	cout<<("correo:msambrano2822@conalepmex.edu.mx")<<endl;
	
	return 0;
	 break;
	 do {
		char opc;
	cout <<"h)portada con prinf";

        cin>>opc;
     switch (opc){
		 case 'h':
		 	 printf("Nombre:Maria del Carmen Sambrano Castañeda");
	
	printf("Carrera:Tecnico Bachiller en Informtica");
	
	printf("Edad:16");
	printf("Modulo:Programacion Basica");
	
	printf("Correo:msambrano2822@conalepmex.edu.mx");
	printf("Modulo:Programacion Basica");
	
	return 0;
		 	break;
		 	do {
		char opc;
	cout <<"i)switch";

        cin>>opc;
     switch (opc){
		 	case 'i';
		 		int miNumero[6];
	string pronombres[4];
	
	// Inicializar el primer numero
	miNumero[0]=10;
	miNumero[1]=20;
	miNumero[2]=30;
	miNumero[3]=40;
	miNumero[4]=50;
	miNumero[5]=60;
	
	// Ponombres
	pronombres[0] = "el";
	pronombres [1] = "ella";
	pronombres [2] = "ellos";
	pronombres[3] = " nosotros";
	
	for (int i=0 ;i<=6; i++){
		cout<<"conteos:" <<i<<":"<< miNumero[i]<<endl;
	}
 for( int a=0; a<=4; a++){
 	cout<<"los pronombres son:"<<pronombres[a]<<endl;
 }
 return 0;
 break; 
 do {
		char opc;
	cout <<"j)asistencia";

        cin>>opc;
     switch (opc){
 case 'j'
 const int numAlumnos = 5;
	int asistencia [numAlumnos];
	for (int i=0; i<numAlumnos; i++){
		asistencia [i]=0;
	}
	cout<<"Bienvenido  al sistema de asistencias:"<<endl;
	cout<<"Registra la asistencia de los alumnos:"<<endl;
	cout<<"Registra el nombre de los alumnos e indica si asistio"<<endl;
	
	for(int i=0; i< numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumno: "<<i +1<<" : ";
		cin>>nombre;
		cout<<"¿Si asistio? (S/N)";
		cin>>asistio;
		
		if(asistio == 's' or asistio == 'S'){
			asistencia[i] = 1;
		}
	}
	int faltas =0;
	for(int i=0; i<numAlumnos; i++){
		if(asistencia[i] == 0){
			faltas++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	return 0;
	break;
	do {
		char opc;
	cout <<"k)dia";

        cin>>opc;
     switch (opc){
	case 'k':
		cout<<"Digita el numero de dia";
		cin>>dia;
		switch(dia){
			case 1:
			cout<< "el dia es lunes";
				break;
			case 2:
				cout<<"el dia es martes";
			     break;
		   case 3:
		   	cout<<" el dia es miercoles";
			     	break;
		    case 4:
		    	cout<< "el dia es jueves";
		    	break;
		    case 5:
		    	cout<<" el dia es viernes";
		    	break;
		    case 6:
		    	cout<<"el dia es sabado";
		    	break;
		    case 7:
		    	cout<< " el dia es domingo";
		    	break;	     			
	        defaut:
	          		cout<<"no es un dia";
		
		}
		return 0;
		
		break;
		case 'l':
			
			int a;
	for (a=0;a<=100;a++){
		cout<<a<<endl;
	
	}
return 0;
cin.get();			
		break;
		do {
		char opc;
	cout <<"m)año de nacimiento";

        cin>>opc;
     switch (opc){
		
		case 'm':
			cout<<"digita tu año de nacimiento";
	cin>>an;
	a = resta (tope,an);
	mes= multiplica (an,meses);
	dia = multiplica (mes,dias);
	hora = multiplica (dia,horas);
	minuto = multiplica(hora,minutos);
	seg = multiplica (minuto,segundos);
	cout<<"haz vivido"<<endl;
	cout<<a<<"años"<<endl;
	cout<<mes<<"meses"<<endl;
	cout<<dia<<"dias"<<endl;
	cout<<hora<<"horas"<<endl;
	cout<<minuto<<"minutos"<<endl;
	cout<<segundos<<"segundos"<<endl;
	return 0;
		
		break;
	}
	cin.get();
	 }
	 
}
	 else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
    return 0;
}
