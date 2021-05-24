	{
		numlen = 1;
	}
	if (num < 0)
	{
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}
