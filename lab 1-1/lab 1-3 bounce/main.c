//7- C Program to compute Quotient and Remainder
#include <stdio.h>
int main() {
    int elbst, elmkam, quotient, remainder;
    printf("Enter elbst: ");
    scanf("%d", &elbst);
    printf("Enter elmkam: ");
    scanf("%d", &elmkam);
    quotient = elbst / elmkam;
    remainder = elbst % elmkam;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}

