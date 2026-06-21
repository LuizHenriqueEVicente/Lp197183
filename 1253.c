#include <stdio.h>
#include <string.h>

int main(){
    
    int casos, ordem, i;
    char alfa [51];// 51 para considerar o \n no fim da string.
    
    if (scanf("%d", &casos) != 1 || casos <= 0){
        return 0;
    }
    
    do{
        
        scanf("%s", alfa);
        scanf("%d", &ordem);
        
        for(i = 0; i < strlen(alfa); i++){
            
            char descripto = ((alfa[i] - 'A' - ordem + 26) % 26) + 'A';
            
            printf("%c", descripto);
        }
        
        printf("\n");
        (casos--);
        
    }while(casos > 0);
    
    return 0;
}
