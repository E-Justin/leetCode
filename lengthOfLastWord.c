// 3ms
// 6.50 MB

int lengthOfLastWord(char * s){
    int length = 0;
    int is_word = 0;

    if (strlen(s) == 1 && s[0] != ' ') {
        return 1;
    }

    for (int i = strlen(s) - 1; i >= 0 ; i--) {
        if (isalpha(s[i])) {
            length++;
            is_word = 1;
        }
        else if (strlen(s) == 2 && isalpha(s[0])) {
            return 1;
        }
        else if (length && is_word) {
            break;
        }
    }

    return length;
}
