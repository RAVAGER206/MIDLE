#include<iostream>
#include"middle.h"

using namespace std;

void itc_num_print(long a){ // 1
cout << a;
}


int itc_len_num(long long a){ // 2
int g;
g = 0;
if (a == 0)
return 1;
if (a < 0)
a = a * (-1);
while (a>0){
g = g + 1;
a = a / 10;
}
return g;
}


int itc_sum_num(long long a){ // 3
int g, sc;
sc = 0;
if (a < 0)
a = a * (-1);
while (a>0){
g = a % 10;
sc = sc + g;
a = a / 10;
}
return sc;
}


long long itc_multi_num(long long a){ // 4
long long g, pc;
pc = 1;
if (a < 0)
a = a * (-1);
while (a > 0){
g = a % 10;
pc = pc * g;
a = a / 10;
}
return pc;
}


int itc_max_num(long long a){ // 5
int g, h;
g = 0;
if (a < 0)
a = a * (-1);
while (a>0){
h=a%10;
if (h>g)
g = h;
a = a / 10;
}
return g;
}


long long pere(long long i){ // 6
long long g, nch;
nch = 0;
if (i < 0)
i = i * (-1);
while (i > 0){
g = i % 10;
nch = nch * 10 + g;
i = i / 10;
}
return nch;
}


int itc_min_num(long long a){ // 7
int g, h, l;
g = 10;
if (a == 0)
return 0;
if (a < 0)
a = a * (-1);
while (a > 0){
h = a % 10;
if (h < g){
g = h;
}
a = a / 10;
}
return g;
}


int itc_rev_num(long long a){ // 8
int g, rc, l;
rc = 0;
l = a;
if(a == -2147483648 || a == 2147483647){
return 10;
}
if (a == 0)
return 1;
if (a < 0)
a = a * (-1);
while (a > 0){
g = a % 10;
rc = rc * 10 + g;
a = a / 10;
}
if (l < 0)
rc = rc * (-1);
return itc_len_num(rc);
}


int itc_null_count(long long a){ // 9
if (a == 0)
return 1;
int g, h;
h = 0;
if (a < 0)
a = a * (-1);
while (a != 0){
g = a % 10;
if (g==0)
h = h + 1;
g = g * 0;
a = a / 10;
}
return h;
}


bool itc_mirror_num(long long a){ // 10
if (a >= 0){
long long nch, g;
nch = perevorot(a);
if (nch == a * (-1) || nch == a)
return 1;
}
return 0;
}


int itc_mirror_count(long long a){ // 11
int b, i;
b = 0;
if(a > 0){
i = 1;
while (i <= a){
if (itc_mirror_num(i))
b = b + 1;
i = i + 1;
}
}
return b;
}
