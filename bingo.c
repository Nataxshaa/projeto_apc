#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;
    char name[4][50]; // vetor para armazenar os nomes
    int totalJogadores = 0; // variável para contar o total de jogadores
    char escolha = 'S'; // variável para controle de loop
    int seguir = 0; // variável para controle de loop após cadastrar jogadores
    
    do {
         printf("MENU PRINCIPAL \n");
         printf("Ecolha uma das opções\n");
         printf("1- Novo Jogador\n");
         printf("2- Sair\n");
         scanf("%d", &opcao);
         getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
         if (opcao == 1) {
                do{
                    printf("Digite o nome do %dº jogador: ", totalJogadores + 1);
                    fgets(name[totalJogadores], sizeof(name[totalJogadores]), stdin); //
                    name[totalJogadores][strcspn(name[totalJogadores], "\n")] = 0; // Remove newline character
                    totalJogadores++;

                    if (totalJogadores < 4) {
                        printf("Deseja adicionar mais um jogador ? (s/n): ");
                        scanf(" %c", &escolha);
                        getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
                    } else if (totalJogadores == 4) {
                         printf("Máximo de jogadores atingido.\n");
                        break;
                    } else{
                        escolha = 'N'; // Se o número máximo de jogadores for atingido, não permite mais adições
                        printf("Digite 1 para seguir e gerar as cartelas ou 2 para voltar ao menu principal: ");
                        scanf("%d", &seguir);
                        getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
                    }
                } while ((escolha == 'S' || escolha == 's') && totalJogadores < 4);
            } else if (opcao == 2) {
                printf("Saindo do jogo\n");
            } else {
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
    } while (opcao != 2);
}