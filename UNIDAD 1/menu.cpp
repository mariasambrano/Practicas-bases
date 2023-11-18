#include <iostream>
using namespace std;
int num1,num2;
int main(){
char x; 
int a,b,suma,resta,multi;
cout<<"bienvenido a tu menu"<<endl;
cout<<"a)suma"<<endl;
cout<<"b)resta"<<endl;
cout<<"c)multi"<<endl;
cin>>x;
switch (x){
	case'a':
		cout<<"numero1";
		cin>>a;
		cout<<"numero2";
		cin>>b;
		suma=a+b; 
		cout<<"suma es:"<<suma;
	case'b':
	    cout<<"numero1";
		cin>>a;
		cout<<"numero2";
		cin>>b;
		resta=a-b;
		cout<<"resta es:"<<resta;
		break;
	case 'c':		
		cout<<"numero1";
		cin>>a;
		cout<<"numero2";
		cin>>b;
		multi=a*b; 
		cout<<"multi es:"<<multi;
		break;
		default:
		cout<< "no es una opcion";
		return 0;
    } 
}
