#include <iostream>
#include <string>

using namespace std;


struct prodotto
{
	string nome;
	float prezzo;
	string categoria;
};


void aggiungi( prodotto x, prodotto v[], int d)
{
	
}


void visualizza ( prodotto v[], int d)
{
	
}


int cerca( prodotto x, prodotto v[], int d)
{
	
}


bool cancella( prodotto x, prodotto v[], int d)
{
	return false;
}

bool modifica( prodotto x, prodotto v[], int d)
{
	return true;
}
	
	
	
	
	
int main()
{
prodotto supermercato[100];
int d=sizeof(supermercato)/sizeof(supermercato[0]);
int opzione;
prodotto x;
	do{
		//visualizzazione voci
		cout<<"1 - aggiungi";
		//altre voci
		cout<<"2 - visualizza";
		cout<<"3 - cerca";
		cout<<"4 - cancella";
		cout<<"5 - modifica";
		cout<<"0 - finisce il programma";
		cin>>opzione;
		switch(opzione)
		{
			case 1://operazione 1
			    
				aggiungi(x, supermercato, d);
				break;
				
			case 2://operazione 2
			
				visualizza(supermercato, d);
				break;
					
			case 3://operazione 3
			
				cerca(x, supermercato, d);
				break;
				
			case 4://operazione 4
			
				cancella(x, supermercato, d);
				break;
					
			case 5://operazione 5
			
				modifica(x, supermercato, d);
				break;
				
				
		}
		
	}while(opzione!=0);


    return 0;
}
