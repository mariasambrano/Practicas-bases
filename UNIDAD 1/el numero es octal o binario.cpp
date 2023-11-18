#include <iostream>
using namespace std;
int num1,num2;
int main(){
char x; 
int a,b,suma,resta,multi;
cout<<"bienvenido a tu menu"<<endl;
cout<<"a)octal"<<endl;
cout<<"b)binario"<<endl;
cin>>x;
switch (x){
	case'a':
		cout<<"numero1";
		cin>>a;
		cout<<"numero2";
		cin>>b;
		suma=a+b; 
		cout<<"octal es :"<<suma;
	case'b':
	    cout<<"numero1";
		cin>>a;
		cout<<"numero2";
		cin>>b;
		resta=a-b;
		cout<<"binario es:"<<resta;
		break;
	case 'c':		
		default:
		cout<< "no es una opcion";
		return 0;
    } 
}

