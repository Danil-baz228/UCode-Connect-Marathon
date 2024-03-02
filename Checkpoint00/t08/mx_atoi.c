#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(int c);

int mx_atoi(const char *str);
int mx_atoi(const char *str){
	char minus = 0;
	char start = 0;
	int a = -1;
	int b = -1;
	int dec = 1;
	for(int i = 0; str[i] != '\0'; i++){
	    if(!start){
	        if(str[i] == '-'){
	            minus = 1;
	            start = 1;
	        }
	        else if(mx_isdigit(str[i])){
	            a = i;
	            b = i;
	            start = 1;
	            minus = 0;
	        }
	        else if(!mx_isspace(str[i]))
	            return 0;
	    }
	    else{
	        if(mx_isdigit(str[i])){
	            if(a == -1)
	                a = i;
                b = i;
                dec *= 10;
	        }
	        else
	            break;
	    }
	}
	if(a == -1 && b == -1)
	    return 0;
	int num = 0;
	if(minus)
	    dec /= 10;
	for(int i = a; i <= b; i++){
	    num += dec * (str[i] - '0');
	    dec /= 10;
	}
	if(minus == 1)
	    num *= -1;
    return num;
}

bool mx_isdigit(int c) {
	return c >= '0' && c <= '9';
}

bool mx_isspace(int c){
	return (c >= '\t' && c <= '\r') || c == ' ';
}


