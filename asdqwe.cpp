
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50; // 최대 역 이름 길이

// << 역 정보 입력 구간 >> (헤더 파일화 할 것임)
typedef struct station;
typedef struct train;
typedef struct bus;

typedef struct station { // 지하철 역 정보
	char name[50];
	int time[2];

	struct station *w; // 지하철 환승 1
	struct station *a; // 지하철 환승 2
	struct station *s; // 지하철 환승 3
	struct station *d; // 지하철 환승 4
	struct train *tr; // 기차로 환승
	struct bus *bu; // 버스로 환승
}station;

typedef struct train { // 기차 역 정보
	char name[50];
	int time[2][24];

	struct station *st; // 지하철로 환승
	struct bus *bu; // 버스로 환승
}train;

typedef struct bus { // 버스 역 정보
	char name[50];
	int time[2][24];

	struct station *st; // 지하철로 환승
	struct train *tr; // 버스로 환승
}bus;

station a[6][25][80] = 
{
	{ // 서울
		{ // 1호선 (인천 ~ 소요산)
			{ "인천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동인천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "제물포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "주안", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "간석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "백운", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "소사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "역곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "온수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오류동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "개봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구일", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신도림", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영등포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신길", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대방", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노량진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남영", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서울역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종각", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종로3가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종로5가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동묘앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신설동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "제기동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청량리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회기", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "외대앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신이문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광운대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "녹천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "창동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "방학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도봉산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망월사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회룡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "의정부", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가능", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "녹양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지행", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동두천중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "보산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동두천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "소요산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 1호선 (구로 ~ 신창)
			{ "구로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가산디지털단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "독산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금천구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "관악", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "군포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "당정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "의왕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성균관대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화서", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "세류", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "병점", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "세마", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오산대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "진위", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송탄", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서정리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지제", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "평택", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성환", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "직산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "두정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "천안", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "봉명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "쌍용", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "탕정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "배방", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "온양온천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신창", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서동탄", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2호선
			{ "신도림", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "문래", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영등포구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "당산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "합정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "홍대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "충정로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "을지로입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "을지로3가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "을지로4가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대문역사문화공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상왕십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "왕십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한양대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "뚝섬", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "건대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구의", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강변", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "잠실나루", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "잠실", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종합운동장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "역삼", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "교대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서초", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "방배", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "낙성대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서울대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "봉천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신림", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신대방", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구로디지털단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대림", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신도림", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2호선 (까치산 ~ 신도림)
			{ "까치산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신정네거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양천구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도림천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신도림", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
                },
		{ // 2호선 (신도림 ~ 성수)
			{ "신설동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용두", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신답", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용답", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성수", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3호선
			{ "대화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "주엽", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정발산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마두", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "백석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원흉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼송", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지축", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구파발", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연신내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "불광", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "녹번", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "홍제", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "무악재", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "독립문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경복궁", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안국", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종로3가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "을지로3가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "충무로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "약수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금호", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "압구정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "잠원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고속터미널", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "교대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남부터미널", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양재", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "매봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도국", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대치", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "학여울", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "일원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수서", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가락시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경찰병원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오금", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 4호선
			{ "당고개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "창동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "쌍문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수유(강북구청)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "미아", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "미아삼거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "길음", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성신여대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한성대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "혜화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대문역사문화공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "충무로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서울역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "숙대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼각지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신용산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동작", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "총신대입구(이수)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남태령", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선바위", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경마공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "과천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정부과천청사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인덕원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "평촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "산본", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수리산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대야미", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반월", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상록수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한대앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고잔", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "초지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신길온천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정왕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오이도", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 5호선
			{ "방화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "개화산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김포공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "발산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "우장산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "까치산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "목동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오목교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영등포구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영등포시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신길", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "여의도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "여의나루", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "애오개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "충정로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서대문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강화문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종로3가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "을지로4가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대문역사문화공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신금호", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "행당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "왕십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "답십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장한평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "군자", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아차산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광나루", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "천호", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "길동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "굽은다리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명일", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상일동", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 6호선
			{ "봉화산(서울의료원)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화랑대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "태릉입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "돌곶이", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상월곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고려대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "보문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "창신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동묘앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "약수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "버티고개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한강진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이태원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "녹사평(용산구청)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼각지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "효창공원앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대흥", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광흥창", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "합정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마포구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월드컵경기장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "디지털미디어시티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "증산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "새절", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "응암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "역촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "불광", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "독바위", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연신내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구산", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 7호선
			{ "장암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도봉산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수락산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마들", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "하계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "태릉입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "먹골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "면목", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사가정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용마산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "군자", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "어린이대공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "건대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "뚝섬유원지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청담", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강남구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "학동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "논현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고속터미널", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "내방", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "총신대입구(이수)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "숭실대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장승배기", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신대방삼거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "보라매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신풍", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대림", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남구로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가산디지털단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "철산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광명사거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "천왕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "온수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "까치울", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부천종합운동장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "춘의", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신중동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부천시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼산체육관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "굴포천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 8호선 (암사~모란
			{ "암사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "천호", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강동구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "몽촌토성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송파", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가락시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "문정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "복정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "산성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남한산성입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "단대오거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신흥", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "모란", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 9호선 (개화~종합운동장)
			{ "개화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김포공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공항시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신방화", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마곡나루", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양천향교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "증미", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "등촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "염창", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신목동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선유도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "당산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국회의사당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "여의도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "샛강", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노량진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노들", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "흑석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동작", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구반포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신반포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고속터미널", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신논현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "언주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선정릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼성중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "봉은사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종합운동장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 인천1 (계양~국제업무지구)
			{ "계양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "귤현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "박촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "임학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "계산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경인교대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "작전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "갈산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부평삼거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "간석오거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "예술회관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천터미널", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "문학경기장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신연수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원인재", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동춘", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동막", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "캠퍼스타운", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "테크노파크", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지식정보단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "센트럴파크", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국제업무지구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 인천2 (검단오류~운연)
			{ "검단오류", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "왕길", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "검단사거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "완정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "독정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "검암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "검바위", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아시아드경기장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가정중앙시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서부여성회관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천가좌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가재울", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "주안국가산단", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "주만", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시민공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석바위시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천시창", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석천사거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "모래내시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "만수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남동구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천대공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운연", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 분당 (왕십리~수원)
			{ "왕십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서울숲", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "압구정로데오", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강남구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선정릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "선릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구룡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "개포동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대모산입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수서", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "복정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가천대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "태평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "모란", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "야탑", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정자", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "미금", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "죽전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "보정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신갈", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "기흥", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상갈", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "매탄권선", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수원시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "매교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 신분당 (강남~광교)
			{ "강남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양재", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양재시민의숲", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청계산입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "판교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정자", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수지구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성북", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광교중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 경의중앙 (문산~서울역)
			{ "문산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "파주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월롱", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "야당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "탄현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "일산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "풍산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "백마", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대국", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "능곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "행신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수색", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "디지털미디어시티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가좌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서울역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 경의중앙 (문산~용문)
			{ "문산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "파주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월롱", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "야당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "탄현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "일산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "풍산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "백마", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대국", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "능곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "행신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수색", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "디지털미디어시티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가좌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "홍대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서강대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "효창공원앞", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서빙고", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "한남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "옥수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "응봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "왕십리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청량리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회기", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중랑", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망우", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도농", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕소", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도심", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "팔당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운길산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오빈", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 경춘
			{ "청량리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회기", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중랑", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상봉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망우", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "갈매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "별내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "퇴계원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "평내호평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "천마산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "마석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대성리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "첨평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "굴봉산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "백양리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김유정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남춘천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "춘천", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 공항
			{ "서울역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "홍대입구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "디지털미디어시티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김포공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "계양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "검암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "청라국제도시", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영종", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운서", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공항화물청사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천국제공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 의정부
			{ "탑석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "어룡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "곤제", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "효자", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경기도청북부첨사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "새말", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동오", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "의정부중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "흥선", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "의정부시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경전철의정부", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "회룡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "발곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 수인
			{ "오이도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "달월", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월곶", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "소래포구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천논현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "호구포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남동인더스파크", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원인재", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연수", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송도", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인하대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "숭의", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 에버라인
			{ "전대에버랜드", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "둔전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "보평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운동장송담대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김량장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명지대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시청용인대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "초당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동백", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "어정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강남대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "기흥", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 자기부상
			{ "용유", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "워터파크", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "국제업무단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "합동청사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장기주차장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인천국제공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 경강
			{ "여주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "세종대왕릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부발", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신둔도예촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "곤지암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "초월", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경기광주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "삼동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "판교", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // 부산
		{ // 1호선
			{ "노포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범어사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "두실", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구서", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부산대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "온천장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영륜", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동래", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "교대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서면", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범내골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범일", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "좌천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부산진", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "초량", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부산역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중앙", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "자갈치", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "토성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서대신", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "괴정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사하", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "담리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "하단", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2호선
			{ "양산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남양산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부산대양산캠퍼스", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "증산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "호포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "율리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "모라", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "모덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사상", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "감전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "주례", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "냉정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "개금", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동의대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "가야", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서면", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "전포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부산은행", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "문헌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지게골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "못골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대연", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경성대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금련산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광안", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수영", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "민락", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "센텀시티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시립미술관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동백", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "해운대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3호선
			{ "대저", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "체육공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강서구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구포", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "숙등", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남산정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "만덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "미남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사직", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "종합운동장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "거제", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "물만골", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "배산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "망미", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수영", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 4호선
			{ "안평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동부산대학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영산대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "석대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반여농산물시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "충렬사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "낙민", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수안", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동래", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "미남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 부산 - 김해경
			{ "가야대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "장신대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연지공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "박물관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수로왕릉", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "봉황", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "부원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김해시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "인제대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김해대학", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지내", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "불암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "평강", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대저", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "등구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "덕두", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서부산유통지구", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "괘법르네시떼", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사상", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // 대구
		{ // 1호선
			{ "설화명곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "진천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월배", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상인", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송현", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성당못", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대명", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안지랑", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "현충로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영대병원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "교대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명덕", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반월당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중앙로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대구역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "칠성시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동대구역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "큰고개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "아양교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "해안", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "방촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용계", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "율하", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신기", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반야월", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "각산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "안심", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2호선
			{ "문양", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "다사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대실", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "강창", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "계명대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "성서산업단지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "이곡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "죽전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "감삼", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "두류", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "내당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반고개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "반월당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "경대병원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대구은행", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범어", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수성구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "만촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "담티", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "연호", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "고산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신매", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "사월", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "임당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "영남대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3호선
			{ "칠곡경대병원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "학정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "팔거", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "동천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "칠곡운암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "태전", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "매천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "매천시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "팔달", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공단", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "만평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "팔달시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "원대", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "북구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "달성공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서문시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신남", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "명덕역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "건들바위", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대봉교", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수성시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수성구민운동장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "어린이회관", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "황금", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "수성못", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "범물", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용지", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // 광주
		{ // 1호선
			{ "평동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "도산", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "광주송정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "송정공원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "공항", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "김대중컨벤션센터", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "상무", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "운천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "쌍촌", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "화정", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "농성", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "돌고개", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "양동시장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금남로5가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "금남로4가", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "문화전당", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "남광주", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "학동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "소태", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "녹동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // 대전
		{ // 1호선
			{ "반석", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "지족", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "노은", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월드컵경기장", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "현충원", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "구암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "유성온천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "갑천", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "월평", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "갈마", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "정부청사", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "시청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "탄방", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "용문", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "오룡", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "서대전네거리", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중구청", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "중앙로", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대전역", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "대동", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "신흥", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "판암", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	}
};
		// a[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][호선][역]
struct train b[6][10][20] =
{
	{
		{
			{ "기일역", { NULL }, NULL, NULL }
		}
	},
	{
		{
			{ "기기일역", { NULL }, NULL, NULL }
		}
	}
};

// b[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][철도(경부선, 경부고속선, 광주선 등)][역]
struct bus c[6][200][50] =
{
	{
		{
			{ "버일역", NULL, NULL, NULL },
			{ "버이역", NULL, NULL, NULL }
		}	
	}
}; // c[도시(0 = 서울, 1 = 부산, 2 = 대구, 3 = 광주, 4 = 대전, 5 = 해당 없음)][버스번호][역]

char s_via[50][50]; // 지하철 경유역[
char t_via[50][50];
char b_via[50][50];

int secondDecomposerStation(char a[50], char b[50]);
int secondDecomposerTrain(char a[50], char b[50]);
int secondDecomposerBus(char a[50], char b[50]);
void findSameCityTransferStation(int e_i, int e_i2, int e_i3, int s_check, int e_check);

char FIRSTDECOMPOSER_TRANSFER_START[50];
char FIRSTDECOMPOSER_TRANSFER_END[50];



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

	printf("First Decomposer 작동을 진행합니다. \n");

	printf("역 정보를 읽어오고 있습니다. \n");

	for (int i = 0; i < 6; i++) { // 지하철
		for (int i2 = 0; i2 < 25; i2++) {
			for (int i3 = 0; i3 < 80; i3++) {
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
		for (int i2 = 0; i2 < 10; i2++) {
			for (int i3 = 0; i3 < 20; i3++) {
				if (strcmp(start, b[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 2;
				}

				else if (strcmp(end, b[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 2;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) { // 버스
		for (int i2 = 0; i2 < 200; i2++) {
			for (int i3 = 0; i3 < 50; i3++) {
				if (strcmp(start, c[i][i2][i3].name)) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 3;
				}

				else if (strcmp(end, c[i][i2][i3].name)) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 3;
				}
			}
		}
	} // 모든 역의 이름을 대조 한 뒤, 이름이 같은 역의 배열 번호와 교통수단을 저장. (1 = 지하철, 2 = 철도, 3 = 버스)

	printf("역 정보 읽어오기 완료.\n\n");
	printf("출발지 : %s\n", start);
	printf("s_i = %d\n", s_i);
	printf("s_i2 = %d\n", s_i2);
	printf("s_i3 = %d\n", s_i3);
	printf("s_check = %d\n\n", s_check);

	printf("도착지 : %s\n", end);
	printf("e_i = %d\n", e_i);
	printf("e_i2 = %d\n", e_i2);
	printf("e_i3 = %d\n", e_i3);
	printf("e_check = %d\n", e_check);

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

	printf("1차 분해를 개시합니다.\n");

	if (s_check == e_check) { // 경우에 따라 나눈다 (교통 수단이 같을 경우)

		printf("s_check == e_check\n");

		switch (s_check) {
		case 1: if (s_i != e_i) {
			switch (s_i) {
			case 0: 
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-0-D 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 1: 
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-1-D 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 2: 
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-2-D 작업이 확인되었습니다.\n");
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 3: 
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-3-D 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 4: 
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-4-D 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			}
		}
				else {
					printf("case : 1-E-: 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;

		case 2: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-0-D 작업이 확인되었습니다.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-1-D 작업이 확인되었습니다.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-2-D 작업이 확인되었습니다.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-3-D 작업이 확인되었습니다.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-4-D 작업이 확인되었습니다.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			}
		}
				else {
					printf("case : 2-E-: 작업이 확인되었습니다.\n");

					secondDecomposerTrain(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;

		case 3: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-0-D 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-1-D 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-2-D 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-3-D 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-4-D 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			}
		}
				else {
					printf("case : 3-E-: 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;
		}
	}

	else {

		printf("s_check != e_check");

		switch (s_check) {
		case 1:
			switch (e_check) {
			case 1: printf("Error Number : 0001\n"); break;
			case 2: 
				if (s_i != e_i) {
					printf("case : 1-2-I 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, end);
				}
				else {
					printf("case : 1-2-E 작업이 확인되었습니다.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerStation(start, FIRSTDECOMPOSER_TRANSFER_START);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
				};
				break;
			case 3: 
				if (s_i != e_i) {
					printf("case : 1-3-I 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 1-3-D 작업이 확인되었습니다.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerStation(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerBus(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				};
				break;
			}; break;
		case 2:
			switch (e_check) {
			case 1: 
				if (s_i != e_i) {
					printf("case : 2-1-I 작업이 확인되었습니다.\n");

					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 2-1-E 작업이 확인되었습니다.\n");

					secondDecomposerStation(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			case 2: printf("Error Number : 0001\n"); break;
			case 3: 
				if (s_i != e_i) {
					printf("case : 2-3-I 작업이 확인되었습니다.\n");

					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 2-3-E 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			}; break;
		case 3:
			switch (e_check) {
			case 1: 
				if (s_i != e_i) {
					printf("case : 3-1-I 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 3-1-E 작업이 확인되었습니다.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerBus(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerStation(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				};
				break;
			case 2: 
				if (s_i != e_i) {
					printf("case : 3-2-I 작업이 확인되었습니다.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
				}
				else {
					printf("case : 3-2-E 작업이 확인되었습니다.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerBus(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerTrain(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				}
				break;
			case 3: printf("Error Number : 0001\n"); break;
			}; break;
		}
	}

	printf("1차 분해 종료.\n");
	printf("First Decomposer 종료.\n");

	return 0;
}

void findSameCityTransferStation(int e_i, int e_i2, int e_i3, int s_check, int e_check) {
	switch (s_check) {
	case 1: // 지하철
		switch (e_check) {
		case 1: printf("Error Number : 0002\n"); break;
		case 2:
			for (int i2 = e_i2; i2 < 10; i2++) {
				for (int i3 = e_i3; i3 < 20; i3++) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 3:
			for (int i2 = e_i2; i2 < 200; i2++) {
				for (int i3 = e_i3; i3 < 50; i3++) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		}; break;
	case 2: // 철도
		switch (e_check) {
		case 1:
			for (int i2 = e_i2; i2 < 25; i2++) {
				for (int i3 = e_i3; i3 < 80; i3++) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 2: printf("Error Number : 0002\n"); break;
		case 3:
			for (int i2 = e_i2; i2 < 200; i2++) {
				for (int i3 = e_i3; i3 < 50; i3++) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		}; break;
	case 3: // 버스
		switch (e_check) {
		case 1:
			for (int i2 = e_i2; i2 < 25; i2++) {
				for (int i3 = e_i3; i3 < 80; i3++) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 2:
			for (int i2 = e_i2; i2 < 10; i2++) {
				for (int i3 = e_i3; i3 < 20; i3++) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 3: printf("Error Number : 0002\n"); break;
		}; break;
	}

}
 


// << 2차 분해자 입력구간 >>

// 2차 분해자(secondDecomposer~~) 는 출발지와 도착지를 입력 받아서 ~~ 에 서술된 교통수단의 환승 역 별로 분해 후, 소요시간 반환.

// 중복 사용을 방지하기 위하여 전역 변수 사용시, 변수의 앞에 자신의 이름 이니셜을 붙일 것.
// 출발지에서 도착지로 향하는 과정에 경유하게 되는 역의 이름을 s_via (지하철), t_via (기차), b_via (버스) 에 순서대로 삽입 할 것.

int secondDecomposerStation(char start[50], char end[50]) { // 안은규 (지하철)
	int s_i;
	int s_i2;
	int s_i3;

	int e_i;
	int e_i2;
	int e_i3;

	for (int i = 0; i < 6; i++) {
		for (int i2 = 0; i < 25; i2++) {
			for (int i3 = 0; i < 80; i3++) {
				if (strcmp(start, a[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
				}

				else if (strcmp(end, a[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
				}
			
			}
		}
	}
	
	if (s_i2 == e_i2) {
//		동규함수(start, end); // ㅇㅅㅇ
	}

	else {
		if(a[][][].w != NULL)
		{

		}
	
	}



	return 0;
}

int secondDecomposerTrain(char start[50], char end[50]) { // 김세훈 (철도)

	return 0;
}

int secondDecomposerBus(char start[50], char end[50]) { // 박동규 (버스)

	return 0;
}


// << 메인 함수 입력구간 >>

int main()
{ 
	firstDecomposer("지일역", "기기일역");

    return 0;
}