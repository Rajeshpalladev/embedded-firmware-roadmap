#include <stdio.h>

struct book
{
    char title[30];
    int pages;
    float price;
};

int main()
{
    struct book b1 = {"rajesh", 600, 7000};
    struct book b2 = {"palla", 900, 8000};

    printf("%s\n", b1.title);
    printf("%s\n", b2.title);

    return 0;
}


//best_method
