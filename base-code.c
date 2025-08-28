#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    do{
    #ifdef _WIN32
    // system("CLS"); // Para windows
    #else
    system("clear"); // Para Linux/macOS
    #endif
    printf("===============================\n Calculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
    double a, b;
    int x;
    scanf("%d", &x);

    while(x<1 || x>5){
        printf("Opcao invalida! Tente novamente.\n");
        scanf("%d", &x);
    }

    if(x==5){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        return 0;
    }

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &a);
    printf("Digite o segundo numero:\n");
    scanf("%lf", &b);

    if(x==1){
        printf("Resultado: %.2lf + %.2lf = %.2lf\n", a, b, (a+b));
    }
     if(x==2){
        printf("Resultado: %.2lf - %.2lf = %.2lf\n", a, b, (a-b));
    }
     if(x==3){
        printf("Resultado: %.2lf * %.2lf = %.2lf\n", a, b, (a*b));
    }
    if(x==4){
            if(b==0){
                printf("Erro: Divisao por zero na eh permitida.\n");
            }
            else{
        printf("Resultado: %.2lf / %.2lf = %.2lf\n", a, b, (a/b));
            }
    }

    printf("Deseja realizar outra operacao? (s/n): ");
    scanf(" %c", &c);


    while(c != 's' && c != 'S' && c != 'n' && c != 'N'){
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao: ");
        scanf(" %c", &c);
}
    if (c=='n'|| c=='N'){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        return 0;
    }
    }while(c=='s'||c=='S');

    return 0;
}
