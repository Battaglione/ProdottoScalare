#include <stdio.h>
#include <stdlib.h>

int main()  //INIZIO
{
    int a[10], b[10], i, mag1, mag2, scal, prod, imax1, imax2;    //Dichiarazione Variabili
    mag1 = 0;                                       //Le variabili "mag1", "mag2", "sca1", "prod, "i" sono uguali a 0
    mag2 = 0;
    scal = 0;
    prod = 0;
    imax1 = 0;
    imax2 = 0;
    for(i = 0; i < 10; i++){                        //Ciclo for che stabilisce che: "i" è uguale a 0; il ciclo continua finchè "i" è minore di 10; la variabile "i" incrementa di 1 ogni volta che finisce le istruzioni del ciclo
    printf("Inserisci il valore del primo vettore numero %d", i + 1); //Il programma mette in output la seguente frase e il valore di "i + 1"
    printf("\n");                                                     //Il programma va a capo
    scanf("%d", &a[i]);                                               //Il programma chiede in input il valore di a[i]
    }

    for(i = 0; i < 10; i++){                                          //Ciclo for che stabilisce che: "i" è uguale a 0; il ciclo continua finchè "i" è minore di 10; la variabile "i" incrementa di 1 ogni volta che finisce le istruzioni del ciclo
    printf("Inserisci il valore del secondo vettore numero %d", i + 1);  //Il programma mette in output la seguente frase e il valore di "i + 1"
    printf("\n");                                                        //Il programma va a capo
    scanf("%d", &b[i]);                                                  //Il programma chiede in input il valore di a[i]
    }

    for(i = 0; i < 10; i++){  //Ciclo for che stabilisce che: "i" è uguale a 0; il ciclo continua finchè "i" è minore di 10; la variabile "i" incrementa di 1 ogni volta che finisce le istruzioni del ciclo
        prod = + a[i] * b[i]; //La variabile prod assume il valore della moltiplicazione tra a[i] e d[i]
        scal = scal + prod;   //La variabile scal assume il valore della somma tra scak e prod
    }
    system("cls");            //Il programma pulisce lo schermo
    printf("%d", scal);       //Il programma stampa "scal"
    i = 0;
    printf("\n");
    for (i = 0; i < 10; i++) {      //Ciclo for che stabilisce che: "i" è uguale a 0; il ciclo continua finchè "i" è minore di 10; la variabile "i" incrementa di 1 ogni volta che finisce le istruzioni del ciclo
  		if(a[i] > mag1){            //il programma verifica se a[i] è maggiore di mag1
  			mag1 = a[i];            //se si assegna alla variabile mag1 il valore di a[i]
  			imax1 = i + 1;
		  }
    }
    printf("Il valore maggiore del primo vettore e' %d", mag1);
    printf(" il quale e' il valore numero %d", imax1);
    printf("\n");
    for (i = 0; i < 10; i++) {
  		if(b[i] > mag2){
  			mag2 = b[i];
  			imax2 = i + 1;
		  }
    }
    printf("Il valore maggiore del secondo vettore e' %d", mag2);
    printf(" il quale e' il valore numero %d", imax2);
}
