#include <stdio.h>


calculaSomaItensVetor(float* vetor){
  float soma;
  int numItens = sizeof(vetor)
}







calculaMediaPonderada(float* valores,float *pesos){
   float soma = 0;
   int numItens = sizeof(valores)/sizeof(valores[0]); //numero de itens de um vetor.
   //calculando a soma ponderada das notas
   for (int i = 0; i < numItens; i++)
    {
        soma += valores[i]*pesos[i];
    }
   
    float mediaPonderada=

  
}





int main(){
    float notas[4],soma=0,pesos[4]={2,3,4,1};

    for (int i = 0; i < 4; i++)
    {
        scanf("%f",&notas[i]);
    }
    
     float media= soma/10;
    printf("Media: %.1f\n",media);

    if (media < 5)
    {
        printf("Aluno reprovado.\n");
    } 
    else if(media >= 7){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        float notaExame;
        scanf("%f",&notaExame);
        printf("Nota do exame: %.1f\n",notaExame);
        float mediaFinal = (notaExame +media)/2;

       if (mediaFinal>=5)
       {
          printf("Aluno aprovado.\n");
       }else{
          printf("Aluno reprovado.\n");
       }
       printf("Media final: %.1f\n",mediaFinal);
    }
    

    return 0;
}