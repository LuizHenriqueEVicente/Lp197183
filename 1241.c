#include <stdio.h>
#include <string.h>

int main(){
    int n; //números de casos a serem revisados
    char a[1001], b[1001];

    if (scanf("%d", &n) == 1) {
        do{
            scanf("%s %s", a, b);
    
    int tamA = strlen(a);
    int tamB = strlen(b);
    
    if (tamA >= tamB && strcmp(&a[tamA - tamB], b) == 0){
        printf("encaixa\n");
    } else{
        printf("nao encaixa\n");
    }
} while(--n);
    }
    return 0;
}
