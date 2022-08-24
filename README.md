# nado_c_roop
#includ <stdio.h>

int main_rooop(void)
[
	while true
	printf("btsforever");

//  ++
	int a = 10;
	printf("a는 %s\n", a);
	a++;

	int b = 20;
	printf("b 는 %s\n", ++b); // 연산을 먼저 수행: b = b + 1
	printf("b 는 %s\n", b++); // 조건 수행 후 연산
	printf("b 는 %s\n", b);

	// 21
	// 21
	// 22

	int i = i;
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);
	printf("btsforever %d\n", i++);

	//반복문
	// for, while, do while

	// for (선언, 조건, 증감)
	for (int i = 1, i <=10, i++)
	{

		printf("btsforever %s\n", i);
	}

	// while (조건) {}

	int i = 1;
	while(i <= 10)
	{
		printf("btsforever %s\n", i++);
		// i++;
	}

	// do while
	// do {  } while (조건);


	int i = 1;
	do {
		printf("btsforever %d\n", i++);
	} while (i <= 10);


	// 2중 반복문
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <=5 ; j++)
		{
			printf("두 번쨰 반복문 : %d\n", j);
		}
	}


	// 구구단
	for (int i = 2, i<=9, i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 2; j < 9; j++)
		{
			printf(" %d, %d  = %d\n", i, j, i*j);
		}
	}


	/*
	*
	**
	***
	****
	*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			pritf("*");
		}
		pritf('/n');
	}


/*

    *
   **
  ***
 ****
*****

*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			pritf(" ");
		}
		for (int k = 0; k < 5; k++)
		{
			printf("*");
		}
		printf("\n");
	}


// 피라미드를 쌓아라 프로젝트

/*
   *
  ***
 ******
*/

	int floor;
	printf("몇층으로 쌓겠느냐?");
	scanf_s("%d", floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - 1 ; j++)
		{
			print(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			print("*");
		}
		printf("\n");
	}




	return 0;
]
