/*
    versão 1.5 Programa Imobilaria

*/

//Bibliotecas
#include <conio.h>
#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // importar para usar algun comandos do windows principalmente na parte de utilidades e as cores
#include "funcoes.c"
//#include "formatbr.c"



//Configuracão



// Variavel Global
char opcao;



//Menu Incial com as opcões
void MenuPrincipal(Console){
    // Nome que aparece no topo da janela
	SetConsoleTitle("IMOBILIARIA");
    printf( "\n\t\t\t\tIMOBILIARIA");

    SetConsoleTextAttribute(Console, VERDE);
	printf( "\n\n\n\t========================= BAIXADA BROKERS =========================\n");
    SetConsoleTextAttribute(Console, BRANCO);

	printf(	"\n\n\t1 -> CLIENTE     ||" "\t4 -> SIMULAÇÃO\t|| "     "\t7 -> AJUDA"
			"\n\n\t2 -> CORRETOR    ||" "\t5 -> UTILIDADES\t\t|| "  "\t8 -> SOBRE"
			"\n\n\t3 -> IMÓVEIS    ||"  "\t6 -> USUARIO\t\t|| "     "\t0 -> SAIR||");
    SetConsoleTextAttribute(Console, VERDE);
    printf( "\n\n\t===================================================================\n");
    SetConsoleTextAttribute(Console, BRANCO);
    printf("\nEntre com a o desejada: ");
}


//Numero correspodente aa opcao do menu
//1
void MenuCliente(Console){

    // configuracao da tela
    SetConsoleTitle("IMOBILIARIA - CLIENTES");
    SetConsoleTextAttribute(Console, AZUL_CLARO);

	printf("\n\n\n\t\t============= MENU CLIENTE ==============\n\n");

    // Comando para cor de um lado e o que vai ser exbido na tela do outro de acordo com a cor
    SetConsoleTextAttribute(Console, VERDE);
    printf( "\n\t\t\t1 <-> Cadastrar Cliente"
            "\n\t\t\t2 <-> lista de Cliente"
            "\n\t\t\t3 <-> Excluir Cliente"
            "\n\t\t\t4 <-> Buscar Cliente");
    // SetConsoleTextAttribute(Console, VERDE);    {}  printf( "\n\t3 - ");
    // SetConsoleTextAttribute(Console, BRANCO);   {}  printf( "Editar Cadastro");
    SetConsoleTextAttribute(Console, VERMELHO);
    printf( "\n\t\t\t0 <-> Menu Principal");

    SetConsoleTextAttribute(Console, AZUL_CLARO);
    printf( "\n\n\t\t=========================================");

        printf("\n\nEntre com a opção desejada: ");
        SetConsoleTextAttribute(Console, VERDE);
        ctrNumber(&opcao);

    switch(opcao){
        case '1': // Cadastro Cliente
            CadastroCliente(Console);
            break;
        case '2': // listar Cadastro
            ListarCliente(Console);
            break;
        // case '3': // Editar Cliente
        // 	main();
        // 	break;
        case '3': // Excluir Cliente
            ExcluirCliente();
            break;
        case '4': // Buscar Cliente
            BuscarCliente(Console);
            break;
        case '0':// Voltar para o Menu Principal
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\nOpção Inválida!\n");
            Sleep(500);
            system("cls");
            MenuCliente(Console);
            break;
    }
}


//2
void MenuCorretor(Console){

    // configuracao da tela
    SetConsoleTitle("IMOBILIARIA - CORRETOR");

    SetConsoleTextAttribute(Console, AZUL_CLARO);

	printf("\n\n\n\t\t============ MENU CORRETOR ============\n\n");
    SetConsoleTextAttribute(Console, VERDE);

    printf( "\n\t\t\t1 <-> Cadastrar Corretor"
            "\n\t\t\t2 <-> lista de Corretor"
            "\n\t\t\t3 <-> Excluir Corretor"
            "\n\t\t\t4 <-> Buscar Corretor");
    //printf( "\n\t3 - "  "Editar Cadastro");
    SetConsoleTextAttribute(Console, VERMELHO);
    printf( "\n\t\t\t0 <-> Menu Principal");

    SetConsoleTextAttribute(Console, AZUL_CLARO);
    printf( "\n\n\t\t=========================================");
    printf("\n\nEntre com a opção desejada: ");
    ctrNumber(&opcao);

    switch(opcao){
        case '1': // Cadastro Corretor
            CadastroCorretor();
            break;
        case '2': // Listar Cadastro
            ListarCorretor();
            break;
        // case '3': // Editar Corretor
        // 	main();
        // 	break;
        case '3': // Excluir Corretor
            ExcluirCorretor();
            break;
        case '4': // Excluir Corretor
            BuscarCorretor();
            break;
        case '0':// Voltar para o Menu Principal
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\nOpção Inválida!\n");
            Sleep(500);
            system("cls");
            MenuCorretor(Console);
            break;
    }
}


