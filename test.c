#include <stdio.h>

int main() {
    int num, i;

    int x=2;
    int y=3;

x = x + y;
y = x - y;
x = x - y;
      printf("\n%d %d",x,y);



    int binary[32];  // to store binary digits (enough for 32-bit int)

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    i = 0;
   printf("\n");
    while (num > 0) {
        binary[i] = num % 2;  // remainder (0 or 1)
         printf("\n%d %d",num,num % 2);
        num = num / 2;
       
        i++;
      
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {  // print in reverse
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
