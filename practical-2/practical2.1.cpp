#include<iostream>
using namespace std;
class rectangle
{
private:
    float length,width;
public:
    void getdata();
    void rect_area();
    void rect_parameter();
    void update(float l,float w);
};
void rectangle :: getdata()
{

    cout<<"enter length of plot:";
    cin>>length;
    cout<<" enter width of plot:";
    cin>>width;

}
void rectangle ::  rect_area()
{
    cout<<"\n area of plot:"<<length*width;
}
void rectangle :: rect_parameter()
{
    cout<<"\n parameter of plot:"<<2*(length+width);
}
void rectangle :: update(float l,float w)
{
   length = l;
   width = w;
}
int main()
{
  int num;
    cout<<"how many plot data you want to add:";
    cin>>num;
    rectangle b[num];
  p:  cout<<" \n 1.add plot data \n 2.calculate_area \n 3.calculate_parameter \n 4.update_values \n 5.exit";
    int ch,rect_num,i,n;
    float l,w;


    cin>>ch;
    switch(ch)
    {
    case 1:

        for(i=0; i<num; i++)
        {
            cout<<(i+1) ;
            b[i].getdata();

        }
        goto p;
    case 2:
        for(i=0; i<num; i++)
        {
            b[i].rect_area();

        }
        goto p;
    case 3:
        for(i=0; i<num; i++)
        {
            b[i].rect_parameter();


        }
        goto p;
    case 4:

        cout<<"\n enter number of rectangle for changes :";
        cin>>n;
        cout<<"enter new values of plot:";
        cin>>l>>w;
        if(n<=num)
        {
            b[n-1].update(l,w);
        }
        else
        {
            cout<<"rectangle not fount";
        }
        goto p;
    case 5:
        cout<<"thank you";
        break;
    default:
        cout<<"enter valid choice";


    }
    cout<<"25ce008-bhesdadiya palasi";
    return 0;

}


