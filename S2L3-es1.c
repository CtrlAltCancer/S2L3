#include <stdio.h>
/*
 Si scriva un programma che esegua l'operazione di moltiplicazione
 tra due numeri inseriti dall'utente.
*/

int main(){
    int fat1;  			//Dichiarazione var. in input
    int fat2;
    int prod;           //Dichiarazione var. risultato.
                        //Uso un intero, perché il prodotto di due numeri interi sarà comunque un intero.

    //Stampa lo scopo del programma e richiede il primo dato.
    printf("\nTi calcolo del prodotto di due numeri.");
    printf("\nInserisci primo fattore: ");
    //Lettura dell'input Utente
    scanf("%d", &fat1);
 	//Richiede il secondo dato.
    printf("\nInserisci secondo fattore: ");
    //Lettura dell'input Utente
    scanf("%d", &fat2);
    //Moltiplica i due fattori dentro una variabile che verrà stampata.
    prod = fat1 * fat2;

	//Manda il output il risultato. 
    printf("\nIl prodotto è: %d\n", prod);
    
	//Termina il programma.
    return 0;
}