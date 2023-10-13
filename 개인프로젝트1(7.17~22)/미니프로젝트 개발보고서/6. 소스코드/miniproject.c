// 오늘의 수정본
// 데이터는 데이터만 가져올 수 있고
// 출력문은 출력문만 가져오도록 함수를 짜야함
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

#define ZERO 48
#define ONE 49
#define TWO 50
#define THREE 51
#define FOUR 52
#define INITIAL 105
#define DIRECT 100
#define CLOSE 120

// 출력문 : 시작1
void start(void)
{
    Sleep(5000);
    system("cls");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⣶⣆⠀⠀⢠⣶⠀⠀⠀⠀⠀⣴⠖⠲⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣿⠹⡄⢀⡟⣿⠀⠀⠀⠀⠀⠙⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⣀⣀⠀⠀⠀⠀⣿⠀⢻⡼⠁⣿⠀⠀⠀⠀⠀⣄⣀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠁⠀⠈⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣤⠀⠀⠀⢰⡆⠀⢠⡶⠒⠲⢦⡀⠀⢰⡆⠀⠀⠀⠀⠀⠠⠤⠤⣄⠀⣶⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⢸⣇⡀⠘⢧⣤⣤⠾⠃⠀⠘⠧⠤⠤⠤⠤⠀⢠⣤⣤⡿⠀⣿⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢿⣤⣤⠤⢼⡇⠐⠒⠒⢲⡖⠒⠒⠒⠒⠒⢲⡖⠒⠒⠂⢸⣀⣠⣤⡄⣿⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀\n");
    Sleep(10000);
}

// 출력문 : 시작2
void intro_page()
{
    system("cls");
    printf("\n");
    printf("⌈¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯⌉\n");
    printf("|    LMS 나우누리에 오신 여러분을 환영합니다.    |\n");
    printf("|  저희 LMS 나우누리는 회원제로 운영되고 있으며  |\n");
    printf("|      참여를 희망하시면 담당자에게 문의 후      |\n");
    printf("|         회원가입을 꼭 해주시길 바랍니다.       |\n");
    printf("⌊________________________________________________⌋\n\n");
    printf("                      담당자 👱 :    윤 승 욱    \n");
    printf("                      담당자 📱 :  010-1234-5678  \n");
    Sleep(5000);
}

// 출력문 : 로그인 페이지
void login_page(void)
{
    system("cls");
    printf("⌈¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯⌉\n");
    printf("|                  로 그 인                      |\n");
    printf("|                                                |\n");
    printf("|                  페 이 지                      |\n");
    printf("⌊________________________________________________⌋\n\n");
    printf("==================================================\n");
}

// 출력문 : 회원가입 페이지
void account_page(void)
{
    printf("⌈¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯⌉\n");
    printf("|             회원가입 페이지입니다.             |\n");
    printf("|                                                |\n");
    printf("|                   ※ 주의사항 ※                 |\n");
    printf("|    ID는 영문(+ 숫자) 조합, PW는 숫자 입력      |\n");
    printf("|             회원가입 페이지입니다.             |\n");
    printf("⌊________________________________________________⌋\n\n");
    printf("==================================================\n");
}

// 4-1. 메일 쓰기
void write_mail(char *ID)
{
    char filename[100];
    char filename2[100] = "./230718/sendmail/";
    printf("<메일 쓰기>\n");
    printf("보내는 사람 : %s\n", ID);
    char content[1000];
    char recipient[30];
    printf("파일 이름을 입력하세요 >> ");
    scanf("%s", filename);
    // filename에 .txt 더하기
    strcat(filename, ".txt");
    strcat(filename2, filename);
    FILE *fp = fopen(filename2, "wt");
    printf("받는 사람을 입력하세요 >> ");
    scanf("%s", recipient);
    getchar();
    printf("내용을 입력하세요 >>");
    // 빈칸으로 입력한 것을 변수에 넣기
    fgets(content, sizeof(content), stdin);
    // 보내는 사람, 받는 사람, 내용 전달
    fprintf(fp, "%s %s %s \n", ID, recipient, content);
    fclose(fp);
}

// 게시판 구현 안된 부분
// =============================================================

// 5-1. 글 쓰기
void write_notice(void)
{
    char noticename[100];
    char content[1000];
    FILE *fp = fopen("./230718/document/notice.txt", "a");
    system("cls");
    printf("글 제목을 적으세요 >> ");
    fgets(noticename, sizeof(noticename), stdin);
    printf("내용을 입력하세요 >> ");
    fgets(content, sizeof(content), stdin);
    // fprintf(fp, "%s %s \n", noticename, content);
    fprintf(fp, "%s ", noticename);
    fprintf(fp, "%s\n", content);
    fclose(fp);
}