//3
void MenuImoveis(Console){

    // configuracao da tela
    SetConsoleTitle("IMOBILIARIA - IMOVEIS");
    SetConsoleTextAttribute(Console, BRANCO);

	printf("\n\n\n\t\t============ MENU IMÓVEIS ============\n\n");

	printf( "\n\t\t\t1 <-> Cadastro Imóvel\n"
            "\n\t\t\t2 <-> Lista de Imóveis\n"
	        // "3 <-> Alterar Imóvel\n"
	        "\n\t\t\t3 <-> Excluir Imóvel\n"
	        "\n\t\t\t4 <-> Buscar Imóvel\n"
	        "\n\t\t\t0 <-> Voltar");
    printf( "\n\n\t\t========================================");
    printf("\n\nEntre com a opção desejada: ");

    SetConsoleTextAttribute(Console, VERDE);
    ctrNumber(&opcao);

    switch(opcao){
        case '1': // Cadastro Imóvel
            CadastroImovel(Console);
            break;
        case '2': // Lista com tod imóveis
            ListarImovel(Console);
            break;
        case '3': //Excluir imóvel
            ExcluiImovel(Console);
            break;
        case '4': // Buscar Imóvel
            BuscarImovel(Console);
            break;
        // case 5: //
        // 	MenuPrincipal();
        // 	break;
        case '0': //Voltar
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\nOpção Inválida!\n");
            Sleep(500);
            system("cls");
            MenuImoveis(Console);
            break;
    }
}


//4
void MenuSimulado(Console){

    SetConsoleTitle("IMOBILIARIA - SIMULADO");

    SetConsoleTextAttribute(Console, BRANCO);

	printf("\n\n\n\t\t============MENU SIMULACAO============\n\n");
	printf("\n\t\t\t1 <-> Simulacao tabela SAC\n");
	printf("\n\t\t\t2 <-> Simulacao tabela Price\n");
	printf("\n\t\t\t0 <-> Menu Pricipal\n");
    printf( "\n\t\t======================================");
	printf("Entre com a opção desejada: ");

    SetConsoleTextAttribute(Console, VERDE);
    ctrNumber(&opcao);
    switch(opcao){
        case '1': // tabela SAC
            SimularFinanciamento();
            break;
        case '2': // tabela Price
            main();
            break;
        // case '3': // Voltar
        //     main();
        // 	break;
        case '0': // Voltar Menu Pricipal
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\nOpção Inválida!\n");
            Sleep(500);
            system("cls");
            MenuSimulado(Console);
            break;
    }
}


//5
void MenuUtilidades(Console){

    // configuracao da tela
    SetConsoleTitle("Imobliaria - UTILIDADES");
    SetConsoleTextAttribute(Console, BRANCO);


    printf( "\t\t============MENU Utilidade============"
            "\n\n\t\tEscolha um programa para abrir\t\n\n"
            "\t\t\t1 <-> Calculadora\t\n\n"
            "\t\t\t2 <-> Bloco de notas\t\n\n"
            "\t\t\t3 <-> WordPad\t\n\n"
            "\t\t\t4 <-> Microsoft Word\t\n\n"
            "\t\t\t5 <-> Microsoft Excel\t\n\n"
            "\t\t\t6 <-> Microsoft chrome\t\n\n"
            "\t\t\t0 <-> Menu Principal\t\n\n"
            "\t\t======================================"
            "\n\nObs.: Algumas opções acima só irá abrir se o mesmo estiver instalado no computador.\n\n");


    //tenta implementar o gotoxy da biblioteca conio.h
    printf ("Digite a opção desejada: ");
    SetConsoleTextAttribute(Console, VERDE);
    ctrNumber(&opcao);
    switch (opcao){
        case '1':
            system ("start calc");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '2':
            system ("start notepad");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '3':
            system ("start write");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '4':
            system ("start winword");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '5':
            system ("start excel");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '6':
            system ("start chrome");
            system("cls");
            MenuUtilidades(Console);
            break;
        case '0':
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf ("\n\nDesculpe, mas esta opção é inválida.\n\n");
            Sleep(500);
            system("cls");
            MenuUtilidades(Console);
            break;
    }
}


