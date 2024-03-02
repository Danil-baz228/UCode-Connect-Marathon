#include <unistd.h>

void mx_printint(int n);

void mx_printint(int n) {
    	if(n < 0){
		char c = '-';
                write(1, &c, 1);
        	n *= -1;
    	}
    	if(n < 10){
		char c = (char)('0' + n);
		write(1, &c, 1);
	}
    	else{
        	int l = 0;
        	int t = n;
        	while(t){
            		t /= 10;
            		l++;
        	}
        	int d = 1;
        	for(int i = 1; i < l; i++)
            	d *= 10;		
		char c = (char)('0' + (( n - n % d) / d));
                write(1, &c, 1);
        	mx_printint(n % d);
    	}    
}

