  #include <stdio.h>
    void foo(float *);
    int main()
    {
        int i = 10, *p = &i;
        foo(&i);
    }
    void foo(float *p)
    {
        printf("%f\n", *p);
    }