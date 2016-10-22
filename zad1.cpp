#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;
void main ( )
{ 
setlocale(LC_ALL, "RUS"); 
char *s1 = new char[10];
char *s2 = new char[10];
char *s3 = new char[5];
//char *R = new char[10];
int kol = 0;
cout << "Введите 1 строку: ";
scanf("%s", s1);
cout << "Введите 2 строку: ";
scanf("%s", s2);
cout << "Введите 3 строку: ";
scanf("%s", s3);
strcat(s1, s2);
int n = 0;
char *R = strstr(s1, s3);
while (R != NULL) {
n = R-s1;
//cout << n << ' ';
R = strstr(s1+n+1, s3);
kol++;
}
cout << "Количество вхождений равно: " << kol << endl;
system("pause");
}