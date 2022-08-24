 #include <stadio.h>

int main_printfscanf(void)
[

	const int YEAR = 2000;
	printf(("year : %s)\n", YEAR); //상수

	// printf
	// 연산
	int add = 3 + 7 // 10
	printf("3 + 7 %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	
	// scanf
	// 키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요 : " );
	scanf-s("%d, &input");
	printf("입력값 : %s\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d,%d,%d", &one, &two, &three):
	printf("첫번쨰 값 : %s\n", one);
	printf("두번쨰 값 : %s\n", two);
	printf("세번쨰 값 : %s\n", three);

	// 문자, 문자열
	char c = 'A';
	printf("%c\n", c);

	char str [250];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	// 프로젝트
	// 결찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름 / 나이 / 키 / 몸무제 / 범죄명
	char name[250];
	printf("%s" , name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weghit;
	printf("몸무게는 몇 kg 이에요?");
	scanf_s("%f", &weghit);

	double height;
	printf("키는 몇cm에요? ");
	scanf_s("%lf", height);

	char whst[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조사내용 출력
	printf("\n\n---범죄자 정보 ---n\n\n");
	printf(" 이름     : %s\n", name);
	printf(" 나이     : %d\n", age);
	printf(" 몸무게   : %f\n", weghit);
	printf(" 키       :%lf\n", height);
	printf("범죄      :%d\n", what);

	return 0;
	]

