#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;
    char name[100]; // colocar para ler com espaçamento;
    int c = 0;
    int aux = 0;
     do {
         printf("MENU PRINCIPAL \n");
         printf("Ecolha uma das opções\n");
         printf("1- Novo Jogador\n");
         printf("2- Sair\n");
         scanf("%d", &opcao);
         if (opcao == 1) {
        }
    } while (opcao != 2);

for (aux = 1; aux <= 4; aux++ ) {
                 printf("Digite o nome %dº jogador: \n", aux);
                 scanf("%s", name);
                 c++; // esta voltando para o 1º jogador
            }

}