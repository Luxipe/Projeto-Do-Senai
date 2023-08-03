#include <iostream>



int strings algoritmo controleEstoque
   constante inteiro TAMANHO_ESTOQUE = 100
   registro Produto
      char nome
      int codigo
      float preco
      int quantidade
   fimregistro

   Produto estoque[TAMANHO_ESTOQUE]
   inteiro totalProdutos = 0

   procedimento registrarEntrada()
      // Solicitar informações sobre o novo produto
      escrever("Controle de Xbox 360, ")
      ler(estoque[totalProdutos].nome)



      escrever(" ")
      ler(estoque[totalProdutos].codigo)

      escrever("Informe o preço do produto: ")
      ler(estoque[totalProdutos].preco)

      escrever("Informe a quantidade do produto: ")
      ler(estoque[totalProdutos].quantidade)

      totalProdutos <- totalProdutos + 1
   fimprocedimento

   procedimento registrarVenda()
      // Solicitar informações sobre o produto vendido
      escrever("Informe o código do produto: ")
      ler(codigoProduto)

      // Procurar o produto no estoque
      inteiro indiceProduto = -1
      para i de 0 até totalProdutos - 1 passo 1 faça
         if se estoque[i].codigo = codigoProduto então
            indiceProduto <- i
            interromper
         fimse
      fimpara

      else se indiceProduto <> -1 então
         // Verificar a disponibilidade do produto
         if se estoque[indiceProduto].quantidade > 0 então
            escrever("Produto disponível! Realize o registro da venda.")
            estoque[indiceProduto].quantidade <- estoque[indiceProduto].quantidade - 1
         else senão
            escrever("Produto esgotado!")
         fimse
      else senão
         escrever("Produto não encontrado!")
      fimse
   fimprocedimento

   procedimento gerarRelatorio()
      para i de 0 até totalProdutos - 1 passo 1 faça
         escrever("Nome: ", estoque[i].nome)
         escrever("Código: ", estoque[i].codigo)
         escrever("Quantidade: ", estoque[i].quantidade)
         escrever("-----------------------------")
      fimpara
   fimprocedimento

   // Programa principal
   int main () {
      escrever("===== MENU =====")
      escrever("1. Registrar entrada de produto")
      escrever("2. Registrar venda de produto")
      escrever("3. Gerar relatório de estoque")
      escrever("4. Sair")
      escrever("Escolha uma opção: ")
      ler(opcao)

      if se opcao = 1 
         registrarEntrada()
      else senão se opcao = 2 
         registrarVenda()
      else senão se opcao = 3 
         gerarRelatorio()
      fimse
   else até que opcao = 4
fimalgoritmo