# include <stdio.h>

int main() {
    int r;
    printf("enter radius: ");
    scanf("%d",&r);

    printf("area is:%f \n",3.14*r*r);
    printf("circumference is:%f \n",2*3.14*r);
    return 0;
}