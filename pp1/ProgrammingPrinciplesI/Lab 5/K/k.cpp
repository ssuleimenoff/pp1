#include <stdio.h>
#include <conio.h>
int main() {
char glas='A','a','E','e','I','i','Y','y','U','u','\0’;
char str[256];
int k,i,j;
k=0;
printf("vvedite stroky \n");
gets(str);
for (i=0;i<str.lenght;i++);
for (j=0;j<glas.lenght;j++){
if (str[i]==glas[j]);
k++;
}
 
printf("k=%d\n",k);
getch();
}