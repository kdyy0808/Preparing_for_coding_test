// Day1(0901).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Find_MaxNum(int array[], int N, int M, int K);

int main()
{
    int K = 0;
    int N = 0;
    int M = 0;
    int array[1000] = {};

    std::cin >> N;//2에서 1000
    std::cin >> M;//1에서 10,000
    std::cin >> K;//1에서 10,000

    for (int i = 0; i < N; i++)
    {
        std::cin >> array[i];
    }
    Find_MaxNum(array, N, M, K);


    return 0;
}

void Find_MaxNum(int array[], int N, int M, int K) {
    int Max = 0;
    int Second_Max = 0;
    char Max_idx = 0;
    char Second_Max_idx = 0;

    for (int i = 0; i < N; i++)
    {
        if (Max<array[i])
        {
            Max = array[i];
            Max_idx = i;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (Second_Max < array[i] && i !=Max_idx)
        {
            Second_Max = array[i];
            Second_Max_idx = i;
        }
    }

    int Sum = 0;
    int count = 0;
    for (int i = 0; i < M; i++)
    {
        if (count >= K) {
            Sum += Second_Max;
            count = 0;
        }
        else {
            Sum += Max;
            count++;
        }

    }
    std::cout << "Result : " << Sum;


}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
