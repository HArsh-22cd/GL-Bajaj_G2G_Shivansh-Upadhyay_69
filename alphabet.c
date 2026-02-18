#include<stdio.h>
int main()
{
    char x;
    printf("Enter a letter = ");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    printf("Letter is Vowel");
    else
    printf("Letter is Consonant");
    return 0;
}