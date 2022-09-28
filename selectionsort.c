#include<stdio.h>
#include<string.h>

/*
* receive a vector of words and the quantity of word in the vector
* sort the vector lexicographically with SelectionSort  
*/
void ordenaStrings(char *str, int quantidade)
{

    char temp[quantidade];
    int i = 0, j = 0;

    for(i = 0; i <= quantidade; i++)
        for(j = i+1; j <= quantidade; j++)
        {
            if(strcmp(str[i],str[j]))
            {
                strcpy(*str[i], temp);
                strcpy(*str[j],*str[i]);
                strcpy( temp, *str[j]);
            }
        }
}

int main()
{

    int i = 0, quantidade = 0;    //
    
    puts("How many words?: ");
    scanf("%d", &quantidade);    
    
    char str[quantidade][20];

    printf("Enter with words with the maximum of 20 letters and click ENTER at end of each word : ");
    for(i = 0; i < quantidade; i++)//the loop will work until the end os the quantity entered
        scanf("%s", str[i] );//it will keep everything in str[i] until enter gets clicked

    ordenaStrings(str, quantidade);

    printf("\n\nPalavras ordenadas:\n");
    for(i = 0; i < quantidade; i++)
        puts(str[i]);

    return 0;
}
