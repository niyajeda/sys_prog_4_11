#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Für toupper()
#include <string.h> //für String-Funktionen


int palindrom_check1(const char *st1)
{
  int st1_len = strlen(st1), i;

  for(i = 0; i < st1_len / 2; i++)
      if (toupper(st1[i]) != toupper(st1[st1_len -1 -i])) return 0; //-1 eingefügt

  return 1;
  
}

int main(void) {
  char *st1, *st2;
  int st1_len, i;
  char *exit = "exit"; //normale Anführungszeichen

  st1 = (char *) malloc(100); //(char *) eingefügt
  st2 = (char *) malloc(100); //(char *) eingefügt
 
  printf("Zum Beenden exit als Eingabe angeben. \n");
  while (1) {
    printf("Eingabe: ");
    scanf("%s", st1);
    if (strcmp(st1, exit) == 0) return 0;

    st1_len = strlen(st1);

    for (i=0; i<st1_len; i++) {
      st2[i] = toupper(st1[st1_len -1 -i]);
    }
    
    if (palindrom_check1(st1)) printf("1. Test: Palindrom \n");
    else printf("1. Test: Kein Palindrom \n");  
 
    if (strcmp(st1, st2)) printf("2. Test: Palindrom\n"); //strcmp zum Vergleichen von Strings
    else printf("2. Test: Kein Palindrom\n");
 }
 return 0;
}