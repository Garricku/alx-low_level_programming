int is_palindrome(char *s)
{
	int start, end;

	if (start >= end)
	{
		return 1;
	}
	if (s[start] != s[end])
	{
		return 0;
	}
		return (is_palindrome(s, start + 1, end - 1));
}
