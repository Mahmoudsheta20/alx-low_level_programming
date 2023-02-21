#include <stdio.h>
#include <unistd.h>
/*write code print -putchar*/
int main(void)
{
write(1, "_putchar", 9);
write(1, "\n", 1);
return (0);
}
