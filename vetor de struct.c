/*
crie uma struct funcionario com nome , idade, e salario.em seguinda ,crie um vetor com 10 funcionarios e faca a leitura dos dados funcionarios.
 ao final, imprima os dados lidos. 
*/
#include <stdio.h>//biblioteca para as funcoes principais 
#include <stdlib.h>//biblioteca para as funcoes  malloc e NULL

typedef struct funcionarios{//declaracao do tipo de estrutura

    char nome[70];//declaracao das variaveis
    int idade;
    float salario;
}funcionario;// //typedef serve para renomeia o nome estrutura

int main (void){//funcao principal
    int contador;//declaracao da variaveis contador

funcionario*vetor = (funcionario*)malloc(10*sizeof(funcionario));//alocacao dinamica do vetor

  if(vetor==NULL){//tomada de decisao onde se o vetor for igual a NULL entao ele retornarar erro
	printf("ERRO");
	exit(1);
}
printf("---SEJA BEM VINDO---\n\n");//serve para complementar o programa
printf("\n");

printf("Informe os dados referente aos funcionarios:\n");//nesse caso o usuario vai informa os dados 
for (contador=0; contador<10; contador++){//laco de repeticao que serve  para percorrer a quantidade de funcionarios ou seja 10 
//como indicar a questao desse modo  o usuario digitara os dados referente a os funcionarios

    printf("informe o nome do funcionario:\n");
    scanf(" %[^\n]", vetor[contador].nome);
    printf("informe a idade do funcionario:\n");
    scanf("%d", &vetor[contador].idade);
    printf("informe o salario do funcionario:\n");
    scanf("%f", &vetor[contador].salario);
}

//impressao dos dados dos funcionarios

  for (contador=0; contador<10; contador++){
    printf("funcionario:%d\n", contador);
    printf("nome:%s\n", vetor[contador].nome);
    printf("idade:%d\n",vetor[contador].idade);
    printf("salario:%f\n", vetor[contador].salario);
  }
  free(vetor);//liberar o vetor 
  return 0;
}
