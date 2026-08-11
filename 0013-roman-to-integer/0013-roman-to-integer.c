int helper(char i)
{
    switch (i)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case'C':
            return 100;
        case'D':
            return 500;
        case'M':
            return 1000; 
        default:
            return 0;
    }
}

int romanToInt(char* s) 
{
    int l = strlen(s);
    int i,sum=0,x,y;
    for(i=0;i<l;i++)
    {
        x = 0;
        y = 0;
        x += helper(s[i]);
        if(i < l-1)
        {
            y += helper(s[i+1]);
        }
        if(x < y)
            {
                sum += y-x;
                i++;
            }
        else 
            {
                sum += x;
            }
    }
    return sum;
    
}