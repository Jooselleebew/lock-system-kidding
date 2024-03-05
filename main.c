#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Selamat datang di Mr.Lock System ^_^");

    int password;
    int FakeInput;

    printf("\n\nTolong masukkan password kamu: ");
    scanf("%d", &password);

    if (password == 2005)
    {
        printf("\nKata sandi anda benar :)");
        printf("\nHalo teman temanku :)");
    }
    else
    {
        printf("\nPassword anda salah -_-");
        printf("\nAnda masih memiliki waktu dua menit -_-");

        printf("\nCoba lagi..");
        scanf("%d", &password);

        if (password == 2005)
        {
            printf("\nKata sandi anda benar :)");
            printf("\nHalo teman temanku :)");
        }
        else
        {
            printf("\nPassword anda salah -_-");
            printf("\nAnda masih memiliki waktu satu menit -_-");

            printf("\nCoba lagi..");
            scanf("%d", &password);

            if (password == 2005)
            {
                printf("\nKata sandi anda benar :)");
                printf("\nHalo teman temanku :)");
            }
            else
            {
                printf("\nPassword anda salah -_-");
                printf("\nAnda sudah melewati batas percobaan.");
            }
        }
    }
    scanf("%d", &FakeInput); // Menunggu input sebelum program berakhir
    return 0;
}
