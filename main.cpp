#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
bool win;
class Player {
private:
    int money, kase;
    string name;
public:
    Player()
    {
        money=10;
        kase=4;
        name="Dad";
    }
    Player(int m, int k, string n)
    {
        money=m;
        kase=k;
        name=n;
    }
    int get_money()
    {
        return money;
    }
    void set_money(int m)
    {
        money=m;
    }
    int get_kase()
    {
        return kase;
    }
    void set_kase(int k)
    {
        kase=k;
    }
    string get_name ()
    {
        return name;
    }
    void set_name(int n)
    {
        name=n;
    }
};


class Cases {
private:
    int outnum;
    float caseval;
public:
    Cases()
    {
        outnum=12;
        caseval=8000;
    }
    Cases (int on, float cv)
    {
        outnum=on;
        caseval=cv;
    }
    void set_on(int on)
    {
        outnum=on;
    }
    int get_on()
    {
        return outnum;
    }
    void set_cv(float cv)
    {
        caseval=cv;
    }
    float get_cv()
    {
        return caseval;
    }
};
void cases(vector<Cases> &ce)
{
    for(int i=0; i<ce.size(); i++)
    {
        cout<<"Case number: "<<ce[i].get_on()<<"\n";
    }
}
void cases_show(vector<Cases> &ce)
{
    for(int i=0; i<ce.size(); i++)
    {
        cout<<"Case number: "<<ce[i].get_on()<<"\n";
        cout<<"Case value: "<<ce[i].get_cv()<<"\n\n";
    }
}
void formula (vector<Cases> &ce)
{
    float sum=0; int choose;
    for (int i=0; i<ce.size(); i++)
    {
        sum=ce[i].get_cv()+sum;
    }
    cout<<"Offer: "<<sum/ce.size()<<"\n[1]Accept or [2]Decline?\n";
    cin>>choose;
    while (!cin.good()||choose!=1&&choose!=2)
    {
        cin.clear();
        cin.sync();
        cout<<"Invalid, enter valid number\n";
        cin>>choose;
    }
    if (choose==1)
    {
        cout<<"Congrats you won $"<<sum/ce.size()<<"\n";
        win=true;

    }
    if (choose==2)
    {
        cout<<"ok\n";
        win=false;
    }

}
int main()
{
    srand(time(0));
    vector <Cases> ce;
    float the_case;
    float stuff[26] = {0.1, 1, 5, 10, 25, 50, 75, 100, 200, 300, 400, 500, 750, 1000, 5000, 10000, 25000, 50000, 100000, 200000, 300000, 400000, 500000, 750000, 1000000};
    vector <float> mixupstuff;
    for (int x=0; x<25; x++)
    {
        for (int y=x+1; y<26; y++)
        {
            if (rand()%2==1)
            {
                float temp=stuff[x];
                stuff[x]=stuff[y];
                stuff[y]=temp;
            }
        }
    }

    for(int i=0;i<26;i++)
    {
        Cases temp(i+1, stuff[i]);
        ce.push_back(temp);
    }
    int choice;
    string n;
    cout<<"Enter name\n";
    cin>>n;
    cout<<"Choose your case\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                float the_case=ce[i].get_on();
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    cout<<"Choose 6 cases\n";
    for (int x=0; x<6; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                cout<<"You chose "<<choice<<" with the value of "<<ce[i].get_cv()<<"\n";
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win) {system("pause");return 0;}
    cases(ce);
    cout<<"Choose 5 cases\n";
    for (int x=0; x<5; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 4 cases\n";
    for (int x=0; x<4; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 3 cases\n";
    for (int x=0; x<3; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 2 cases\n";
    for (int x=0; x<2; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 1 cases\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 1 cases\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 1 cases\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 1 cases\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    if (win){system("pause");return 0;}
    cases(ce);
    cout<<"Choose 1 cases\n";
    for (int x=0; x<1; x++)
    {
        cin>>choice;
        while (choice<1||!cin.good()||choice>26)
        {
            cin.clear();
            cin.sync();
            cout<<"Invalid, enter valid number\n";
            cin>>choice;
        }
        bool found=false;
        for (int i=0; i<ce.size(); i++)
        {
            if ((choice)==ce[i].get_on())
            {
                ce.erase(ce.begin()+i);
                found=true;
            }
        }
        if (!found)
        {
            cout<<"Enter valid case number\n";
            x--;
        }
    }
    formula(ce);
    system ("pause");
    return 0;
}