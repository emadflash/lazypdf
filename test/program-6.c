/*
@title:
    draw the following figure:
@input:
    None
@output:
    3 2 1
    2 1
    1
*/
#include <stdio.h>
int main() {
    for (int i = 3; i > 0; --i) {
        for (int j = i; j > 0; --j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
