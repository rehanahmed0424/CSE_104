#include<stdio.h>

float input_amount()
{
    float a;
    printf("Enter the amount to be converted: ");
    scanf("%f", &a);
    printf("\n");
    return a;
}

float convert_to_eur(float a)
{
    float b = a*0.85;
    return b;
}

float convert_to_gbp(float a)
{
    float c = a*0.73;
    return c;
}

int main()
{
    float amount = input_amount();

    int currency,choice;
    printf("Convert to:\n");
    printf("1. EUR\n");
    printf("2. GBP\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &currency);
    printf("\n");
    if(currency == 1)
    {
        float eur = convert_to_eur(amount);
        printf("Amount: $%0.2f (USD) is equivalent to €%0.2f (EUR)",amount, eur);
    }

    else if(currency == 2)
    {
        float gbp = convert_to_gbp(amount);
        printf("Amount: $%f (USD) is equivalent to £%f (GBP)", amount,gbp);
    }

    else
    {
        printf("invalid input");
    }

}
