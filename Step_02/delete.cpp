struct IntArray
{
explicit IntArray(int size)
{
this->size=size;
};


int size;
int * data;
};

int main()
{
IntArray * pa = new IntArray(10);

}