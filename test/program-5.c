/*
@title:
    print the entire prime no between 1 and 300.
@input:
    None
@ouput:
    1
    1
    2
    ..
*/

#include <stdio.h>

int main() {
    int count;
    for (int i = 1; i < 300; ++i) {
        count = 0;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0)
                ++count;
        }
        if (count == 0)
            printf("%d\n", i);
    }
    return 0;
}
