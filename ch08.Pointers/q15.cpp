#include <iostream>
#include <iomanip>
using namespace std;

const size_t Word{100};
int MEM[Word]{};

enum OpCode{READ=10, WRITE,
    LOAD=20, STORE,
    ADD=30, SUB, DIV, MULT,
    BRANCH=40, BRANCHNEG, BRANCHZERO, HALT};

void loadMEM();
void printMEM();
void execute();

int main(){

    loadMEM();
    // printMEM();
    execute();
}

void loadMEM(){
    unsigned int indx{0}, inst;
    cout << "[0] ";
    cin >> inst;
    while(inst){ // 0(zero) STOP input
        MEM[indx]=inst;
        cout << "[" << ++indx << "] ";
        cin >> inst;
    };
}

void printMEM(){
    int *iPtr{MEM};

    while(*iPtr){
        cout << *iPtr << endl;
        iPtr++;
    }
}

void execute(){
    int AX{0}; //accumulator

    for(size_t indx{0}; MEM[indx]; indx++){
        int addr{MEM[indx]%100};

        switch(MEM[indx]/100){
            case READ:
                cin >> MEM[addr];
                break;
            case WRITE:
                cout << MEM[addr] << endl;
                break;
            case LOAD:
                AX=MEM[addr];
                break;
            case STORE:
                MEM[addr]=AX;
                break;
            case ADD:
                AX += MEM[addr];
                break;
            case SUB:
                AX -= MEM[addr];
                break;
            case DIV:
                AX /= MEM[addr];
                break;
            case MULT:
                AX *= MEM[addr];
                break;
            case BRANCH:
                indx=addr-1;
                break;
            case BRANCHNEG:
                if(AX<0){
                    indx=addr-1;
                }break;
            case BRANCHZERO:
                if(AX==0){
                    indx=addr-1;
                }break;
            case HALT:
                return; // finish program
            default:
                cout << "[ NO OPCODE ]" << endl;
        }
    }
}