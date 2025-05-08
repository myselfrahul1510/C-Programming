#include<stdio.h>
int main(int argc, char const *argv[])
{
          FILE *ptr = NULL;
          ptr = fopen("myfile.txt", "a+");
          // char c = fgetc(ptr);
          // printf("The charecter i read was %c \n", c);
          //  c = fgetc(ptr);
          // printf("The charecter i read was %c \n", c);
         
           char str[4];
           fgets(str, 3, ptr);
           printf("The string is %s \n", str);
           
          //  fputc('o',ptr);
          //  fputs("\nthis is rahul\n",ptr);
          
           
           
           fclose(ptr);  
          return 0;
}
