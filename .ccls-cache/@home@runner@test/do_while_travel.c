#include <stdio.h>
main(){
  int a=0;

  do{
    printf("당신이 가고 싶은 곳은 어디인가요?\n");
    printf("1.하와이\n");
    printf("2.파리\n");
    printf("3.두바이\n");
    printf("4.피란체\n");
    printf("5.뉴욕\n");
    printf("가고 싶은 곳의 번호를 선택하세요: ");
    scanf("%d", &a);
  }while(a<=0 || a>=6);

  if(a==1) printf("지금 바로 하와이로 여행을 떠나보세요!\n");
  else if(a==2) printf("지금 바로 파리로 여행을 떠나보세요!\n");
  else if(a==3) printf("지금 바로 두바이로 여행을 떠나보세요!\n");
  else if(a==4) printf("지금 바로 피란체로 여행을 떠나보세요!\n");
  else printf("지금 바로 뉴욕로 여행을 떠나보세요!\n");
}