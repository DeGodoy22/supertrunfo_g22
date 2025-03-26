#include <stdio.h>
int main(){
    int Populacao;
    int Pontos;
    float Area;
    float Pib;
    char Estado;
    char Cidade[9];
    char Codigo[3];
  

    printf("Digite a populacao: ");
    scanf("%d", &Populacao);


    printf("Digite o numero de pontos turisticos: ");
    scanf("%s", &Pontos);


    printf("Digite a Area  :");
    scanf("%f", &Area);


    printf("Digite o Pib: ");
    scanf("%f", &Pib); 


    printf("Digite o Estado: ");
    scanf("%c\n", &Estado);


    printf("Digite a Cidade: ");
    scanf("%d\n", &Cidade);


    printf("Digite o Codigo: ");
    scanf("%i\n", &Codigo);

}