#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp_in,*fp_out;
    int ch;
    fp_in=fopen("capture.PNG","rb");
    fp_out=fopen("cap.PNG","wb");
    if(fp_in==NULL){
        perror("file opening failed");
        return EXIT_FAILURE;
    }
    while(1)
    {
        ch=fgetc(fp_in);
        if(ch==EOF)break;

    fputc(ch,fp_out);
}
fseek(fp_in,0,SEEK_END);
printf("Total bytes of the picture is %ld kilobytes\n ",ftell(fp_in)/1024);

fclose(fp_in);
fclose(fp_out);
return 0;
}
