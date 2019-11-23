/*
    versão 1.0 Programa Imobilaria

*/

//Bibliotecas
#include <conio.h>
#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // importar para usar algun comandos do windows principalmente na parte de utilidades
#include "funcoes.c"



//Configuracão



// contantes



// Variavel Global
char opcao;





// Tela login




//Menu Incial com as opcões
void MenuPrincipal(){
	//printf("IMÓBILIARIA \n");

    setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("IMOBILIÁRIA");

	printf(	"\nIMOBILIARIA \n\n\n"
			"\n1 - CLIENTE || "
			"2 - CORRETOR || "
			"3 - IMÓVEIS || "
			"4 - AJUDA || "
			"5 - UTILIDADES || "
            "6 - TESTES || "
			"0 - Sair"
			"\n\nEntre com a o desejada: ");
}


//Numero correspodente aa opcao do menu
//1
void MenuCliente(){
    //char opc;
    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");

	printf("MENU CLIENTE");

	printf( "\n\n(1) - Cadastrar Cliente\n"
	        "(2) - Editar Cadastro\n"
	        "(3) - Buscar Cliente\n"
	        "(4) - Excluir Cliente\n"
	        "(0) - Menu Principal\n"
	        "Entre com a opção desejada: ");
	//scanf("%i", &opcao);
	//system("cls");
	//getchar(); // limpar o <enter> do scanf anterior

    ctrNumber(&opcao);

	switch(opcao){
		case '1': // Cadastro Cliente
			CadastroCliente();
			break;
		case '2': // Editar Cadastro
			MenuPrincipal();
			break;
        case '3': // Buscar Cliente
			BuscarCliente();
			break;
        case '4': // Excluir Cliente
			MenuPrincipal();
			break;
		case '0':// Voltar para o Menu Principal
            MenuPrincipal();
			break;
		default:
			printf("Opção Invalida!");
			break;
	}

    system("pause");
}

//2
void MenuCorretor(){

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");


	printf( "\n1 - Cadastro de Corretor\n"
	        "2 - lista corretores\n"
	        "3 - Excluir Corretor\n"// estudar se aqui ? o lugar certo de comissao.
            "4 - Editar Cadastro\n"
	        "0 - Menu Principal\n");
	printf("Digite o numero da opçção desejada: ");
	scanf("%i", &opcao);
	//OpcaoCorretor(opcao);
	getchar(); // limpar o <enter> do scanf anterior

    	switch(opcao)
	{
		case '1': // Cadastro Corretor
			CadastroCorretor();
			break;
		case '2': // Editar Cadastro
			MenuPrincipal();
			break;
        case '3': // Buscar Cliente
			MenuPrincipal();
			break;
        case '4': // Excluir Cliente
			MenuPrincipal();
			break;
		case '0':// Voltar para o Menu Principal
            MenuPrincipal();
			break;
		default:
			printf("Opção Invalida!");
			break;
	}
}

//3
void MenuImoveis(){

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");

	printf("MENU IMOVEIS");

	printf("\n\n(1) - Cadastro Imóvel\n");
	printf("(2) - Buscar Imóvel\n");
	printf("(3) - Alteracao no Imóvel\n");
	printf("(4) - Excluir Imóvel\n");
	printf("(0) - Voltar\n");
	printf("Entre com a opcao desejada: ");
	scanf("%i", &opcao);
	getchar(); // limpar o <enter> do scanf anterior

	switch(opcao){
		case '1': // Cadastro Imóvel
			MenuPrincipal();
			break;
		case '2': // Buscar Imóvel
			MenuPrincipal();
			break;
        case '3': // Alteracao Cadastro
			MenuPrincipal();
			break;
        case '4': // Excluir Imóvel
			MenuPrincipal();
			break;
        // case 5: // Leitura Cadastro
		// 	MenuPrincipal();
		// 	break;
		case '0': //Voltar
			break;
		default:
			printf("Opcao invalida");
			break;
	}
}

//4
void MenuAjuda(){

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");


    printf("MENU AJUDA\n\n");
    system("pause");
}

