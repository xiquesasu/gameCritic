#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

#define VERMELHO "\x1b[31m"
#define VERDE   "\x1b[32m"
#define AZUL    "\x1b[36m"
#define AMARELO "\x1b[33m"
#define RESET   "\x1b[0m"

struct usuario {
    char nome[15];
};

struct usuario cadastro;

void separar(){
	printf("--------------------------------------");
}

struct gameAval{
	char nameGame[30];
	int mediaGame;

}cadastroJogos[0];


void notas(int gra, int gam, int his, int per, int media, int contador) {

	fflush(stdin);

    printf("%s De 0 a 10, qual nota voc� d� para ele nos quesitos a seguir:\n\n",cadastro.nome);

	printf("Gr�ficos:");
    scanf("%d",&gra);

   	printf("Gameplay:");
   	scanf("%d",&gam);

	printf("Hist�ria:");
	scanf("%d",&his);

	printf("Personagens:" );
	scanf("%d",&per);

	media=(gra+gam+his+per)/4;

	cadastroJogos[contador].mediaGame = media;

		separar();
		printf(AMARELO"\nGR�FICOS-          [%d]\nGAMEPLAY-          [%d]\nHIST�RIA-          [%d]\nPERSONAGENS-       [%d]\n"RESET,gra,gam,his,per);
		separar();

		fflush(stdin);

		printf("\n\nUm momento %s, estou processando a m�dia das notas...",cadastro.nome);
		Sleep(4000);



	if(media<=4){
			system("cls");
			printf("\nEi! nem � t�o ruim assim... "VERMELHO" A M�DIA FOI DE [%d]"RESET,media);
			Sleep(3000);
			system("cls");
	}
	else if(media>=5 && media<=7){
			system("cls");
			printf("\n� um jogo bem mais ou menos na sua opini�o n�o �? "AZUL" A M�DIA FOI DE [%d]"RESET,media);
			Sleep(3000);
			system("cls");

	}

	else{
			system("cls");
			printf("\nQue bom que voc� acha um jogo decente, at� porque ele � mesmo!"VERDE" A M�DIA FOI DE [%d]  :)"RESET,media);
			Sleep(3000);
			system("cls");
	}

}


void dev() {
	printf("%s nessa aba eu utilizei "VERDE"meu pr�prio c�digo"RESET" pra fazer essas avalia��es!\n\nAs notas est�o a seguir:\n\n",cadastro.nome);

		separar();
	printf(VERDE"\nELDEN RING- [10]\n"RESET);
		separar();
	printf(VERDE"\nRED DEAD REDEMPTION 2- [10]\n"RESET);
		separar();
	printf(AZUL"\nMARVEL'S SPIDER-MAN REMASTERED - [9]\n"RESET);
		separar();
	printf(AZUL"\nSTARFIELD- [8]\n"RESET);
		separar();
	printf(AMARELO"\nFALLOUT 4- [6]\n"RESET);
		separar();
	printf(AZUL"\nTHE ELDER SCROLLS V: SKYRIM- [9]\n"RESET);
		separar();
	printf(VERMELHO"\nGRAND THEFT AUTO V- [5]\n"RESET);
		separar();
	printf(VERDE"\nDAVE THE DIVER- [10]\n"RESET);
		separar();
	printf(AZUL"\nRESIDENT EVIL 4 REMAKE- [9]\n"RESET);
		separar();
	printf(VERDE"\nSLIME RANCHER 2- [10]\n"RESET);
		separar();
	printf("\n");
	system("pause");
	system("cls");

}
void finalizar() {

	printf("%s muito obrigado por utilizar meu programa! :D\n\nPOR: JO�O V�TOR ALMEIDA\n\n"VERDE"*GITHUB: XIQUESASU*"RESET, cadastro.nome);
    	exit(0);
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int escolha,enc=1;
	
	int contadorCodigo = 0;

	char jogo[30];

	int gra, gam, his, per;
	int media;

    printf("Bem-vindo ao avaliador de jogos! :)\nPara fazer seu cadastro, digite o seu primeiro nome:\n");
    gets(cadastro.nome);
    system("cls");

    do {
        printf("%s escolha uma op��o:\n\n[1]Avaliar um jogo\n[2]Avalia��es do DEV\n[3]Suas avalia��es\n[4]Sair\n\n",cadastro.nome);
        scanf("%d",&escolha);
        system("cls");

        switch (escolha) {
            case 1:
				printf("Qual jogo gostaria de avaliar?\n");
				fflush(stdin);
				gets(jogo);
				strcpy(cadastroJogos[contadorCodigo].nameGame, jogo);
                notas(gra, gam, his, per, media, contadorCodigo);

				contadorCodigo++;
                break;

            case 2:
                dev();
                break;

			case 3:
				for(int i = 0; i < contadorCodigo; i++){
					separar();
					printf("\nJogo: %s\n", cadastroJogos[i].nameGame);
					printf("\nMedia: %d\n", cadastroJogos[i].mediaGame);
					separar();
				}
				system("pause");
				system("cls");
				break;

			case 4:
				finalizar();
				enc=0;
				break;


			default:
				printf(VERMELHO"Digite uma op��o v�lida!\n"RESET);
					Sleep(1000);
					system("cls");
        }
    } while(enc==1);
}
