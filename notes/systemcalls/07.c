/*
 * File descriptors
 * 0 --> stdin
 * 1 --> stdout
 * 2 --> stderr
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main() {
    // reading from stdin
    // and trying to lseek
    int n;
    n = open("/home/sahil/append.txt", O_WRONLY);

    char arr[20];
    int t = read(0, arr, 5);
    write(n, arr, t);

    lseek(0, -4, SEEK_CUR);

    int u = read(0, arr, 4);
    write(n, arr, u);

}
