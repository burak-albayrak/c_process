//Write a function that finds the circumference and area of a rectangle.
//The side lengths of the rectangle are taken with call by value method and the circumference and area are returned with call by reference method.

#include <stdio.h>

void circumference(int long_length, int short_length, int *circ){
    *circ = (long_length * 2) + (short_length * 2);
}
void area_t(int long_length, int short_length, int *area){
    *area = long_length * short_length;

}
int main() {

    int long_length, short_length;
    int circ, area;

    printf("please enter the short and long lengths:");
    scanf("%d %d", & long_length, & short_length);

    circumference(long_length, short_length, &circ);
    area_t(long_length, short_length, &area);

    printf("Circumference: %d\n", circ);
    printf("Area: %d\n", area);

    return 0;
}
