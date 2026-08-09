bool isPalindrome(int x) {
    int a,b,c;
    long long rev_num = 0;
    a = x;
    if(x<0)
    {
        return false;
    }
    while(a!=0)
    {
        c = a%10;
        a = a/10;
        rev_num = rev_num*10;
        rev_num = rev_num+c;
    }
    if(rev_num == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

