#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


int main() {
    int n;
    n = open("/home/sahil/.bash_history", O_RDWR);
    printf("fd is: %i\n", n);

    printf("Enter input: ");
    char array[20];
    int r;

    r = read(0, array, 20);
    printf("%i characters were read\n", r);
    write(n, array, r);


    int m;
    m = open("/home/sahil/.bash_history", O_WRONLY);
    printf("fd is: %i\n", m);


}
