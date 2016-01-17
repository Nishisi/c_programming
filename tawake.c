#include<stdio.h> 
#include<string.h>
#include<time.h>

int sleep(unsigned long x){
	clock_t c1 = clock(),c2;

	do {
		if ((c2 = clock()) == (clock_t)-1){
			return 0;
		} 
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}

int main(void){
	char s[100] = "たわけ！！未熟ものが！！精進せい！！      ";

	int string_len = strlen(s);

	for (int i = 0;i < string_len;i++){
		printf("%c",s[i]);
		sleep(50);
		fflush(stdout);
	}
	puts("");

	return 0;
}