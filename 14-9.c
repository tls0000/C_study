#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[])
{
	int i;
	char str[200];
	FILE *rfp, *wfp;

	rfp=fopen(argv[1],"r");
	wfp=fopen(argv[2],"w");

	for(;;)
	{
		fgets(str,200,rfp);
		
		if(feof(rfp))														break;
		
		fputs(str, wfp);
				}
	fclose(rfp);
        fclose(wfp);
}
