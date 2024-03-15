#include <stdio.h>

int main(void){
    float salario,valordasvendas,valortotal;
    scanf("%f%f", &salario, &valordasvendas);

    if(valordasvendas <= 1500){
        valortotal = valordasvendas * 0.03 + salario;
    }
    else
        valortotal = valordasvendas * 0.03 + salario +  0.05 * (valordasvendas - 1500);

    printf("%.4f", valortotal);
}
