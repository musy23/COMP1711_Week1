#include <stdio.h>

int main()
{
    float width;
    printf("Enter the width of the rectangle");
    scanf("%f", &width);
    
    float length;
    printf("Enter the length of the rectangle");
    scanf("%f", &length);

    float area = width * length;
    printf("%f\n", area);
    

    return 0;
}   