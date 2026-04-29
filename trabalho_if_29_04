#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    float n1, n2, n3;
    float media;
    
    printf("Digite suas três notas, com espaços entre cada uma:");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    //printf("%f, %f, %f", n1, n2, n3);
    
    char tipo_media;
    
    printf("Agora escolha a média à ser calculada: \n"
    "•Digite A para média aritmética.\n"
    "•Digite P para média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.\n"
    "•Digite G para média geométrica.\n"
    "•Digite H para média harmônica.\n");
    
    scanf(" %c", &tipo_media);
    
    if(tipo_media == 'A' || tipo_media == 'a'){
        media = (n1+n2+n3)/3;
        printf("Sua média aritmética é %f!", media);
    }else if(tipo_media == 'P' || tipo_media == 'p'){
        media = (n1 + 2*n2 + 3*n3)/6;
        printf("Sua média ponderada é %f!", media);
    }else if(tipo_media == 'G' || tipo_media == 'g'){
        float base = n1*n2*n3;
        float expoente = 1.0f/3;
        media = pow(base, expoente);
        printf("Sua média geométrica é %f!", media);
    }else if(tipo_media == 'H' || tipo_media == 'h'){
        float soma_inversos = (1.0f/n1) + (1.0f/n2) + (1.0f/n3);
        media = 3.0f/(soma_inversos);
        printf("Sua média harmônica é %f!", media);
    }else{
        printf("ERRO, sua escolha foi incondizente com as opções apresentadas!");
    }
    
    return 0;
}
