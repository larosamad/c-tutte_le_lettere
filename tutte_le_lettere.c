// legge una sequenza di caratteri (la sequenza termina quando viene inserito il carattere #), conta il numero complessivo di lettere minuscole comprese nella sequenza, stampa questo valore 
#include <stdio.h>

const char STOP = '#';
char gianna;
int cont = 0;

int main(void){

    do{
        printf("Inserisci un carattere ");
        scanf(" %c", &gianna);
        if ((gianna >= 97) && (gianna <= 122)){
        cont++;
        }
    } while (gianna != STOP);

    printf("Il numero di minuscole è %d", cont);
    return 0;
}