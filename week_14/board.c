//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12   //������ �մ� ���� ���� 
#define MAX_COIN        4    //�� ĭ�� ���� �� �մ� �ִ� ���� ���� 
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
   
    	int sum;
    	while(sum <N_COINPOS){
    		int j=rand()%(N_BOARD);
    	if (board_coin[j] == 0) {
        	int add = rand() % MAX_COIN + 1;
      
        	if (sum + add > N_COINPOS) {
            add = N_COINPOS - sum;
        	}

       		board_coin[j] = add; 
       		sum += add; 
			}
}
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS; 
// ----- EX. 5 : shark ------------
	for(i=0;i<N_BOARD;i++)
	{
		printf("%d",board_coin[i]);
		
	}
	printf("\n");
	return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{

// �ֻ��� ������ �Լ�
int roll(void) {
    return rand() % MAX_SHARKSTEP + 1;  // 1���� MAX_SHARKSTEP������ ���� ��ȯ
}

// ��� �̵� �Լ�

    // 1���� MAX_SHARKSTEP������ ���� �̵�
    int step = roll();  // ����� �̵� ĭ ��
    
	shark_position += step;  // �̵� �� ����� ���ο� ��ġ + ���� 

    // ���ο� ��ġ�� ���� ũ�⸦ ���� �ʵ��� üũ
    if (shark_position >= N_BOARD) {
        shark_position = N_BOARD - 1;  // �ִ� ������ BOARD_SIZE-1����
    }

    // �̵��ϴ� ��ο��� board_status �迭 ����
    int i;
	for (i = 0; i <= shark_position; i++) {
        board_status[i] = BOARDSTATUS_NOK;  // �ش� ĭ�� �� ������ ĭ��. 
    }
    
	return shark_position;

	
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
