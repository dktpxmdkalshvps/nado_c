#includ<stadio.h>
#includ<time.h>

int main(void)
[


	//  버스를 탄다고 가정
	int age = 15;
	if (age >= 20)
	// if (조건) {} else {...}
	{
		printf("일반인 입니다/n");
	}
	else
		printf("학생입니다/n")


	// 초등학생 / 중학생 / 고등학생
	// if / else if / else
	int age = 8;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다/n")
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다/n")
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다/n");
	}
	else
	{
		printf("학생이 아닌가/n")
	}


	// break / continue
	// 1번 부터 30번 까지 있는 반에서 1번 부터 5번 까지 조별발표를 합니다
	for (int i = 0; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n")
			break
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i)
	}


	// 1번 부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번 부터 10번 까지 조별 발표를 하세요
	for (int i = 0; i < 30; i++)
	{
		if (i >=6 && i<= 10)
		{
			if (i = 7)
			{
				printf("%d번 학생은 결석입니다", i);
				continue
			}
			printf("%d번 학생은 조별과제 준비를 하세요", i);
		}
	}

	// &&  ||
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;

	if ( a==b && c==d)
	{
		printf("a와 b, 혹은 c 와 d의 값이 같습니다\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}

	if ( a==b || c==d)
	{
		printf("a와 b, 혹은 c 와 d의 값이 같습니다\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}

	// 가위 바위 보
	stand(time(NULL));
	int i = rand() %3; // 0 - 2 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}


	stand(time(NULL));
	int i = rand() %3; // 0 - 2 반환
	switch (값)
	{
	case : 가위
	case : 바위
	case : 보
	}

	switch (i)
	{
	case 0 : printf("가위\n"); break;
	case 1 : printf("바위\n"); break;
	case 2 : printf("보\n"); break;
	default : printf("몰라요\n"); 
	}


	int age = 8;
	switch (age)
	{
	case 8 : 
	case 9 : 
	case 10 : 
	case 11 : 
	case 12 : 
	case 13 : printf("초등학생입니다/n"); break;
	case 14 : 
	case 15 : 
	case 16 : printf("중학생입니다/n"); break;
	case 17 : 
	case 18 : 
	case 19 : printf("고등학생입니다/n"); break;
	default : printf("학생이 아닌가 봐요\n"); break;
	}

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다/n")
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다/n")
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다/n");
	}
	else
	{
		printf("학생이 아닌가/n")
	}


	// Up and Down 프로젝트
	stand(time(NULL));
	int num = rand() % 100 + 1 // 1 - 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회 %d번\n", chance);
		printf("숫자를 입력해주세요");
		scanf_s(%d, &answer);

		if (answer > num)
		{
			printf("Down \n\n");
		}
		else if (answer < num)
		{
			printf("Up\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다\n\n");
			break;
		}
		else
		{
			printf("알수없는 오류가 발생했어요\n\n");
		}


		if (chance == 0)
		{
			printf("TTANG\n\n");
		}

	}


	return 0;

]
