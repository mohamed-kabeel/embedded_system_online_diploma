#include <stdio.h>
#include <ctype.h>
int main(){
    char ch ;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    char c = tolower(ch);
    if(c == 'a'||c =='e'||c =='i'||c =='u'||c =='o')
        printf("%c is vowel",ch);
    else
        printf("%c is consonant",ch);
    return 0;

}
