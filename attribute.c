#include <stdio.h>
#include <stdarg.h>

void print(const char *format, ...) __attribute__((format(printf, 1, 2)));
void print(const char *format, ...){
	va_list ap;
	char msg[1000];
	va_start(ap, format);

	vsnprintf(msg, sizeof(msg), format, ap);
	printf("%s\n", msg);

	va_end(ap);

}

int main(){
	print("%d",5);
	print("%d %d %d",1,2,3 );
	print("O valor é %d %s %d",1, __FUNCTION__, __LINE__ );
	return 0;
}
