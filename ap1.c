#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[-------LeeSeungHun 2023041045 --------]\n");
int list[5];
int *plist[5] = {NULL,}; //포인터배열 변수 선언
plist[0] = (int *)malloc(sizeof(int)); //포인터배열 메모리 동적 할당
list[0] = 1;
list[1] = 100;
*plist[0] = 200;
printf("list[0] = %d\n", list[0]); //list[0]의 값 출력
printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력
printf("list = %p\n", list); //list는 배열이니 출력하면 주소 출력
printf("&list = %p\n", &list); //list 주소 출력
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]); //list[1]의 값 출력
printf("&list[1] = %p\n", &list[1]); //list[1]의 주소 출력
printf("*(list+1) = %d\n", *(list + 1)); //list에 +1 해준값의 포인터이니 list[1] 주소에 있는 값 출력
printf("list+1 = %p\n", list+1); //list에 +1 해준값 출력이니 list[1]의 주소 출력
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]의 값 출력
printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소 출력
printf("&plist = %p\n", &plist); //plist의 주소 출력
printf("plist = %p\n", plist); //plist는 배열이니 출력하면 주소 출력
printf("plist[0] = %p\n", plist[0]); //동적할당된 배열 plist[0] 출력
printf("plist[1] = %p\n", plist[1]); //동적할당된 배열 plist[1] 출력
printf("plist[2] = %p\n", plist[2]); //동적할당된 배열 plist[2] 출력
printf("plist[3] = %p\n", plist[3]); //동적할당된 배열 plist[3] 출력
printf("plist[4] = %p\n", plist[4]); //동적할당된 배열 plist[4] 출력
free(plist[0]); //할당된 동적배열 해제
}
//commit 2nd