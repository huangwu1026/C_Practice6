//写代码可以在整形有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1
include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[], int size, int toFind){
	int left = 0, right = size - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){
			right = mid - 1;//-1是为了排除mid位置的元素
		}
		else if (toFind >arr[mid]){
			left = mid + 1;//+1是为了排除mid位置的元素
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int result = BinarySearch(arr, sizeof(arr) / sizeof(arr[0]), 8);
	printf("the result is %d\n", result);
	system("pause");
	return 0;
}
//编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示"登陆成功"，密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i = 0;
	char password[1024] = { 0 };
	//创建字符数组用于保存用户输入的密码
	for (i = 0; i < 3; i++){
		printf("请输入密码:");
		scanf("%s", password);
		//比较两个字符串是否相等
		if (strcmp(password, "1314521") == 0){
			printf("登陆成功\n");
			break;
		}
		else{
			printf("密码错误 请重试\n");
		}
	}
	if (i == 3){
		printf("登陆失败\n");
	}
	system("pause");
	return 0;
}
//编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果是大写字符就输出对应的小写字符，如果是数字不输出
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch;
	printf("请输入一个字符:\n");
	while ((ch = getchar()) != EOF){
		if (ch >= 'a'&&ch <= 'z'){
			putchar(ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z'){
			putchar(ch + 32);
		}
		else if (ch >= '0'&&ch <= '9'){
			;
		}
		else{
			;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
