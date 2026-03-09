#include <iostream>
#include <string>
using namespace std;

//strutture e funzioni
struct prodotto
{
	string nome;
	string categoria;
	float prezzo;	
};

void aggiungi(prodotto pp, prodotto ele[],int &dim)
{
	ele[dim]=pp;
	dim++;	
}

string visualizza(prodotto ele[], int dim)
{
	string s;
	for(int i=0;i<dim;i++){
		s+=ele[i].nome+"\t";
		s+=ele[i].categoria+"\t";
		s+=to_string(ele[i].prezzo)+"\n";
	}
	return s;
}

int cerca(prodotto pp, prodotto ele[], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		if(ele[i].nome == pp.nome)
		{
			return i; //dice la posizione se trova il prodotto
		}
	}
	
	return -1; //se non lo trova
}

bool cancella(prodotto pp, prodotto ele[], int &dim)
{
	int pos = cerca(pp, ele, dim);
	
	if(pos == -1)
		return false;

	for(int i = pos; i < dim-1; i++)
	{
		ele[i] = ele[i+1];
	}
	
	dim--;
	
	return true;
}

bool modifica(prodotto pp, prodotto ele[], int dim)
{
	int pos = cerca(pp, ele, dim);
	
	if(pos == -1)
		return false;

	cout << "inserisci il nuovo nome: ";
	cin >> ele[pos].nome;
	
	cout << "inserisci la nuova categoria: ";
	cin >> ele[pos].categoria;
	
	cout << "inserisci il nuovo prezzo: ";
	cin >> ele[pos].prezzo;
	
	return true;
}


int main()
{
	//dichiarazioni delle variabili
	prodotto  p;
	prodotto elenco[100];
	int n=0;
	//variabile di appoggio per la funzione cerca
	int app;
	
	//struttura a menù
	int scelta;
	do
	{
		//visualizzazione opzioni
		cout<<"\n1 - Aggiunta"<<endl;
		cout<<"2 - Visualizzazione"<<endl;
		cout<<"3 - ricerca"<<endl;
		cout<<"4 - cancellazione"<<endl;
		cout<<"5 - modifica"<<endl;
		cout<<"0 - Fine programma"<<endl;
		//scelta dell'opzione
		cout<<"scegli l'opzione: ";
		
		cin>>scelta;
		fflush(stdin);
		
		//elaborazione scelta
		switch(scelta)
		{
			case 1:	//operazione 1
				cout<<"Inserisci il nome ";
				cin >> p.nome;
				cout<<"Inserisci la categoria ";
				cin >> p.categoria;
				cout<<"Inserisci il prezzo ";
				cin>>p.prezzo;
				aggiungi(p,elenco,n);
				break;
			case 2:	//operazione 2	
			    cout<<visualizza(elenco,n);
				break;
				
			case 3:		//operazione 3			
				cout << "inserisci il nome del prodotto \n";
				cin >> p.nome;
				app = cerca(p, elenco, n);
				if(app == -1)
				    cout << "prodotto non trovato";
				else
				    cout << "prodotto trovato in posizione: " << app << endl;
				break;
				
			case 4:		//operazione 4

				cout << "inserisci il nome del prodotto \n";
				cin >> p.nome;
				cancella(p, elenco, n);
				break;
			
			case 5:		//operazione 5
			
			    cout << "inserisci il nome del prodotto \n";
				cin >> p.nome;
				modifica(p, elenco, n);
				break;
		}
	}
	while (scelta!=0);
	
    return 0;		
}
