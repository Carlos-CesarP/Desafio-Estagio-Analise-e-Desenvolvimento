#include <stdio.h>
#include <string.h>

void invstring(char* str) {
	
    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
	
    char string[100];
    
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")];
    invstring(string);
    printf("A string invertida é: %s\n", string);
    
    return 0;
}
