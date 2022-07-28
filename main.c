#include<stdio.h>
#include<string.h>
#include"TIFFToRaw.h"
#include"RawToICO.h"
int main()
{
	FILE *fp2;
	char str[67]="sample.tiff";
	fp2 = fopen(str,"rb");
	ReadtoRAW(fp2);
	fclose(fp2);
	rawtoico();
	return 0;
}
