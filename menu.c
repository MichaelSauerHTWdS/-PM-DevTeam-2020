#include <stdio.h>
#include "scanflib.h"

#define ITEM_HILFE  0
#define ITEM_KOM1   1
#define ITEM_KOM2   2
#define ITEM_KOM3   3
#define ITEM_KOM4   4
#define ITEM_KOM5   5
#define ITEM_KOM6   6
#define ITEM_KOM7   7
#define ITEM_KOM8   8
#define ITEM_KOM9   9
#define ITEM_ENDE   10



char * komMenu[]={"\n 0\tHilfetext\n",
                  " 1\t1.Kommando\n",
                  " 2\t2.Kommando\n",
                  " 3\t3.Kommando\n",
                  " 4\t4.Tim Schneider\n",
		              " 5\t5.Alexander Tröger\n",
		              " 6\t6.Tim Weber\n",
                  " 7\t7. David Holzapfel\n",
                  " 8\t8. Jorin Spiller\n",
                  " 9\t9. Maurice Faber\n"
                  " 10\a\tEnde\n"};

int steuerMenu(void);

int main(int argc, char* argv[])
  {
  return steuerMenu();
  }  
				  
int steuerMenu()
  {
  int kommando = 1;

  do{ 
    for (int i=0; i<(sizeof(komMenu)/sizeof(char *)); i++)
      {
      printf("%s",komMenu[i]);
      }
    printf("$:");
	if (readInteger(&kommando)!=NO_ERROR)
	  {
	  printf("keine Zahl");
	  }
	  
    switch (kommando)
      {
      case  ITEM_HILFE:  printf("%s",komMenu[ITEM_HILFE]);
                         break;
      case  ITEM_KOM1:   printf("%s",komMenu[ITEM_KOM1]);
                         break;
      case  ITEM_KOM2:   printf("%s",komMenu[ITEM_KOM2]);
                         break;
      case  ITEM_KOM3:   printf("%s",komMenu[ITEM_KOM3]);
                         break;
      case  ITEM_KOM4:   printf("%s",komMenu[ITEM_KOM4]);
                         break;
      case ITEM_KOM5:  printf("%s",komMenu[ITEM_KOM5]);
			 break;
      case ITEM_KOM6:  printf("%s",komMenu[ITEM_KOM6]);
       break;
      case ITEM_KOM7:  printf("%s",komMenu[ITEM_KOM7]);
       break;
      case ITEM_KOM8:  printf("%s",komMenu[ITEM_KOM8]);
       break;
      case ITEM_KOM9:  printf("%s",komMenu[ITEM_KOM9]);
			 break;
      case  ITEM_ENDE:   printf("%s",komMenu[ITEM_ENDE]);
                         break;
      default: printf("\nkein Kommando\n");
      }
    }while(kommando!=ITEM_ENDE);
   
    return(0);
  }
