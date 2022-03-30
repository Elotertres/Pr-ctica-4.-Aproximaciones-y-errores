#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main(){
int opc,i=0,y;
float e=1,suma=0,elevado,div,comp,temp2;
int resultado,temp;
double factorial,x[101]; 
	do{
		
		cout<<"**************************************************************************"<<endl;
		cout<<"*******************Práctica 4. Aproximaciones y errores*******************"<<endl;
		cout<<"**************************************************************************"<<endl;
		cout<<endl;
		cout<<"Seleccione su opcion"<<endl;
		cout<<"1.-Inicar su programa"<<endl;
		cout<<"2.-Creditos"<<endl;
		cout<<"3.-Salir"<<endl;
		scanf("%d",&opc);
		system("CLS");
		
		switch(opc){
			
			
			case 1:
				
			cout<<"i:		Termino:		Suma:"<<endl;
			cout<<i;
			cout<<"		";
			cout<<e;
			cout<<"		";
			suma=suma+e;
			cout<<suma<<endl;
				
			e=10;
			
				for(int i=1; i<=50;i++){
							
					factorial=i;	
					
					for(int j=1; j<100;j++){

						if(i==j){
							j=100;
						}else{
							
						factorial = factorial*j;	
						
						}
						
					}
				elevado=pow(10, i);				
				div=elevado/factorial;
		
				suma=suma+div;
				x[i]=suma;
				cout<<i;
				cout<<"		";
				cout<<div;
				cout<<"		";
				cout<<suma<<endl;
				
					if(x[i-1]==suma){
						return -1;
					}
				}
			
			
			system ("pause");
			system("cls");
			break;
				
			case 2:
				
			system("CLS");
			cout<<"Universidad Autonoma de Aguascalientes"<<endl;
			cout<<"**********************************************************"<<endl;
			cout<<"MAESTRA:"<<endl;
			cout<<"Dra. Aurora Torres Soto"<<endl;
			cout<<"Alumno:                               ID:"<<endl;
			cout<<"Juan Pablo Martínez Rocha              243645"<<endl;
			cout<<"**********************************************************"<<endl;
			system("pause");
			system("CLS");
			break;
					
		}
		
	}while(opc!=3);
}
