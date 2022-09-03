#include <stdio.h>

int main() {
    int d, m, a;

    // Ler data de maneira separada, como solicitado.
    printf("Digite o dia: ");
    scanf("%d", &d);
    printf("Digite o mes: ");
    scanf("%d", &m);
    printf("Digite o ano: ");
    scanf("%d", &a);
 
    switch (m) // Checkar se a data é válida e dizer o próximo dia.
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: // Meses com 31 dias.
        if(d >= 1 && d <= 31)
            (d != 31) ? printf("Amanha sera: %d/%d/%d", d+1, m, a) : printf("Amanha sera: 1/%d/%d", m+1, a);
        break;
    case 4: case 6: case 9: case 11: // Meses com 30 dias.
        if(d >= 1 && d <= 30)
            (d != 30) ? printf("Amanha sera: %d/%d/%d", d+1, m, a) : printf("Amanha sera: 1/%d/%d", m+1, a);
        break;
    case 2:
        if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) // Bissexto checker.
            if(d >= 1 && d <= 29)
                (d != 29) ? printf("Amanha sera: %d/%d/%d", d+1, m, a) : printf("Amanha sera: 1/%d/%d", m+1, a);
        else
            if(d >= 1 && d <= 28)
                (d != 28) ? printf("Amanha sera: %d/%d/%d", d+1, m, a) : printf("Amanha sera: 1/%d/%d", m+1, a);
        
    }
}
