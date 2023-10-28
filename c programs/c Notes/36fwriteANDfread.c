#include <stdio.h>
int main()
{
    typedef struct book
    {
        char name[20];
        float price;
        int saled;
        char favChap[20];
    } deatails;

    deatails b1 = {"Harry Potter", 99.99, 55, "Chap 7"};
    deatails b2 = {"Ajit", 100.18, 99, "Chap 8"};
    FILE *fp;
    fp = fopen("Book.txt", "wb");
    fwrite(&b1, sizeof(b1), 1, fp);
    if (ferror(fp))
    {
        printf("\n---ERROR !--\n");
    }
    else
    {
        printf("\n--Content written Successfully !--\n");
    }
    fclose(fp);
    fp = fopen("Book.txt", "ab");
    fwrite(&b2, sizeof(b2), 1, fp);
    if (ferror(fp))
    {
        printf("\n---ERROR !--\n");
    }
    else
    {
        printf("\n--Content written Successfully !--\n");
    }
    fclose(fp);

    printf("\n---Content Written in File is ---\n");
    fp = fopen("Book.txt", "rb");

    fread(&b1, sizeof(b1), 1, fp);
    printf("\nBook Name : %s", b1.name);
    printf("\nPrice : %f", b1.price);
    printf("\nSaled Book : %d", b1.saled);
    printf("\nFva Chapter : %s", b1.favChap);

    fread(&b2, sizeof(b2), 1, fp);
    printf("\n\nBook Name : %s", b2.name);
    printf("\nPrice : %f", b2.price);
    printf("\nSaled Book : %d", b2.saled);
    printf("\nFva Chapter : %s", b2.favChap);

    fclose(fp);
    return 0;
}
