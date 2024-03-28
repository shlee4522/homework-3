#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("[-------LeeSeungHun 2023041045 --------]\n");
for(i=0; i < MAX_SIZE; i++)
input[i] = i;
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input 배열의 주소 출력
answer = sum1(input, MAX_SIZE); /*sum1의 함수에 input 배열과 max_size 100을 입력하여 함수 안의 list 배열이 input 배열의 참조자가 되므로 input 배열의 주소 출력,
                                    함수 안에서의 list배열의 주소값 출력 ,answer에 input[0]~input[99]까지의 값의 합을 넣음*/
printf("The sum is: %f\n\n", answer); //sum1의 함수 안에서 answer값의 합은 input배열의 모든 값을 더한 값으로 출력
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input 배열의 주소 출력
answer = sum2(input, MAX_SIZE); /*sum2의 함수에 input 배열과 max_size 100을 입력하여 함수 안의 list 배열이 input 배열의 참조자가 되므로 input 배열의 주소 출력,
                                함수 안에서의 list 배열의 주소값 출력, 18행에서와의 같은 이유로 answer값이 18행의 answer값과 같음*/
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n"); //sum1의 함수 안에서 answer값과 sum2의 함수 안에서 answer값이 같기에, 똑같이 input배열의 모든 값을 더한 값으로 출력
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input 배열의 주소 출력
answer = sum3(MAX_SIZE, input); /*sum3의 함수에 input 배열과 max_size 100을 입력하여 함수 안의 list 배열이 input 배열의 참조자가 되므로 input 배열의 주소 출력,
                                함수 안에서의 list는 포인터 배열이기에 앞선 리스트와 다른 새로운 메모리를 할당받아 새로운 주소 출력, 18행에서와 같은 이유로 answer값이 나옴*/
printf("The sum is: %f\n\n", answer); //sum2와 같은 이유로 같은 answer값이 출력
}
float sum1(float list[], int n) 
{
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    
    int i;
    float tempsum = 0;
    for(i=0; i<n; i++)
        tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n) {
printf("list\t= %p\n", list);
printf("&list\t= %p\n\n", &list);
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list) {
printf("list\t= %p\n", list);
printf("&list\t= %p\n\n", &list);
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum;
}