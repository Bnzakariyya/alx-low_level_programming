#include <unistd.h>

void print_alphabet(void) {
    char c = 'a';
    while (c <= 'z') {
        _putchar(c);
        c++;
    }
    _putchar('\n');
}
