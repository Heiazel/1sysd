include <stdio.h>

#define MAX_SIZE 100

void invertcase() {

  char s[MAX_SIZE];

  printf("Entrez une chaine (max %d chars) : ", MAX_SIZE);
  if(scanf("%s", s) != 1) {
    printf("Erreur de saisie\n");
    return;
  }

  int i = 0;
  while(s[i] != '\0') {
    if(s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] - 'A' + 'a';
    }
    else if(s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - 'a' + 'A'; 
    }
    i++;
  }

  printf("Chaine inverse: %s\n", s);

}

int main() {

  invertcase();
  
  return 0;
}
