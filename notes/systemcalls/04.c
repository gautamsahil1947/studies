#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


int main() {
    int n;
    n = open("/home/sahil/append.txt", O_APPEND);
    printf("File descriptor value --> %i\n", n);


    char arr[15];

    int t;
    t = read(0, arr, 15);

    int q;
    q = write(n, arr, t);

    for (int i = 0; i < t; ++i) {
        printf("%c", arr[i]);
    }
}
