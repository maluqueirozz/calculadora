#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    do{
    #ifdef _WIN32
    system("CLS"); // Para windows
    #else
    system("clear"); // Para Linux/macOS
    #endif
    printf("===============================\n Calculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
    int x, a, b;
    scanf("%d", &x);

    if(x==5){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        return 0;
    }

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    if(x==1){
        printf("Resultado: %d + %d = %d\n", a, b, (a+b));
    }
     if(x==2){
        printf("Resultado: %d - %d = %d\n", a, b, (a-b));
    }
     if(x==3){
        printf("Resultado: %d * %d = %d\n", a, b, (a*b));
    }
    if(x==4){
            if(b==0){
                printf("Erro: Divisao por zero na eh permitida.\n");
            }
            else{
        printf("Resultado: %d / %d = %d\n", a, b, (a/b));
            }
    }

    printf("Deseja realizar outra operacao? (s/n): ");
    scanf(" %s", &c);
    do{
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao: ");
        scanf(" %c", &c);
    }
    while(c!='n'&&c!='N'&&c!='s'&&c!='S');
    if (c=='n'||c=='N'){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        return 0;
    }

    }
    while(c=='s'||c=='S');

    return 0;
}
