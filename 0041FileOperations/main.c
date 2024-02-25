#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void WriteInFile();
void ReadFile();
void PutTextInBuffer();
void AppendToFile();

void ReadIntInFile();

void ReadFileForAsHex();

int main() {
	
	
	struct agent {
		char actor[32];
		int year;
		char title[32];
	};
	struct agent bond2;
	struct agent bond3;
	FILE* jbdb;

	/* open the file for appending */
	jbdb = fopen("bond.db", "a");
	if (!jbdb)
	{
		puts("SPECTRE wins!");
		exit(1);
	}

	/* assign data */
	strcpy(bond2.actor, "Roger Moore");
	bond2.year = 1973;
	strcpy(bond2.title, "Live and Let Die");
	fwrite(&bond2, sizeof(struct agent), 1, jbdb);

	strcpy(bond3.actor, "Pierce Brosnan");
	bond3.year = 1995;
	strcpy(bond3.title, "GoldenEye");
	fwrite(&bond3, sizeof(struct agent), 1, jbdb);

	fclose(jbdb);
	puts("Records written");
	//ReadFileForAsHex();
	//ReadIntInFile();
	//AppendToFile();
	//PutTextInBuffer();
	//ReadFile();
	//WriteInFile();
	return 0;

}

void ReadFileForAsHex()
{
	FILE* fh;
	char name[8] = { "hex.txt\0" };
	char c, x;
	WriteInFile(name);
	ReadFile(name);
	printf("\n");
	x = 0;

	fh = fopen(name, "r");
	if (!fh)
	{
		puts("File error!");
		exit(1);
	}

	while (!feof(fh)) {

		c = fgetc(fh);
		if (c == EOF)
			break;
		printf("%02X ", c);
		x++;
		if (!(x % 16))
			putchar('\n');
	}
	fclose(name);
}

void ReadIntInFile()
{
	FILE* handle;
	int highscore[5];
	int x;

	handle = fopen("scores.txt", "r");
	if (!handle)
	{
		puts("File error!");
		exit(1);
	}
	fread(highscore, sizeof(int), 5, handle);
	fclose(handle);
	for (x = 0; x < 5; x++)
		printf("High score #%d: %d\n", x + 1, highscore[x]);
}

void AppendToFile()
{
	FILE* fh;
	fh = fopen("hello.txt", "a");
	if (fh == NULL) {
		printf("something wert wrong!");
		exit(0);
	}

	fprintf(fh, "this text was added later.");
	puts("text appended");

	fclose(fh);
	ReadFile("hello.txt");
}

void PutTextInBuffer()
{

	FILE* fh;
	char buffer[5];

	fh = fopen("hello.txt", "r");
	if (fh == NULL) {
		printf("something wert wrong!");
		exit(0);
	}

	while (fgets(buffer, 64, fh))
		printf("%s\n", buffer);
	fclose(fh);
}

void ReadFile(char name[])
{
	FILE* fh;
	int ch;

	fh = fopen(name, "r");
	if (fh == NULL) {
		printf("something went wrong!");
		exit(1);
	}

	while (!feof(fh)) {
		ch = fgetc(fh);
		putchar(ch);
	}
	fclose(fh);
}

void WriteInFile(char name[])
{
	FILE* fh;

	fh = fopen(name, "w");
	if (fh == NULL) {
		printf("Something went wrong!");
		exit(1);
	}
	fprintf(fh, "this is my test file.");

	fclose(fh);
	puts("file written");
}
