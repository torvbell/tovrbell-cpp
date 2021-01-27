//
// Created by 吴彦祖 on 2021/1/27.
//
struct multi_array
{
private:
    int init_array[16] = {};

    int *i_p = init_array;

public:
    void add(int e)
    {
        i_p = &e;
        i_p++;
    }

    int get(int i)
    {
        i_p = &i;
        return 0;
    }

};

void tesing()
{
    multi_array _list;

    _list.add(10);

}