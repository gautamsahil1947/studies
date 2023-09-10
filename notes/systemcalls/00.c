/*
 * WRITE System Call
 *
 * function prototype:
 *      write(int fd, const void *buf, size_t n);
 *
 * first argument       --> file stream, stdout(1), stderr(2)
 * second argument      --> buffer
 * third argument       --> number of outputs to be written
 *
 * return value         --> number of characters printed
 *
 * ???  What if number of characters to be printed is greater
 *      than the character stream size
 *
 * If fd == 2, then it prints to the stderr
 * this can be confirmed using 
 *      ./a.out 2>/dev/null
 *      It doesn't print the write buffer message
 *
 */


#include <unistd.h>
#include <stdio.h>

int main() {
    size_t n;
    n = write(1, "sahil\n", 6);
    printf("Number of characters printed: %zu\n", n);
}
