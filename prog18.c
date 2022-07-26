#include <stdio.h>

struct cricket{
  char name[55];
  char country[55];
  int bscore;
  float savg;

};

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}


int main() {


  int players;
  printf("Enter number of players: ");
  scanf("%d",&players);
  struct cricket cric[players];

  printf("Enter data of %d players \n",players);
  for(int i=0;i<players;i++){
    printf("Enter %d player name:",i+1);
    scanf("%s",&cric[i].name);
    printf("Enter country name:");
    scanf("%s",&cric[i].country);
    printf("Enter best score:");
    scanf("%d",&cric[i].bscore);
    printf("Enter avg score:");
    scanf("%f",&cric[i].savg);

  }
  float arr[players];
  for(int i=0;i<players;i++){
    arr[i]=cric[i].savg;
  }

  bubbleSort(arr, players);


  for(int i=0;i<players;i++){
    printf("Name:%s ",cric[players-i-1].name);
    printf("batting average:%f \n",arr[players-i-1]);
  }


  return 0;
}