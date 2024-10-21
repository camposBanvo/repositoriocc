#include<unistd.h>

int main(){
	
char *p;
char a = 'c';

p = &a;
write(1,p,1); 

return 0;
}
