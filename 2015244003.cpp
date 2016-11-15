// 2015244003.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#define N 50; // 최대 역 이름 길이

// << 역 정보 입력 구간 >> (헤더 파일화 할 것임)

typedef struct station { // 지하철 역 정보
	char name[50];
	int time[2][24][20];

	station *w; // 지하철 환승(위)
	station *a; // 지하철 환승(왼쪽)
	station *d; // 지하철 환승(오른쪽)
	station *s; // 지하철 환승(아래)
	train *tr; // 기차로 환승
	bus *bu; // 버스로 환승
};

typedef struct train { // 기차 역 정보
	char name[50];
	int time[2][24];

	station *st; // 지하철로 환승
	bus *bu; // 버스로 환승
};

typedef struct bus { // 버스 역 정보
	char name[50];
	int time[2][24];

	station *st; // 지하철로 환승
	train *tr; // 버스로 환승
};

station a[6][25][30]; // a[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][호선][역]
train b[6][10][20]; // b[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][철도(경부선, 경부고속선, 광주선 등)][역]
bus c[6][999][50]; // c[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][버스번호][역]

char s_via[50][50]; // 지하철 경유역[
char t_via[50][50];
char b_via[50][50];



// << 1차 분해자 입력구간 >>

// 출발역과 도착역을 입력하면 환승 구간별로 분해해, 총 합 걸리는 소요시간을 반환 할 것.

int firstDecomposer(char start[50], char end[50]) { // 최초 분해자 (출발지(a) 와 도착지(b) 를 입력받아서 교통수단 별로 분해 후 소요시간 반환)
	int s_check; // 출발지
	char s_string[25];
	int s_i;
	int s_i2;
	int s_i3;

	int e_check; // 도착지
	char e_string[25];
	int e_i;
	int e_i2;
	int e_i3;

	for (int i = 0; i < 6; i++) { // 지하철
		for (int i2 = 0; i2 < 25; i2++) {
			for (int i3 = 0; i3 < 30; i3++) {
				if (strcmp(start, a[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 1;
				}

				else if (strcmp(end, a[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 1;
				}
			}
		}
	}

	for (int i = 0; i < 6; i++) { // 철도
		for (int i2 = 0; i < 10; i2++) {
			for (int i3 = 0; i < 20; i3++) {
				if (strcmp(start, b[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 2;
				}

				else if (strcmp(end, b[i][i2][i3].name)) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 2;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) { // 버스
		for (int i2 = 0; i2 < 999; i2++) {
			for (int i3 = 0; i3 < 50; i3++) {
				if (strcmp(start, b[i][i2][i3].name)) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 3;
				}

				else if (strcmp(end, b[i][i2][i3].name)) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 3;
				}
			}
		}
	} // 모든 역의 이름을 대조 한 뒤, 이름이 같은 역의 배열 번호와 교통수단을 저장. (1 = 지하철, 2 = 철도, 3 = 버스)
	

	switch (s_i) {
	case 0: strcpy(s_string, "서울역"); break;
	case 1: strcpy(s_string, "부산역"); break;
	case 2: strcpy(s_string, "대구역"); break;
	case 3: strcpy(s_string, "광주역"); break;
	case 4: strcpy(s_string, "대전역"); break;
	}

	switch (e_i) {
	case 0: strcpy(e_string, "서울역"); break;
	case 1: strcpy(e_string, "부산역"); break;
	case 2: strcpy(e_string, "대구역"); break;
	case 3: strcpy(e_string, "광주역"); break;
	case 4: strcpy(e_string, "대전역"); break;
	}

	if (s_check == e_check) { // 경우에 따라 나눈다 (교통 수단이 같을 경우)
		switch (s_check) {
		case 1: if (s_i != e_i) {
			switch (s_i) {
			case 0: 
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);
					break;
				}; break;
			case 1: 
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);
					break;
				}; break;
			case 2: 
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);
					break;
				}; break;
			case 3: 
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);
					break;
				}; break;
			case 4: 
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);
					break;
				}; break;
			}
		}
				else {
					secondDecomposerStation(start, end);
				}; break;

		case 2: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string); break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string); break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break; 
				default: secondDecomposerTrain(s_string, e_string); break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string); break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string); break;
				}; break;
			}
		}
				else {
					secondDecomposerTrain(start, end);
				}; break;

		case 3: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default: 
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);
					break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);
					break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);
					break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);
					break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);
					break;
				}; break;
			}
		}
				else {
					secondDecomposerBus(start, end);
				}; break;
		}
	}

	else {
		switch (s_check) {
		case 1:
			switch(e_check) {
			case 1: printf("Error Number : 0001\n"); break;
			case 2: 
			case 3:
			}
		case 2:
			switch (e_check) {
			case 1:
			case 2: printf("Error Number : 0001\n"); break;
			case 3:
			}
		case 3:
			switch (e_check) {
			case 1:
			case 2:
			case 3: printf("Error Number : 0001\n"); break;
			}
		}
	}
}
 


// << 2차 분해자 입력구간 >>

// 2차 분해자(secondDecomposer~~) 는 출발지와 도착지를 입력 받아서 ~~ 에 서술된 교통수단의 환승 역 별로 분해 후, 소요시간 반환.

// 중복 사용을 방지하기 위하여 전역 변수 사용시, 변수의 앞에 자신의 이름 이니셜을 붙일 것.
// 출발지에서 도착지로 향하는 과정에 경유하게 되는 역의 이름을 s_via (지하철), t_via (기차), b_via (버스) 에 순서대로 삽입 할 것.

int secondDecomposerStation(char a[50], char b[50]) { // 안은규 (지하철)

}

int secondDecomposerTrain(char a[50], char b[50]) { // 김세훈 (철도)

}

int secondDecomposerBus(char a[50], char b[50]) { // 박동규 (버스)

}


// << 메인 함수 입력구간 >>

int main()
{

    return 0;
}

