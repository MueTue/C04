#include <stdio.h>
#include <stdbool.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    int sNum = 0;
    bool isSign = false;

    while (str[i] >= '9' || str[i] <= '0')
    {
        
        if(str[i] == '-')
        {
            if(!isSign)
            {
                isSign = true;
            }

            sNum++;
        }
        i++;
    }
    

    while(str[i] <= '9' && str[i] >= '0')
    {
        
        res = res*10 + (str[i] - '0');
        
        i++;
    }

    if(isSign && sNum%2 == 1)
    {
        sign = -1;
    }
    
    

    return sign*res;
}


int main()
{
    char string1[] = "--+-+3242ad69696";

    printf("%d", ft_atoi(&string1));
}