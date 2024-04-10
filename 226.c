226)
typedef struct Item {
  char nome[50];
  float valorUnitario;
  int quantidade;
} Item;

int main() {
  Item *itens = malloc(sizeof(Item) * 5);
  int nItens = 0;

  int opcao;
  char nome[50];
  float valorUnitario;
  int quantidade;

  do {
    // Exibe o menu de opções
    printf("\n--- Gerenciador de Compras ---\n");
    printf("1. Adicionar item\n");
    printf("2. Remover item\n");
    printf("3. Obter valor total\n");
    printf("4. Mostrar relatório\n");
    printf("5. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        // Lê os dados do item
        printf("Digite o nome do item: ");
        scanf(" %[^\n]s", nome);
        printf("Digite o valor unitário: ");
        scanf("%f", &valorUnitario);
        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        // Adiciona o item à lista
        adicionarItem(&itens, &nItens, nome, valorUnitario, quantidade);
        break;
      case 2:
        // Lê o nome do item
        printf("Digite o nome do item: ");
        scanf(" %[^\n]s", nome);

        // Remove o item da lista
        removerItem(&itens, &nItens, nome);
        break;
      case 3:
        // Mostra o valor total da compra
        printf("Valor total: R$ %.2f\n", obterValorTotal(itens, nItens));
        break;
      case 4:
        // Mostra o relatório com a lista de itens
        mostrarRelatorio(itens, nItens);
        break;
      case 5:
        // Sai do programa
        printf("Saindo do programa...\n");
        break;
      default:
        // Opção inválida
        printf("Opção inválida!\n");
    }
  } while (opcao != 5);

  // Libera a memória alocada
  free(itens);

  return 0;
}