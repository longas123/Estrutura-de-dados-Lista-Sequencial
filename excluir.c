

#include <stdio.h>         // entrada e saída padrão: printf, scanf
#include <stdlib.h>		   // exit, malloc, system
typedef struct{            // registro pessoa
       int  diamante;
       char string[1000];
}INFORMACAO;
       
typedef struct nodo{
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o próximo registro
}NODO;


int main(){
    int qty;
    scanf("%i", &qty);
    
    for(int i=0; i<qty){
        
        for(int j = 0; j<info.strlen[string];j++){
            scanf("%s"; &info.string);
            if(info.string[j] == '>'){
                abre++;
            }else if(info.string[j] == '<' && abre>0){
                info.diamante++;
                NODO->prox;
                abre--;
            }
        }
    }
    printf("%i", info.diamante);
}
   

