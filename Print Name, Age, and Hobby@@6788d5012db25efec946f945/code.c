#include <stdio.h>
int main() {
    char name[20];
    int age;
    char hobby[50];

    scanf("%s",name);
    printf("Name: %s\n",name);

    scanf("%d",&age);
    printf("Age: %d\n",age);

    scanf("%s",hobby);
    printf("Hobby: %s\n",hobby);

    return 0;
}