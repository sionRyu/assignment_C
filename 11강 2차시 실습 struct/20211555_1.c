#include<stdio.h>

int main(void)
{
    struct {

        int n500;
        int n100;
        int n50 ;
        int n10 ;
    }CoinBox;

    int payMoney = 0;


    printf("Input money : ");
    scanf("%d", &payMoney);

    CoinBox.n500 = payMoney / 500;
    CoinBox.n100 = (payMoney - CoinBox.n500 * 500) / 100;
    CoinBox.n50 = (payMoney - CoinBox.n500 * 500 - CoinBox.n100 * 100) / 50;
    CoinBox.n10 = (payMoney - CoinBox.n500 * 500 - CoinBox.n100 * 100 - CoinBox.n50 * 50) / 10;
    printf("# of 500 = %d\n", CoinBox.n500);
    printf("# of 100 = %d\n", CoinBox.n100);
    printf("# of 50 = %d\n", CoinBox.n50);
    printf("# of 10 = %d\n", CoinBox.n10);
}