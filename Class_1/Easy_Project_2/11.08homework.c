for (int j = 1; j <= min(n,m); j++)
{
	for (int i = j; i <= m; i++)
	{
		if (A[i][j] != 0)
		{
			break;
		}
	}
	interchange_rowj_and_rowi();
	for (int k = j; k <= m; k++)
	{
		add_row_j_to_row_k_multiplied_by(-A[k][j] / A[j][j]);
	}
}