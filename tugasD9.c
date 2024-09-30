#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];
    char name[21];
} student;

int binary_search(student students[], int n, char id[]) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(id, students[mid].id);
        if (cmp == 0) {
            return mid;
        } else if (cmp < 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s", students[i].id, students[i].name);
    }

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char id[11];
        scanf("%s", id);

        int index = binary_search(students, n, id);
        if (index == -1) {
            printf("Case #%d: N/A\n", i + 1);
        } else {
            printf("Case #%d: %s\n", i + 1, students[index].name);
        }
    }

    return 0;
}
