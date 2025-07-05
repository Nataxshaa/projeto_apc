#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> // Para a função sleep

struct jogador {
    char name [50];
    int cartela[5][5]; // Matriz para a cartela de bingo
};
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;
    struct jogador jogadores[4]; // Array para armazenar até 4 jogadores
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
                    fgets(jogadores[totalJogadores].name, sizeof(jogadores[totalJogadores].name), stdin);
                    jogadores[totalJogadores].name[strcspn(jogadores[totalJogadores].name, "\n")] = 0; // Remove o newline do final da string
                    totalJogadores++;

                    if (totalJogadores < 4) {
                        printf("Deseja adicionar mais um jogador ? (s/n): ");
                        scanf(" %c", &escolha);
                        getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
                    } else if (totalJogadores == 4) {
                         printf("Máximo de jogadores atingido.\n");
                         printf("Digite 1 para seguir e gerar as cartelas ou 2 para voltar ao menu principal: ");
                         scanf("%d", &seguir);
                         getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
                        break;
                    } else (escolha == 'N' || escolha == 'n'); {
                        printf("Digite 1 para seguir e gerar as cartelas ou 2 para voltar ao menu principal: ");
                        scanf("%d", &seguir);
                        getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
                    }
                } while ((escolha == 'S' || escolha == 's') && totalJogadores < 4);

                if (seguir == 1 ){
                      if (totalJogadores >= 1 && totalJogadores <= 4) {
                        //aqui vai gerar as cartelas
                } else {
                    printf("Número de jogadores insuficientes. Deve ser entre 1 e 4.\n");
                }
                    // Aqui você pode continuar com a lógica de geração de cartelas e jogo
                } else if (seguir == 2) {
                    printf("Voltando ao menu principal.\n");
                    sleep(3); // Pausa de 3 segundo para o usuário ler a mensagem
                }
            } else if (opcao == 2) {
                printf("Saindo do jogo\n");
            } else {
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
    } while (opcao != 2);
}//continuar com a lógica de geração de cartelas e jogo e como sair do loop de jogadores cadastradosgit 