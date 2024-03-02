void mx_str_reverse(char *s);
void mx_str_reverse(char *s){
	int l = 0;
	for(int i = 0; s[i] != '\0'; i++)
		l++;
	for(int i = 0; i < l/2; i++){
		char t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
