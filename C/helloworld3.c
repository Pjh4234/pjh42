#include<stdio.h>


void my_strcat(char *pstr1,char *pstr2,char *pstr3);

int main(void)
{
    char str1[6] = "apple";
    char str2[4]  = "jam";
    char str3[10];

    

    my_strcat(str1,str2,str3);
    return 0;

}
void my_strcat(char *pstr1,char *pstr2,char *pstr3){
    char ch='\0';
    int i=0;
    int j=0;    
    while(1){

        pstr3[i]=pstr1[i];
        if(pstr1[i]=='\0')
            break;
       else i++;
    }
    while(1){
        pstr3[i]=pstr2[j];
        
        if(pstr2[j]=='\0')
        break;
        else j++;
        i++;      
    }
    printf("%d\n",i+j);
    pstr3[9]='\0';
    printf("%s\n",pstr3);
    }
  
