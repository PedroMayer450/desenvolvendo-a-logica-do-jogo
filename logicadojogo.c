#include <stdio.h>

int main(){

char estado[500] = "Sao Paulo";
char b[600]="B8";
char cidade[50] = "Sao Paulo";
int populacao = 11000000 ;
int numerodepontosturisticos = 50 ;
float area = 1.521 ;
float pib = 828.900;
float densidade_populacional = populacao / area ;
float pib_per_capita = populacao / pib ;

printf("carta 1 :\n");

printf("estado:%s\n",estado);
printf("codigo:%s\n", b);
printf("cidade :%s\n", cidade);
printf("populacao:%d pessoas\n", populacao);
printf("numero de pontos turisticos :%d\n", numerodepontosturisticos);
printf("area:%.3f km²\n", area);
printf("pib:%.2f bilhoes de reais\n", pib);
printf("densidade populacional:%.2f hab km²\n",densidade_populacional);
printf("pib per capita :%.2f reais\n", pib_per_capita);

char Estado[500] = "Amazonas";
char B[600]="C8";
char Cidade[50] = "Manaus";
int Populacao = 2064000 ;
int Numerodepontosturisticos = 10 ;
float Area = 11.401 ;
float Pib = 103.281;
float Densidade_populacional = Populacao / Area ;
float Pib_per_capita = Populacao / Pib ;

printf("carta 2 :\n");

printf("estado:%s\n",Estado);
printf("codigo:%s\n", B);
printf("cidade :%s\n", Cidade);
printf("populacao:%d pessoas\n", Populacao);
printf("numero de pontos turisticos :%d\n", Numerodepontosturisticos);
printf("area:%.3f km²\n", Area);
printf("pib:%.2f bilhoes de reais\n", Pib);
printf("densidade populacional:%.2f hab km²\n",Densidade_populacional);
printf("pib per capita :%.2f reais\n", Pib_per_capita);

if(populacao>Populacao){
printf("populacão :carta 1 venceu\n");
} else{
printf(" populacao :carta 2 venceu\n");
}
if(numerodepontosturisticos>Numerodepontosturisticos){
    printf("numero de pontos turisticos :carta 1 venceu\n");
}else{
    printf(" numero de pontos turisticos :carta 2 venceu\n");
}
if(area>Area){
    printf("area :carta 1 venceu\n");
}else{
    printf(" area :carta 2 venceu\n");
}
if(pib>Pib){
    printf(" pib:carta 1 venceu\n");
} else{
    printf(" pib:carta 2 venceu\n");
}
if (densidade_populacional<Densidade_populacional){
    printf(" desnidade populacional :carta 1 venceu\n");
} else{
    printf(" densidade populacional :carta 2 venceu\n");
}
if (pib_per_capita>Pib_per_capita){
   printf ("pib per capita :carta 1 venceu\n");
} else {
    printf(" pib per capita :carta 2 venceu\n");
}
 return 0;

}