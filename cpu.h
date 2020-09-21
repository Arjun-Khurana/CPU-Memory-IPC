using namespace std;

class cpu
{
    public:
    int AC;
    int PC;
    int SP;
    int IR;
    int X;
    int Y;

    cpu()
    {
        AC = 0;
        PC = 0;
        SP = 0;
        IR = 0;
        X = 0;
        Y = 0;
        cout << "hello i am cpu" << endl;
    }

    int execute(instr, mem)
    {
        switch(instr)
        {
            
        }
    }
};