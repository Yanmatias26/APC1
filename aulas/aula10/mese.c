#include <stdio.h>

int main()
{
    enum meses_do_ano_e
    {
        jan,
        fev,
        mar,
        abr,
        mai,
        jun,
        jul,
        ago,
        set,
        out,
        nov,
        dez
    };
    char nome_dos_meses[12][10] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto",
                                   "setembro", "outubro", "novembro", "dezembro"};

    printf("ENTRE COM UM MSE DE 1 A 12\n");
    int mes = 0;
    scanf("%i", &mes);

    if (jan <= mes - 1 && mes - 1 <= dez)
    {
        printf("o mes que foi escolhido foi %s\n", nome_dos_meses[mes - 1]);
    }
    else
    {
        printf("MES NAO INVALIDO\n");
    }

    return 0;
}