// 5-2. 게시판 읽기
void read_notice(void)
{
    int notice = 0;
    int ret;
    char real_notice[100];
    while (!notice)
    {
        char noticename[100];
        char content[1000];
        system("cls");
        printf("찾고자 하는 글 이름을 입력하세요 >> ");
        scanf("%s", noticename);
        FILE *fp = fopen("./230718/document/notice.txt", "rt");
        while (1)
        {

            ret = fscanf(fp, "%s %s", real_notice, content);
            if (ret == EOF)
            {
                printf("글을 찾을 수 없습니다.\n");
                Sleep(1000);
                break; // 내부 루프 종료 후 재시도
            }
            if (strcmp(noticename, real_notice) == 0)
            {
                printf("불러오기 성공\n");
                printf("글이름 >> %s\n", real_notice);
                printf("내용\n");
                printf("%s\n", content);

                Sleep(2000);
                notice = 1; // 로그인 성공
                break;      // 외부 루프 종료
            }
        }

        fclose(fp);
    }
}

// 5. 게시판
int notice_page()
{
    int notice_num = 0;
    while (!notice_num)
    {
        int ret;
        char title[100];
        char mail_ctg[100];
        Sleep(2000);
        system("cls");
        printf("\n[게시판]\n");
        printf("==================================================\n");
        FILE *fp = fopen("./230718/document/notice.txt", "rt");
        // 파일 비정상적 종료 의미
        if (fp == NULL)
        {
            puts("파일오픈 실패!\n");
            return -1;
        }

        while (1)
        {
            ret = fscanf(fp, "%[^\n] %[^\n]\n", title, mail_ctg);
            if (ret == EOF)
            {
                Sleep(2000);
                break;
            }
            printf("%s %s\n", title, mail_ctg);
        }

        fclose(fp);

        printf("\n");
        printf("==================================================\n");
        printf("           원하시는 서비스를 선택하세요           \n");
        printf("  초기메뉴(i)   글쓰기(1)   글읽기(2)   종료(x)\n");
        int key = _getch();
        switch (key)
        {
        case ONE:
            write_notice();
            break;
        case TWO:
            read_notice();
            break;
        case INITIAL:
            notice_num = 1;
            break;
        case CLOSE:
            exit(0);
            break;
        }
    }
}

// =============================================================

// 4-2. 메일 읽기
void read_mail(char *ID)
{
    int account = 0;
    int ret;

    while (!account)
    {
        char receive_id[30];
        char content[1000];
        char id[30];
        char filename[100];
        char filename2[100] = "./230718/sendmail/";

        printf("<메일 읽기>\n");
        printf("찾고자 하는 파일 이름을 입력하세요 >> ");
        scanf("%s", filename);
        strcat(filename, ".txt");
        strcat(filename2, filename);
        FILE *fp = fopen(filename2, "rt");
        while (1)
        {

            ret = fscanf(fp, "%s %s %[^\n]", id, receive_id, content);
            if (ret == EOF)
            {
                printf("메일을 찾을 수 없습니다.\n");
                Sleep(1000);
                break; // 내부 루프 종료 후 재시도
            }
            if (strcmp(ID, id) == 0)
            {
                printf("불러오기 성공\n");
                printf("파일명 >> %s\n", filename);
                printf("보내는 사람 >> %s\n", id);
                printf("내용\n");
                printf("%s\n", content);

                Sleep(2000);
                account = 1; // 로그인 성공
                break;       // 외부 루프 종료
            }
        }

        fclose(fp);
    }
}

// 2-1. 로그인 페이지
// 입력한 아이디 포인터화 필요(없을 수도??)
int Login(int login, char *ID)
{
    // 입력한 아이디 : ent_id
    // 입력한 비밀번호 : ent_pw

    char user_id[20];
    int user_pw;
    int ret;
    while (!login)
    {
        char ent_id[20];
        int ent_pw;
        printf("\n");
        login_page();
        printf("아이디와 패스워드를 입력하세요\n");
        printf("ID : ");
        scanf("%s", ent_id);
        printf("PW : ");
        scanf("%d", &ent_pw);
        FILE *fp = fopen("./230718/document/account.txt", "rt");
        while (1)
        {
            ret = fscanf(fp, "%s %d", user_id, &user_pw);
            if (ret == EOF)
            {
                printf("입력하신 아이디, 비밀번호가 맞지 않습니다.\n");
                printf("다시 입력해주세요....\n");
                Sleep(2000);
                break;
            }
            if ((strcmp(user_id, ent_id) == 0) && (user_pw == ent_pw))
            {
                Sleep(1000);
                printf("로그인 성공\n");
                Sleep(1000);
                strcpy(ID, ent_id);

                login = 1; // 로그인 성공

                break;
            }
        }
        fclose(fp);
    }

    return login;
}

