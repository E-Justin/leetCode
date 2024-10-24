// Runtime: 0ms : Beats 100% of submissions
// Memory Usage: 10.4MB

int romanToInt(char* s) {
    size_t len = strlen(s);
    unsigned int j = 0;
    int ret = 0;

    // run through each element in string
    for (int i = 0; i < len; i++) {
    	if (i + 1 < len) j = i + 1;
    
    	int this_val = 0;
    	int next_val = 0;

        // get this_val && next_val (if there)
    	for (int count = 0; count < 2; count++) {
    		char c = count == 0 ? s[i] : s[j];
    		if (count == 1 && !j) break;
    
    		switch (c) {
    		case 'I':
    			if (count == 0) this_val = 1;
    			else next_val = 1;
    			break;
    		case 'V':
    			if (count == 0) this_val = 5;
    			else next_val = 5;
    			break;
    		case 'X':
    			if (count == 0) this_val = 10;
    			else next_val = 10;
    			break;
    		case 'L':
    			if (count == 0) this_val = 50;
    			else next_val = 50;
    			break;
    		case 'C':
    			if (count == 0) this_val = 100;
    			else next_val = 100;
    			break;
    		case 'D':
    			if (count == 0) this_val = 500;
    			else next_val = 500;
    			break;
    		case 'M':
    			if (count == 0) this_val = 1000;
    			else next_val = 1000;
    			break;
    		}
    	}

        // if next_val is larger than current position
    	if (next_val && next_val > this_val) {
    		ret += (next_val - this_val);
    		j++;
    		i++;
    	}
    	else {
    		ret += this_val;
    	}
    	
    
    }
    
    return ret;
}
