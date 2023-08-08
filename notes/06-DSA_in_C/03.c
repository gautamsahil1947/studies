#include <stdio.h>
#include <stdlib.h>


int lengthOfLongestSubstring(char * s);

int main() {
    char s[] = "m";
    int count = lengthOfLongestSubstring(s);
    printf("%i\n", count);
}



int lengthOfLongestSubstring(char * s){
    char*arr = (char*) calloc(256, sizeof(char));
    int maxCount = 0;
    int count = 0;

    int index = 0;
    int lastBest = 0;

    while (s[index] != '\0') {
        if (arr[(int)s[index]] == 0) {
            arr[(int)s[index]] = 1;
            ++count;
            ++index;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 0;
            free(arr);
            arr = (char*) calloc(256, sizeof(char));
            index = ++lastBest;
        }
    }

    if (count > maxCount) {
        return count;
    }

    return maxCount;
}
