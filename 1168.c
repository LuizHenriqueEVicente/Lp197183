#include <stdio.h>
#include <string.h>

int main(){
    
    int casos;
    char aux[101];// não esquecer que o /0 deve ser contabilizado como um espaço existente na memoria.
    int i;
    long long AllLeds;
    
    scanf("%d", &casos);//quantidades de casos a serem analizados.
    
    while(casos--){
        
        scanf("%s", aux);
        AllLeds = 0;
        
        if(aux[0] != '\0'){//previne casos de strings vazias de entrarem.
            
            i = 0;
            
            do{
                
               switch(aux[i]){
                   
                   case '1': AllLeds += 2; break;
                   case '2': AllLeds += 5; break;
                   case '3': AllLeds += 5; break;
                   case '4': AllLeds += 4; break;
                   case '5': AllLeds += 5; break;
                   case '6': AllLeds += 6; break;
                   case '7': AllLeds += 3; break;
                   case '8': AllLeds += 7; break; 
                   case '9': AllLeds += 6; break;
                   case '0': AllLeds += 6; break;
                   
               } i++;
               
            }while(aux[i] != '\0');
        }
        
        printf("%lld leds\n", AllLeds);
    }    
    return 0;
}
