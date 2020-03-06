char *mx_strncpy(char *dst, const char *src, int len) {
	int i = 0;

	while (src[i] && len) {
		dst[i] = src[i];
		i++;
		len--;
	}
	if (len != 0) {
		while (len--) {
			dst[i++] = '\0';
		}
	}
	return dst;
}
