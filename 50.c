#include <stdio.h>
#include <stdlib.h>

typedef struct RECORD {
    int i;
    struct RECORD *next;
    struct RECORD *back;
}RE,ahmed;

RE* add(int i, RE *pre) {
    RE *current = malloc(sizeof(RE));
    current->i = i;
    if (pre != NULL) {
        pre->next = current;
    }
    current->next = NULL;
    return current;
}

void printLL(RE *first) {
    RE *prt = first;
    while (prt != NULL) {
        printf("\n%d", prt->i);
        prt = prt->next;
    }
    printf("\n");
}

int main() {
    int rec;
    printf("\n How may record you want to enter=");
    scanf("%d", &rec);
    RE *pre = NULL;
    RE *first = NULL;
    for (int i=0; i<rec; i++) {
        int j;
        printf("\n Enter rec #%d =", i);
        scanf("%d", &j);
        pre = add(j, pre);
        if(first == NULL) {
            first = pre;
            first->back = NULL;
        }
    }
    printLL(first);
    return 0;
}


