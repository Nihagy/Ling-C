//Bibliotecas
#include <conio.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string++.h"


//Configuracão



// contantes
#define TAMANHO 10



// variaveis globais



int opcao;


void MenuPrincipal(){
	//printf("MENU PRINCIPAL \n");

	printf(	"\nIMOBILIARIA \n\n\n"
			"\n1 - teste1"
			"2 - teste2"
			"3 - teste3"
			"4 - teste4"
			"5 - AJUDA"
			"6 - UTILIDADES"
			"0 - Sair\t"
			"\n\nEntre com a opcao desejada: ");
}


int main(){

    //MenuPrincipal();
    char sair;
    //char opcMenu[10];
    char opc = '1';
    // i de indice
    //int i = 0;

    char t[7];
    //gets(t);
    scanf("%s", t);
    getchar();

    if(strcmp(t, "teste")==0){
        printf("foiii");
    }else{
        printf("quase");
    }

    

	do{
		MenuPrincipal();
        printf("\noi\n%c\n", opc);
        //scanf("%c", &opc);
		//opc=getch();

        crtNumber(&opc);

        switch(opc){
            case '1': // teste1
                system("cls");
                MenuPrincipal();
                printf("teste1");
                break;
            case '2': // teste2
                system("cls");
                MenuPrincipal();
                printf("teste2");
                break;
            case '3': // teste3
                system("cls");
                MenuPrincipal();
                printf("teste3");
                break;
            case '4': // teste4
                system("cls");
                MenuPrincipal();
                printf("teste4");
                break;
            case '5': // ajuda
                ajuda:
                system("cls");
                //MenuAjuda();
                MenuPrincipal();
                printf("teste5");
                break;
            case '6':
                system("cls");
                //MenuUtilidades();
                printf("teste6");
                system("pause");
                break;
            case '0':
                system("cls");
                printf("\n\tTem certeza que deseja sair do programa ?[S/N]: ");
                scanf("%c", &sair);
                getchar();
                if(sair == 'S' || sair == 's'){
                    exit(1);
                }else{
                    MenuPrincipal();
                }
                break;
            default:
                printf("\n\t\t\tOpcao Invalida!! Tente denovo!");
		}
        //getchar();
		system("cls");
	}while(sair !=13);

    return 0;
}
