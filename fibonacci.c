#include <stdio.h>
#include <locale.h>
//Fibonacci

int main(){
    
    
    
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    printf("Digite um número inteiro:");
    scanf("%d", &n);
    
    int fibonacci[n-1];
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for(int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    
    for(int j = 0; j < n; j++){
        printf("%d ", fibonacci[j]);
    }
    
    return 0;
}