//5
void MenuUtilidades(){

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");

    //variáveis
    //int opc=0;

    //título do programa
    SetConsoleTitle("Imobliaria - Utilidades");
   
    printf ("Escolha um programa para abrir\n\n");
    printf ("\t1 - Calculadora\n\n");
    printf ("\t2 - Bloco de notas\n\n");
    printf ("\t3 - WordPad\n\n");
    printf ("\t4 - Microsoft Word\n\n");
    printf ("\t5 - Microsoft Excel\n\n");
    printf ("\t6 - Microsoft chrome\n\n");
    printf ("\t7 - Menu Principal\n\n");
    printf ("Obs.: Algumas opcoes acima só irá abrir se o mesmo estiver instalado no computador.\n\n");

   
    //tenta implementar o gotoxy da biblioteca conio.h
    printf ("Digite a opção desejada: ");
   
    do{
        ctrNumber(&opcao);
        switch (opcao){
            case '1':
                system ("start calc");
                system("cls");
                MenuUtilidades();
                break;
            case '2':
                system ("start notepad");
                system("cls");
                MenuUtilidades();
                break;
            case '3':
                system ("start write");
                system("cls");
                MenuUtilidades();
                break;
            case '4':
                system ("start winword");
                system("cls");
                MenuUtilidades();
                break;
            case '5':
                system ("start excel");
                system("cls");
                MenuUtilidades();
                break;
            case '6':
                system ("start chrome");
                system("cls");
                MenuUtilidades();
                break;
            case '7':
                system("cls");
                MenuPrincipal();
                break;
            default:
                printf ("\n\nDesculpe, esta opção é inválida.\n\n");
        }
   }while(1);

    printf("MENU Utilidade");
    system("pause");
}

//6
void MenuTeste(){

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");


    printf("MENU Teste");
    system("pause");
}

//Redireciona para qual menu vai acessar de acordo com as opcão
int main(){

    char sair;
    char opcMenu[2];
    char opc;
    // i de indice
    int i = 0, cont=0, enter=0;

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");

	do{
		MenuPrincipal();
        do{
            opc=getch();
            if (opc != 13){
                if (isdigit(opc)!=0 || opc == ';'){
                    if (opc == ';'){
                        goto ajuda;
                    }else if (isdigit(opc)!=0){
                        if (i < 1){
                            opcMenu[i] = opc;
                            i++;
                            printf ("%c", opc);
                        }
                        else if(opc!='\b' && i){
                            if(i==1){
                                printf("\b");
                                opcMenu[i]='\0';
                                i--;
                                printf ("%c", opc);
                                printf("\b");
                            }
                        }
                    }
                }
                else if(opc=='\b'){
                    cont=0;
                    enter=0;
                    if(i==1){
                        printf("\b \b");
                        i--;
                    }else if(i==0){
                        printf(" \b");
                    }
                }
            }
            else{
                enter++;
                if(cont==1 && enter==1){
                    cont=0;
                    enter=0;
                    printf(" \b");
                }else{
                    if(i==0 && cont>1){
                        i=2;
                    }
                    else if(i!='\0'){
                        i=2;
                    }
                }
            }
        }while(i<2);
        //opc = opcMenu[0];
        i=0;

        switch(opcMenu[0]){
            case '1': // Menu Cliente
                opcMenu[0] ='\0'; // Deixando o valor nulo para quando retornar ao menu principal não acessar nenhum outro menu quando apertar o enter
                system("cls");
                MenuCliente();
                //printf("teste1");
                break;
            case '2': // Menu Corretor
                //opcMenu[0] ='\0';
                system("cls");
                MenuCorretor();
                printf("teste2");
                break;
            case '3': // Menu Imoveis
                //opcMenu[0] ='\0';
                system("cls");
                MenuImoveis();
                printf("teste3");
                break;
            case '4': // Menu Ajuda
                //opcMenu[0] ='\0';
                ajuda:
                system("cls");
                MenuAjuda();
                //MenuPrincipal();
                printf("teste5");
                break;
            case '5': // Menu Utilidade
                opcMenu[0] ='\0';
                system("cls");
                MenuUtilidades();
                printf("teste6");
                break;
            case '6': // Menu de Teste
                opcMenu[0] ='\0';
                system("cls");
                MenuTeste();
                printf("teste7");
                break;
            case '0': // sair
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
                Sleep(1000);
		}
        //getchar();
		system("cls");
        //printf("\noi\n%c\n\n", opcMenu[0]);
	}while(sair !=13);
	return 0;
}
