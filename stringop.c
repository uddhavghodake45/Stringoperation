/******************************************************************************
this is the program which helps to perform string related operation like 
string copy, string copy and string comparison without using string built in function
*******************************************************************************/
#include<stdio.h>
#include<string.h>
char *copy(char *dest, char *src);
char *compare(char *dest, char *src);
char *length(char *dest, char *src);
int main() {
    //string operations
    char str1[10];
    char str2[10];
    int num,a;
    printf("Enter the first string:\n");
	scanf("%9s",str1);
    //gets(str1);
    printf("Enter the second string:\n");
   // gets(str2);
	scanf("%9s",str2);
	
	printf("Enter the operations you want make \n1) copy \n2) compare \n3) find length\n");
	scanf("%d",&num);
	    switch (num) {
            case 1:
                copy(str1,str2);
                printf("first string:- %s\nsecind string is:- %s",str1,str2);
                break;
            case 2:
                a = (int)compare(str1,str2);
                if(a==1) {
                    printf("string is equal");
                }
                else {
                    printf("not equal");
                }
                break;
            case 3:
                length(str1,str2);        
                break;
            default:
                printf("Out of range");
                break;
        }
	return 0;
}
char *copy(char *dest, char *src) {
    char *start =dest;
     while(*src!='\0') {
         *dest =*src;
         dest++;
         src++;
     }
     src = '\0';
     return 0;
}

char * compare(char *dest, char *src) {
    int i = 0, flag = 0;
    while(*dest != '\0' && *src != '\0') 
    {
        if(*dest != *src) 
        {
            flag = 1;
            break;
        }
        dest++;
        src++;
    }

    if(flag == 0 && *dest == '\0' && *src == '\0')
        return 1;
    else
        return 0;
}

char *length(char *dest, char *src) {
    int x =0,y =0;
    while(*dest!='\0') {
        dest++;
        x++;
    }
    while(*src!='\0') {
        src++;
        y++;
    }
    
    printf("Length of first string is:%d \n", x);
    printf("Length of second string is :%d", y);
}
