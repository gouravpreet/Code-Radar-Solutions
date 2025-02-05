#include <stdio.h>
int main() {
    char a,c;
    int b;
    scanf("%c %c",&a,&b);
    scanf("%c",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b );
    printf("Hobby: %s\n",c);
    char Name[50],Hobby[50];
    int Age;
    scanf("%s %d %s",Name,&Age,Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;
}