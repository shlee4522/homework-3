#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[-------LeeSeungHun 2023041045 --------]\n");
int list[5];
int *plist[5]; //포인터배열 plist 선언
list[0] = 10;
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); //포인터배열 plist 메모리 동적 할당
printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
printf("list \t\t= %p\n", list); //배열 list의 주소 출력
printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
printf("list + 0 \t= %p\n", list+0); //배열 list에 +0 해준 값의 주소 출력 == &list[0]
printf("list + 1 \t= %p\n", list+1); //배열 list에 +1 해준 값의 주소 출력 == &list[1]
printf("list + 2 \t= %p\n", list+2); //배열 list에 +2 해준 값의 주소 출력 == &list[2]
printf("list + 3 \t= %p\n", list+3); //배열 list에 +3 해준 값의 주소 출력 == &list[3]
printf("list + 4 \t= %p\n", list+4); //배열 list에 +4 해준 값의 주소 출력 == &list[4]
printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력
free(plist[0]); //할당된 동적할당 해제 
}