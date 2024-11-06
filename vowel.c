#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character to check whether it is Vowel or not: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel.\n",ch);
    }
    else
    {
        printf("%c is a not a vowel.\n",ch);
    }
}