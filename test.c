#include <stdio.h>

int main() {
    int integerNumber = 37;
    double floatingNumber = 7.3256175;

    printf("Ціле число у десятковому форматі: %d\n", integerNumber);
    printf("Ціле число у двійковому форматі: %b\n", integerNumber);
    printf("Ціле число у вісімковому форматі: %o\n", integerNumber);
    printf("Ціле число у шістнадцятковому форматі: %x\n", integerNumber);
    printf("Дійсне число у формі з плаваючою комою: %f\n", floatingNumber);
    printf("Дійсне число у експоненційній формі: %e\n", floatingNumber);
    printf("Дійсне число у гнучкій формі: %g\n", floatingNumber);

    return 0;
}
