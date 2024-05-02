#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int valor;
	cout<<"Ingrese un valor mayor que 60"<<endl;
	cin>>valor;
	
	if(valor>=60){
		cout<<"valor correcto"<<endl;
	}else{
		cout<<"El valor es incorrecto"<<endl;
	}
	
	system("pause");
	return 0;
}
