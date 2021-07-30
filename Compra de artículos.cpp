#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int pr=10;
	string articulos[10];
	float precio[10];
	float total,sub=0,iva,dsc;

cout<<"**************TIENDA MI VECINO**************\n\n";	
	for(int j=0;j<pr;j++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO QUE DESEA COMPRAR #"<<(j+1)<<":\n";
        cout<<"Articulo: "; getline(cin,articulos[j]);
		cout<<"Precio: "; cin>>precio[j];
		cin.ignore();
		cout<<endl;
    }
    
    cout<<"***********LISTA DE ARICULOS***********\n\n";
    for(int j=0;j<pr;j++)
    {
    	sub=sub+precio[j];
    	iva=sub*0.12;	
	    dsc=sub*0.10;
    	total=sub+iva-dsc;
	}
	for(int j=0;j<pr;j++)
	{
		cout<<j+1<<".-     "<<articulos[j]<<"\t\t"<<precio[j]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<sub<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dsc<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
	
cout<<"****************GRACIAS POR SU COMPRA ESTIMADO CLIENTE****************";
getch ();
return 0;
}