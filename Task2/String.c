#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int digit_count = 0;
	
    printf("Enter a string:\n");
  
	fgets(s, sizeof(s), stdin);

    size_t len = strlen(s);

    for (size_t i = 0; i < len; ++i) {
        unsigned char ch = (unsigned char)s[i];
        if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
    }

    printf("Number of digits in the string: %d", digit_count);

    return 0;
}
