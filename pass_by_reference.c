  #include <stdio.h>
    void foo(int*);
    int main()
    {
        int i = 10, *p = &i;
        //p=p++;
        p++;
        foo(p++);
    }
    void foo(int *p)
    {
        printf("%d\n", *p);
    }


    