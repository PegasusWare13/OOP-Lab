//push pull operation by user defined thingy
#include <iostream>
using namespace std;
template <class tem>

class STACK
{
    private:
        int top;
        tem arr_tem_obj[100];
    public:
        STACK():top(-1){}//default constructor seeing top position to -1 initially

        void push(tem input_value)
        {
            if(top>=(100-1))
            {
                cout<<"Stack Overflow, can't handle that many data you idiot"<<endl;
            }
            else
            {
                arr_tem_obj[++top] = input_value;
            }
        }
        void pop()
        {
            if(top<0)
            {
                cout<<"You have diminished everything grandshire, stack underflow!";
            }
            else
            {
                cout<<"Popped/deleted the stack value/object from the template = "<< arr_tem_obj[top]<<endl;
                top--;
            }
        }
        void display_all_stack()
        {
            if(top<0)
            {
                cout<<"No members in your stack!!!";
            }
            else{
                for(int i = top; i>0;i--)
                {
                    cout<<"Member "<<i<<" = "<<arr_tem_obj[i]<<endl;
                }
            }
        }
};
int main()
{
    STACK <string> haystack;
    char continue_choice;

    do
    {
        int choice;
        string temp_value;
        cout<<"For Push, Press 1"<<endl<<"For Pop, Press 2"<<endl<<"For displaying Stack Values, Press 3"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter value to push: ";
                cin>>temp_value; cout<<endl;
                haystack.push(temp_value);
            case 2:
                cout<<"You chose to pop"<<endl;
                haystack.pop();
            case 3:
                haystack.display_all_stack();
            default:
                cout<<"Enter a valid value retard";
        }
        cout<<"Do you wish to continue?"<<endl;
                cin>>continue_choice;
    } while (continue_choice=='Y' || continue_choice == 'y');
        
    return 0;
}