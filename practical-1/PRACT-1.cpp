#include<iostream>
using namespace std;
class wallet_details
{
private:
    string name;
    int ID;
    float current_balance;
public:
    void getdata();
    void transfer_money(wallet_details &reciever);
    void display_data();
    void load_money();
};
void wallet_details::getdata()
{
    cin.ignore();
    cout<<"enter the name of user: ";
    getline(cin,name);
    cout<<"enter wallet ID: ";
    cin>>ID;
    cout<<"wallet balance: ";
    cin>>current_balance;
}
void wallet_details::display_data()
{
    cout<<"============wallet details============ \n";
    cout<<"user name:"<<name<<endl;
    cout<<"wallet id:"<<ID<<endl;
    cout<<"wallet balance:"<<current_balance<<endl;
    cout<<"===================================== \n";

}
void  wallet_details::load_money()
{
    float amount;
    cout<<"enter money which you want to load :";
    cin>>amount;
    if(amount>0)
        current_balance+=amount;
    else
        cout<<"amount never nagative.";

}
void  wallet_details::transfer_money(wallet_details &reciever)
{
    float amount;
    cout<<"enter the amount which to want to transfer from the wallet \n";
    cin>>amount;
    if(amount>current_balance||amount<=0)
    {
        cout<<"enter valid amount. \n";
    }
    else
    {
        current_balance-=amount;
        reciever.current_balance+=amount;

    }

}

int main()
{
    wallet_details w1,w2;
    int ch,choice,n;
    w1.getdata();
    w2.getdata();
    do
    {
        cout<<" 1.load money \n 2.transfer money \n 3.display details \n 4.exit \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter wallet number:";
            cin>>choice;
            if(choice==1)
            {
                w1.load_money();
            }
            else if(choice==2)
            {
                w2.load_money();
            }
            else
            {
                cout<<"oops!!wallet not found\n";
            }
            break;
        case 2:
            cout<<"choose wallet for transfer money \n";
            cout<<"enter 1 for transfer money from wallet_1 \n";
            cout<<"enter 2 for transfer money from wallet_2 \n";
            cin>>choice;
            if(choice==1)
            {
                w1.transfer_money(w2);
            }
            else if(choice==2)
            {
                w2.transfer_money(w1);
            }
            else
            {
                cout<<"oops!!wallet not found\n";
            }
            break;
        case 3:
            w1. display_data();
            w2. display_data();
            break;
        case 4:
            cout<<"exit \n ";
            break;
        default:
            cout<<"enter valid choice\n";
            break;

        }

    }
    while(ch!=4);
    cout<<"25CE008_bhesdadiya palsi";
    return 0;
}


