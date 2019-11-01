

#include <stdio.h>         // entrada e saída padrão: printf, scanf
#include <stdlib.h>		   // exit, malloc, system
/***********************************************/ 
/* Definição do Registro e da Estrutura        */
/* Profa Daniela Bagatini                      */
/***********************************************/ 
typedef struct{            // registro pessoa
       int  codigo;
       char nome[30];
}INFORMACAO;
       
typedef struct nodo{
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o próximo registro
}NODO;

void imprime_lista( NODO *aux ){
     
    int i= 0;                       // indica número de registro na lista
	 
    if( aux == NULL )               // verifica se lista vazia
        printf( "\n Lista vazia!" );
	else{
	    printf("\n Relatório Geral ----------------------------------------- ");
        while( aux != NULL ){       // ponteiro auxiliar para percorrer a lista
               printf( "\n\n Registro[%d] \t End: [%#p] \t Prox: [%#p]", i, aux, aux->prox );               
               printf( "\n\t\t Código: %d", aux->info.codigo );
			   printf( "\t\t Nome.: %s", aux->info.nome );
               aux = aux->prox;     // aponta para o próximo registro da lista
               i++;
		 } // fim while( aux != NULL )
	} // fim if( aux == NULL )
	getchar();                      // parada da tela
}

void inclui_fim(NODO* *l, char nome[30]){
    
    NODO* no =  ( NODO * ) malloc ( sizeof( NODO ) );//Tenta alocar pra ver se a memória está cheia
    
    if( no != NULL ){// Alocou com sucesso
      
        no->info.codigo = 10;//Gravando informações
        no->prox = NULL;//Gravando informações
        strcpy(no->info.nome, nome);//Gravando informações
        
        if(*l != NULL){ //Verifica se o primeiro é nulo
            
            NODO* aux =  *l;//Auxiliar
            
            while(aux->prox != NULL){ //Enquanto o ->prox não for NULL
                aux = aux->prox; //Igual o elemento do ->prox
            }
            
            aux->prox = no;//Guarda no ->prox
        }else{
            *l = no;//Lista vazia guarda direto
        }
    }else{
      printf( "\n Lista cheia!" );
    }
}

void inclui_inicio( NODO* *l ){
 
    NODO* no =  ( NODO * ) malloc ( sizeof( NODO ) ); // aloca novo espaco em memória
    if( no != NULL ){                                 // verifica se conseguiu alocar memória para o novo registro
             // lê dados
             no->info.codigo = 10;
             strcpy(no->info.nome, "joao");
             
             
             no->prox = *l;                           // novo aponta para o primeiro existente ou para Null
             *l = no;                                 // início aponta para o novo registro
             printf( "\n Registro incluido!" );
        } // fim if( no != NULL )
    else{
        printf( "\n Lista cheia!" );
    }
        
}


int main()
{
    printf("Hello World");
    NODO * n = NULL;
    inclui_fim(&n, "teste");
    inclui_fim(&n, "teste2");
    inclui_fim(&n, "teste3");
    imprime_lista(n);
    
    return 0;
}
