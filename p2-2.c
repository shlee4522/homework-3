#include <stdio.h> 
void print_one(int *ptr, int rows);
int main()
{
printf("[-------LeeSeungHun 2023041045 --------]\n");
int one[] = {0, 1, 2, 3, 4};
printf("one = %p\n", one); //배열 one의 주소 출력
printf("&one = %p\n", &one); //&one이므로 one의 주소 출력
printf("&one[0] = %p\n", &one[0]); //배열 one의 주소는 one[0]과 같기에 배열 one과 같은 주소 출력
printf("\n");
printf("------------------------------------\n");
printf(" print_one(&one[0], 5) \n"); //
printf("------------------------------------\n");
print_one(&one[0], 5); //print_one 함수에 one배열의 주소와 배열 크기를 전달하여 one[0]부터 one[4]까지의 각 주소와 안의 값을 출력
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5); //one이나 one[0]의 주소나 같은 주소이기에 14행과 같은 결과값이 출력됨
return 0;
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));
printf("\n");
}