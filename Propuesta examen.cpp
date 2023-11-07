#include <iostream>
int main() {
printf ("Triples pitagoricos\n");
for  (int a=1; a<=20; a++) {
for (int b=1; b<=20; b++) {
double c =sqrt (a* a + b * b);
if (c==(int) c) {
int c_int = (int)c;
if ((a == 3 && b == 4 && c_int == 5) ||
    (a == 6 && b == 8 && c_int == 10) ||
    (a == 5 && b == 12 && c_int == 13) ||
    (a == 8 && b == 15 && c_int == 17))  {
    printf ("%d - %d - %d\n", a, b, c_int);
}
}
}
}
return 0; }