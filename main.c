union union_endian{
char c;
short s;
};

int main()
{
	union union_endian en;
	en.s = 0x1234;
	
	if(0x12 == en.c)
		printf("big endian\n");
	else if (0x34 == en.c)
		printf("little endian\n");
	else
		printf("error raised\n");

	return 1;
}
