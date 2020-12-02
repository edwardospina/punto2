#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	//nombre, edad, documento de identidad y semestre académico.
	
	cout<<"Lista de estudiantes"<<endl<<endl;
	
	int n;
	
	cout<<"por favor digite el numero de estudiantes que desea ingresar"<<endl;
	
	cin>>n;
	
	cout<<"**************************************************************"<<endl<<endl;
	
	cout<<"digite los datos pedidos"<<endl<<endl;
	
	cout<<"**************************************************************"<<endl<<endl;
	
	//ingresar nombres
	
	cout<<"digite solo uno de los nombres"<<endl<<endl;
	
	string nombres[n];
	
	for(int a=0;a<n;a++)
	{
		
		cin>>nombres[a];
			
	}
	
	cout<<endl;
	
	cout<<"**************************************************************"<<endl<<endl;
	
	//ingresar edad
	
	cout<<"digite sus edades"<<endl<<endl;
	
	string edad[n];
	
	for(int a=0;a<n;a++)
	{
		
		cin>>edad[a];
			
	}
	
	cout<<endl;
	
	cout<<"**************************************************************"<<endl<<endl;
	
	//ingresar documento
	
	cout<<"digite sus documentos"<<endl<<endl;
	
	string doc[n];
	
	for(int a=0;a<n;a++)
	{
		
		cin>>doc[a];
			
	}
	
	cout<<endl;
	
	cout<<"**************************************************************"<<endl<<endl;
	
	//ingresar semestre
	
cout<<"digite sus semestre respectivos"<<endl<<endl;
	
	string sem[n];
	
	for(int a=0;a<n;a++)
	{
		
		cin>>sem[a];
			
	}
	
	cout<<endl;
	
	cout<<"**************************************************************"<<endl<<endl;
		
	cout<<"Nombre"<<setw(3)<<endl<<endl;	
	
	//mostrar nombres
	
	for(int a=0;a<n;a++)
	{
	
		cout<<setw(3)<<nombres[a]<<endl;
			
	}cout<<endl;
	
	cout<<"Edad"<<setw(3)<<endl<<endl;
	
	//mostrar edad
	
	for(int a=0;a<n;a++)
	{
	
		cout<<setw(3)<<edad[a]<<endl;
			
	}cout<<endl;
	
	cout<<"Documento"<<setw(3)<<endl<<endl;
	
	//mostrar documento
	
	for(int a=0;a<n;a++)
	{
	
		cout<<setw(3)<<doc[a]<<endl;
			
	}cout<<endl;
	
	cout<<"Semestre"<<endl<<endl;
	
	//mostrar semestre
	
	for(int a=0;a<n;a++)
	{
	
		cout<<setw(3)<<sem[a]<<endl;
			
	}cout<<endl;
	
	system("pause");
	return 0;
}