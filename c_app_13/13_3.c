// ���ڿ��� �Ϻκ� �߶��ִ� �Լ� �����
// (void cutStr(char* origin, int start, int cnt, char* result)
void cutStr(char* origin, int start, int cnt, char* result)
{
	int copycount = 0;
	origin += start;
	while (*origin)
	{
		*result++ = *origin++;
		copycount++;
		if (copycount >= cnt)
			break;
	}
	*result = '\0';
}
void main3()
{
	char str[] = "qwertyuiopasdfghjkl";
	char str2[100];
	cutStr(str, 4, 10, str2);
	puts(str2);
}