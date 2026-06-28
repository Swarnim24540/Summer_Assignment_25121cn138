#include <stdio.h>

int main() {
    int a[100], b[100], unionArr[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(a[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            unionArr[k] = a[i];
            k++;
        }
    }

    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(b[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            unionArr[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}