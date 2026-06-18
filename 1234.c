#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];

    while (fgets(frase, sizeof(frase), stdin) != NULL){ // repete o processo até que o proggrama encontre o fim do arquivo (NULL), entender melhor o stdin.
        int maiuscula = 1; //determinação para que a flag funcione como um interruptor para maiuscula ou minusculo (quando maiuscula == 1, a proxima letra será maiscula pois é verdade)
        int tam = strlen(frase);

        for (int i = 0; i < tam; i++){
            if (isalpha(frase[i])){
                if (maiuscula){
                    printf("%c", toupper(frase[i]));
                    maiuscula = 0; // desliga o "interruptor", a proxima é minuscula.
                } else{
                    printf("%c", tolower(frase[i]));
                    maiuscula = 1; //religa o interruptor, a proxima é maiuscula.
                }
            } else{
                printf("%c", frase[i]); // para os espaços ou outros caracteres.
            }
        }
    }

    return 0;
}
