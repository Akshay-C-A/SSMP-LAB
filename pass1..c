#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *f1,*f2,*output,*symtab;
    int lc,sa,op1,o ,len;
    char m1[20],la[20],op[20],otp[20];

    f1=fopen("input.txt","r");
    f2=fopen("optab.txt","r");
    output=fopen("output.txt","w");
    symtab=fopen("symtab.txt","w");

    fscanf(f1,"%s\t%s\t%d",la,m1,&op1);

    if(strcmp(m1,"START")==0)
    {
      sa=op1;
        lc=sa;
        fprintf(output,"\t%s\t%s\t%d\n",la,m1,op1);
    }
    else
    {
        lc=0;
    }
    while(!feof(f1))
    {
    fscanf(f1,"%s\t%s\t%d",la,m1,&op1);
 
    if(strcmp(la,"**")==0)
    {
    lc=lc+3;
    fprintf(output,"%d\t%s\t%s\t%d\n",lc,la,m1,op1);
    }
}