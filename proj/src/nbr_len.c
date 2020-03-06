int 	nbr_len(int nbr)
{
	int 	len = 0;
	if (nbr == 0)
		return 1;
	while (nbr) {
		nbr /= 10;
		len++;
	}
	return len;
}
