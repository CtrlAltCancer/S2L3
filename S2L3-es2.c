#include <stdio.h>
/*
 Si scriva un programma in linguaggio C che legga due valori interi
 e visualizzi la loro media aritmetica.
*/

int main(){
    int numa; 			//Dichiarazione var. in input
    int numb;
    double sum;			//Dichiarazione var. risultati
    double avg;

	//Stampa lo scopo del programma e richiede il primo dato.
    printf("\nTi calcolo la media aritmetica di due numeri.");
    printf("\nInserisci il primo dato: ");
	//Lettura dell'input Utente
    scanf("%d", &numa);
	//Richiede il secondo dato.
    printf("\nInserisci il secondo dato: ");
	//Lettura dell'input Utente
    scanf("%d", &numb);
	//Aggiunge i valori a sum, e li divide per due.
    sum = numa + numb;
	avg = (sum) / 2;

	//Manda il output il risultato. 
    printf("La media dei due numeri è: %.1f\n", avg);

	//Termina il programma.
    return 0;
}