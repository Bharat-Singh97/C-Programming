// precedence order  highest order 1.* and / and % 2. + and - 3. =
#include<stdio.h> // In c programming work on 1 and 0 not true and false
#include<math.h>

int main() {
int a = 5*2-2*3; // in this have same order precedence so we use left to right solve 
printf(" %d\n", a); // if you get first bracket then first solve bracket
return 0;
}

/* operator PPrecedence 1. !
2. *,/,%
3. +,-  short hand operator a=a+b = a+=b
4. <,<=,>,>=
5. ==,!=
6. && logical
7. ||
8. =
*/