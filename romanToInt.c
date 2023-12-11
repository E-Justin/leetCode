// 3ms
// 6.47 MB

int romanToInt(char* s) {
    int len = strlen(s);
    int curr = 0;
    int prev = 0;
    int ret = 0;

    for (int i = 0; i < len; i++) {

        switch (s[i]) {
        case 'I':
            curr = 1;
            break;
        case 'V':
            curr = 5;
            break;
        case 'X':
            curr = 10;
            break;
        case 'L':
            curr = 50;
            break;
        case 'C':
            curr = 100;
            break;
        case 'D':
            curr = 500;
            break;
        case 'M':
            curr = 1000;
            break;
        }

        if (curr > prev && prev != 0) {
            ret = ret + (curr - prev * 2) ;
        }
        else {
            ret += curr;
        }

        prev = curr;

    }

    return ret;
}
