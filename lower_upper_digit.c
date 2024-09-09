#include<stdio.h>

void findChar(char lett[]){
for (int i = 0; lett[i] != '\0'; i++)
    {
        if (lett[i] >= 'a' && lett[i] <= 'z')
        {
            printf("%c is a lowercase letter.\n", lett[i]);
            printf("ASCII Value of %c : %d\n",lett[i],  lett[i] );
        }
        else if (lett[i] >= 'A' && lett[i] <= 'Z')
        {
            printf("%c is an uppercase letter.\n", lett[i]);
            printf("ASCII Value of %c : %d\n",lett[i],  lett[i] );
        }
        else if(lett[i]>='0' && lett[i]<='9'){
            printf("%c is a digit.\n\n", lett[i]);
            printf("ASCII Value of %c : %d\n",lett[i],  lett[i] );
        }
       
    }
        
}
int main()
{
    char lett[12];
    printf("Enter a character: ");
    scanf("%c", lett);
    findChar(lett);
    return 0;
}
