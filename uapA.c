#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char sekuen[101];

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%s", sekuen);

        int jumlah_karakter[26] = {0};
        int jumlah_karakter_unik = 0;

        for (int j = 0; j < strlen(sekuen); j++) {
            int index = sekuen[j] - 'a';
            jumlah_karakter[index]++;

            if (jumlah_karakter[index] == 1)
                jumlah_karakter_unik++;
        }

        if (jumlah_karakter_unik == 1)
            printf("Case #%d: NOT EQUAL\n", i);
        else
            printf("Case #%d: EQUAL\n", i);
    }
    return 0;
}