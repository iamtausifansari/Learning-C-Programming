    #include<stdio.h>
    int main()
    {
        char str1[50],str2[25];

        printf("Enter Firstname:");
        scanf("%s",&str1);
        printf("Enter Lastname:");
        scanf("%s",&str2);

        // printf("%s %s",str1, str2);
        int i=0;
        while(str1[i]!='\0')
        {
        i++;
        }

        for(int j=0;str2[j]!='\0';j++)
        {
            str1[i]=str2[j];
            i++;
        }

        str1[i]='\0';
        printf("%s",str1);
    }