//6
void MenuUsuario(Console){
    SetConsoleTextAttribute(Console, BRANCO);
}


//7
void MenuAjuda(Console){

    // configuracao da tela
    SetConsoleTitle("IMOBILIARIA - AJUDA");
    SetConsoleTextAttribute(Console, BRANCO);

    printf( "\n\n\t\t============ MENU AJUDA ==============="
           "\t\t\t1 <-> Menu PRINCIPAL\n"
            "\n\n\t\t\t1 <-> Menu CLIENTE\n"
            "\t\t\t2 <-> Menu CORRETOR\n"
            "\t\t\t3 <-> Menu IMÓVEIS\n"
            "\t\t\t4 <-> Menu UTILIDADES\n"
            "\t\t\t5 <-> Menu SIMULAÇÃO\n"
            "\t\t\t5 <-> Menu USUARIO\n"
            "\t\t\t5 <-> Menu AJUDA\n"
            "\t\t\t6 <-> Menu SOBRE\n"
            "\t\t\t0 <-> VOLTAR"
            "\n\n\t\t=======================================");
    printf("\n\nQual dos menus tem Duvida: ");

        SetConsoleTextAttribute(Console, VERDE);
        ctrNumber(&opcao);

    switch(opcao){
        case '1': // pricipal
            printf( "\n\n\t\tO Menu Principal é a tela pricipal, "
                   "\n\t\t"
                    "\n\t\tTe da acesso aos outros menus e foi ao que te trouxe aqui"
                    "\n\t\tLinka"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '2': // cliente
            printf( "\n\n\t\tO Menu Cliente cria cadastro do cliente da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do cliente através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum cliente"
                    "\n\t\tMostrar uma Lista com todos os cliente cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '3': // Corretor
            printf( "\n\n\t\tO Menu Corretor cria cadastro do corretor da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do corretor através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum corretor"
                    "\n\t\tMostrar uma Lista com todos os corretor cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '4': // imoveis
            printf( "\n\n\t\tO Menu Imóveis cria cadastro do Imóveis da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do Imóveis através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum Imóveis"
                    "\n\t\tMostrar uma Lista com todos os Imóveis cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '5': // utilidades
            printf( "\n\n\t\tO Menu Cliente cria cadastro do Imóveis da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do Imóveis através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum Imóveis"
                    "\n\t\tMostrar uma Lista com todos os Imóveis cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '6': // simulação
            printf( "\n\n\t\tO Menu Simulação cria cadastro do simulação da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do simulação através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum simulação"
                    "\n\t\tMostrar uma Lista com todos os simulação cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '7': // usuario
            printf( "\n\n\t\tO Menu Usuário cria cadastro do usuário da imobiliaria, "
                    "\n\t\tRealiza a busca do cadastro do usuário através do CPF"
                    "\n\t\tRealiza a exclusão do cadastro de algum usuário"
                    "\n\t\tMostrar uma Lista com todos os usuário cadastrado"
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '8': // ajuda
            printf( "\n\n\t\tO Menu Ajuda "
                    "\n\t\tRealiza a busca do "
                    "\n\t\tRealiza a exclusão do "
                    "\n\t\tMostrar uma Lista com todos "
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '9': // sobre
            printf( "\n\n\t\tO Menu Sobre"
                    "\n\t\tRealiza "
                    "\n\t\tRealiza"
                    "\n\t\tMostrar "
                    "\n\n\t\t\Precione qualquer tecla ara voltar: ");
                    getch();
            break;
        case '0':// Voltar para o Menu Principal
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\nOpção Inválida!\n");
            Sleep(500);
            system("cls");
            MenuAjuda(Console);
            break;
    }
}


//8
void MenuSobre(Console){

    SetConsoleTitle("IMOBILIARIA - SOBRE");
    SetConsoleTextAttribute(Console, BRANCO);

    printf( "\n\n\t\tA BI tecnology foi formada por dois estudantes e tamebem "
            "\n\tprogramadores com grandes sonhos e muita criatividade. "
            "\n\n\tObrigado por adquirir um dde nossos software,"
            "\n\tespero que goste e obrigado por nos escolher."
            "\n\tAtesiosamente Isac e Valdenor CEOs da BI Tecnology.!");
    printf( "\n\n\n\tUma supresa para você cliente, no software adquirido"          "\n\ttem menus secretos que em breve estará disponivel em uma breve atulaização"
            "\n\tDigite 0 para sair ou 1,2 ou 3 para acessar esses misteriosos menus");

    SetConsoleTextAttribute(Console, VERDE);
    ctrNumber(&opcao);
    switch(opcao){
        case '1':
            EditarCliente();
            break;
        case '2': // Lista com tod imóveis
            EditarCorretor();
            break;
        case '3':
            EditarImovel();
            break;
        case '0':
            main();
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\n\n\t\t\tOpção Inválida!");
            Sleep(500);
            system("cls");
            MenuSobre(Console);
            break;
    }
}



//Redireciona para qual menu vai acessar de acordo com as opcão e todos retornam para o main
int main(){

    HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Console, BRANCO);

    char sair;
    char opcMenu[2];
    char opc;
    // i de indice
    int i = 0, cont=0, enter=0;

    // configuracao da tela
    setlocale(LC_ALL, "Portuguese");

    system("cls");
    MenuPrincipal(Console);
    SetConsoleTextAttribute(Console, VERDE);
    do{
        cont++;
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
    i=0;

    switch(opcMenu[0]){
        case '1': // Menu Cliente
            opcMenu[0] ='\0'; // Deixando o valor nulo para quando retornar ao menu principal não acessar nenhum outro menu quando apertar o enter
            system("cls");
            MenuCliente(Console);
            break;
        case '2': // Menu Corretor
            opcMenu[0] ='\0';
            system("cls");
            MenuCorretor(Console);
            break;
        case '3': // Menu Imoveis
            opcMenu[0] ='\0';
            system("cls");
            MenuImoveis(Console);
            break;
        case '4': // Menu Ajuda
            opcMenu[0] ='\0';
            system("cls");
            MenuSimulado(Console);
            break;
        case '5': // Menu Utilidade
            opcMenu[0] ='\0';
            system("cls");
            MenuUtilidades(Console);
            break;
        case '6': // Menu de Teste
            opcMenu[0] ='\0';
            system("cls");
            MenuUsuario(Console);
            break;
        case '7': // Menu de Teste
            opcMenu[0] ='\0';
            ajuda:
            system("cls");
            MenuAjuda(Console);
            break;
        case '8': // Menu de Simulado
            opcMenu[0] ='\0';
            system("cls");
            MenuSobre(Console);
            break;
        case '0': // sair
            system("cls");
            do{
                printf( "\n\n\tTem certeza que deseja sair do programa ?\n"
                        "\tdigite 1 ou Sim para Sair\n"
                        "\t2 ou Não para voltar ao Menu"
                        "\n\nDigite a opcao escolhida?");
                ctrAlnum(&sair);

                    if(sair== '1' || tolower(sair)== 's'){
                        printf ("%c", sair);
                        exit(1);
                    }else if(sair== '2' || tolower(sair)== 'n'){
                        printf ("%c", sair);
                        system("cls");
                        MenuPrincipal();
                        break;
                    }
                    else{
                        printf("\n\n\n\t\t\tOpcao Invalida!! Tente denovo!");
                        Sleep(1000);
                        system("cls");
                    }
            }while(sair!= 's' || sair!= 'n');
            break;
        default:
            SetConsoleTextAttribute(Console, VERMELHO);
            printf("\n\t\t\tOpcao Invalida!! Tente denovo!");
            Sleep(1000);
            system("cls");
            main();
            break;
    }

	return 0;
}

