#include <stdio.h>
int main(){
  int opcao;
  do{
    printf("Menu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefas\n");
    printf( "0- Sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("Opcao escolhida: %d\n",opcao);
  }while(opcao != 0);
  }

