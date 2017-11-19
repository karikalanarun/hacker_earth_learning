no_of_inputs = raw_input();

def remove_consec(b_str):
    g_str = b_str[0]
    for l in xrange(1, len(b_str)):
        j = len(g_str) - 1
        if(g_str[j] != b_str[l]):
            g_str += b_str[l]
    return g_str
            
for i in xrange(0, int(no_of_inputs)):
    print remove_consec(raw_input())