// 2-2. 회원가입
void account(void)
{
    char id[20];
    int pw;
    system("cls");
    FILE *fp = fopen("./230718/document/account.txt", "a");
    account_page();
    printf("ID를 입력하세요 : ");
    scanf("%s", id);
    getchar();
    printf("PW를 입력하세요 : ");
    scanf("%d", &pw);
    getchar(); // 버퍼에 남아있는 \n의 소멸을 위해서
    fprintf(fp, "%s %d \n", id, pw);

    fclose(fp); // 스트림의 종료
}

// 2. 로그인&회원가입 기능
void login_choice(char *ID)
{
    char member[2];
    int login = 0;
    while (!login)
    {
        system("cls");
        printf("⌈¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯⌉\n");
        printf("|         회원이시면 1을 입력 후 로그인,         |\n");
        printf("|                                                |\n");
        printf("|     비회원이시면 0을 누르고 회원가입 하세요    |\n");
        printf("⌊________________________________________________⌋\n\n");
        printf("==================================================\n");
        printf("          회원가입(0)           로그인(1)\n");
        scanf("%s", member);
        if (strcmp(member, "1") == 0)
        {
            // 로그인 페이지 출력 함수
            Sleep(2000);
            // Login으로 주소를 보내야 함
            login = Login(login, ID);
            // printf("%d\n", login);
            Sleep(2000);
        }
        else if (strcmp(member, "0") == 0)
        {
            // 회원가입 페이지 출력 함수
            printf("회원가입 페이지로 넘어갑니다\n");
            account();
            Sleep(2000);
            // 다시 while문 돌림
        }
        else
        {
            printf("잘못 입력하셨습니다, 다시 입력해주세요\n");
            Sleep(2000);
            // 다시 while문을 돌림
        }
    }
}

// 4. 메일
int mail_page(char *ID)
{
    int mail_num = 0;
    while (!mail_num)
    {
        int num, ret;
        char mail_ctg[20];
        Sleep(2000);
        system("cls");
        printf("\n[메일서비스]\n");
        FILE *fp = fopen("./230718/document/mailctg.txt", "r");
        // 파일 비정상적 종료 의미
        if (fp == NULL)
        {
            puts("파일오픈 실패!\n");
            return -1;
        }

        while (1)
        {
            ret = fscanf(fp, "%d %s", &num, mail_ctg);
            if (ret == EOF)
            {
                Sleep(2000);
                break;
            }
            printf("%d %s\n", num, mail_ctg);
        }

        fclose(fp);

        printf("\n");
        printf("==================================================\n");
        printf("           원하시는 서비스를 선택하세요           \n");
        printf("    초기메뉴(i)     직접이동(1~2)     종료(x)\n");
        int key = _getch();
        switch (key)
        {
        case ONE:
            write_mail(ID);
            break;
        case TWO:
            read_mail(ID);
            break;
        case INITIAL:
            mail_num = 1;
            break;
        case CLOSE:
            exit(0);
            break;
        }
    }
}

// 3. 대분류
// 한글로 txt파일에 저장할 때
// 인코딩 ANSI로 저장 필요
int Main_CTG(char *ID)
{
    int b_c_num = 0;
    while (!b_c_num)
    {
        // ret : 텍스트 다 로드 했는지 확인하기 위함(ret==EOF)
        // num : 대분류 넘버링
        // main_ctg : 대분류
        int num, ret;
        char main_ctg[20];
        Sleep(2000);
        system("cls");
        printf("\n[기본서비스]\n");
        FILE *fp = fopen("./230718/document/MainCategory.txt", "r");
        // 파일 비정상적 종료 의미
        if (fp == NULL)
        {
            puts("파일오픈 실패!\n");
            return -1;
        }

        while (1)
        {
            ret = fscanf(fp, "%d %s", &num, main_ctg);
            if (ret == EOF)
            {
                Sleep(2000);
                break;
            }
            printf("%d %s\n", num, main_ctg);
        }

        fclose(fp);

        printf("\n");
        printf("==================================================\n");
        printf("           원하시는 서비스를 선택하세요           \n");
        printf("    초기메뉴(i)     직접이동(1~4)     종료(x)\n");
        int key = _getch();
        switch (key)
        {
        case ONE:
            // 1. 전자메일
            mail_page(ID);
            // b_c_num = 1;
        case TWO:
            // 2. 게시판
            notice_page();
            // b_c_num = 1;
        case THREE:
            // 3. 신문기사
            b_c_num = 0;
        case FOUR:
            // 4. 미니게임
            b_c_num = 0;
        case INITIAL:
            b_c_num = 0;
        case CLOSE:
            b_c_num = 0;
        }
    }
}

// 메인함수
int main(void)
{
    // ID의 주소를 함수로 보내서 고쳐줘해야
    // 함수에서 받은 주소값으로 데이터를 넣어준다
    char ID[20];
    system("cls");
    start();
    intro_page();
    login_choice(ID);
    Main_CTG(ID);
    return 0;
}