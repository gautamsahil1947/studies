/*
 * READ System Call
 * reads input form a file descriptor
 *
 * if the characters entered in the stdin are more than that of
 * what read can read, rest all will be given to the shell
 * and therefore it will execute (try to do so).
 *
 *
 */

#include <stdio.h>
#include <unistd.h>

#define ARRAY_SIZE 20

int main() {
    char array[ARRAY_SIZE];
    size_t n;
    n = read(0, array, 10);
    write(1, array, n);
    // size_t m;
    // // m = read(0, array, 10);
    // printf("Character count in stdin: %zu\n", m);

}
