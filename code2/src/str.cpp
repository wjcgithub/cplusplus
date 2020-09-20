extern "C" {
int mystrlen(char *pp)
    {
        int len = 0;
        while (*pp)
        {
            len++;
            pp++;
        }
        return len;
    }
}