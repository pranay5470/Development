void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue=5;
    int iRet=0;

    Accept(iValue);

    return 0;
}
