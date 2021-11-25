long long sum(int* a, int n);
long long sum(int* a, int n)
{
	long long total = 0;
	n = sizeof(*a);
	for (int i = 0; i < sizeof(*a); i++)
	{
		total += a[i];
	}
	return total;
}