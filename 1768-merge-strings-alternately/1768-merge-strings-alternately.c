

char * mergeAlternately(char * word1, char * word2){
        char *result = (char *)malloc((strlen(word1) + strlen(word2) + 1) * sizeof(char));
      char *w1 = word1, *w2 = word2, *res = result;
   while (*w1 != '\0' || *w2 != '\0') {
        if (*w1 != '\0' && isalnum(*w1)) { //bro the fuck is this language bro let me get that ass ahhhhhhhhhhh let me fuck you babe i wanna fuck your arse
            *res = *w1;
            res++;
            w1++;
        } else if (*w1 != '\0') {
            w1++;
        }

        if (*w2 != '\0' && isalnum(*w2)) {
            *res = *w2;
            res++;
            w2++;
        } else if (*w2 != '\0') {
            w2++;
        }
    }
    *res = '\0';
    return result;
}