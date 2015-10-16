#include <stdio.h>

#define MyVAL 2
#if MyVAL != 2
#error MyVAL must be defined to 2
#endif

/* 
 *  * The # and ## preprocessor operators are available in ANSI C.
 *   * The # operator causes a replacement text token to be converted to a string surrounded by double quotes as explained before
 *    */
#define    HELLO(x)    printf("Hello, "  #x  "\n");

/* 
 *  * The ## operator concatenates two tokens.  Consider the following macro definition 
 *   */
#define debug(fmt, args...) do { printf(fmt, ## args); } while (0)

#define    SHOWFUNC(x)    Use ## Func ## x

#ifdef __BORLANDC__
#pragma message You are compiling using Borland C++ version __BORLANDC__.
#else
#pragma message ("This compiler is not Borland C++")
#endif

#if MyVAL > 0
#pragma message("Example of the pragma message")
#pragma message("time:" __TIME__)
#pragma message("time:" __TIMESTAMP__)
#pragma message("file:" __FILE__)
#endif

int main(int argc, char *argv[]){
	printf("Executando [%s]\n",__FUNCTION__);
	HELLO("Marcos, Dalte");
	char *SHOWFUNC(aux) = "Marcos Dalte";
	printf("SHOWFUNC(aux) %s\n",SHOWFUNC(aux));

	char *SHOWFUNC(aux2) = "Rosendo";
	printf("SHOWFUNC(aux2) %s\n",SHOWFUNC(aux2));
	debug("Running %s [%d] %s %s \n",__FUNCTION__,__LINE__,__FUNCTION__,__TIME__);

	return 0;
}

