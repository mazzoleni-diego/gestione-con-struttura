#include <iostream>
#include <string>

using namespace std;


struct prodotto
{
	string nome;
	float prezzo;
	string categoria;
};

// aggiunge variabile all array e aumenta la dimensione dell array
void aggiungi( prodotto x, prodotto v[], int d)
{	
	cout << "inserisci la categoria \n";
	cin >> x.categoria;
	cout << "inserisci il nome \n";
	cin >> x.nome;
	cout << "inserisci il prezzo \n";
	cin >> x.prezzo;
	v[d] = x;
}


void visualizza ( prodotto v[], int d)
{
	for( int i = 0; i < d; i++)
	{
		cout <<" il nome e' " << v[i].nome<<endl;
		cout <<" il prezzo e' " << v[i].prezzo<<endl;
		cout <<" la categoria e' " << v[i].categoria<<endl;	
	}
	
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
int d=0;
int opzione;
prodotto x;
	do{
		//visualizzazione voci
		cout<<"1 - aggiungi \n";
		//altre voci
		cout<<"2 - visualizza \n";
		cout<<"3 - cerca \n";
		cout<<"4 - cancella \n";
		cout<<"5 - modifica \n";
		cout<<"0 - finisce il programma \n";
		cin>>opzione;
		switch(opzione)
		{
			case 1:		//operazione 1
				aggiungi(x, supermercato, d);
				d++;
				break;
				
			case 2:		//operazione 2
			
				visualizza(supermercato, d);
				break;
					
			case 3:		//operazione 3
			
				cerca(x, supermercato, d);
				break;
				
			case 4:		//operazione 4
			
				cancella(x, supermercato, d);
				break;
					
			case 5:		//operazione 5
			
				modifica(x, supermercato, d);
				break;
				
				
		}
		
	}while(opzione!=0);




    return 0;
}
