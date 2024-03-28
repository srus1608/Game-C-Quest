#include <iostream>
#include <time.h>
using namespace std;

int main()
{
srand(time(0));
    int score = 0; //to store score

    //starter menu
startermenu:
{
    int level;
    cout << "Select your Level" << endl;
    cout << "1: Easy" << endl;
    cout << "2: Moderate" << endl;
    cout << "3: Hard" << endl;
    cout << "Type 1,2 or 3 \n";
    cin >> level;

    switch (level)
    {
    case 1:
    {
        goto easy;
        break;
    }
    case 2:
    {
        goto moderate;
        break;
    }
    case 3:
    {
        goto hard;
        break;
    }

    default:
    {   cout<<endl;
        cout << "Invalid Entry !!" << endl;
        goto startermenu;
    }
    }
} //easy level code
easy:

cout<<"This is Easy level\n";
{  int n=1;
   while(n<3)  //loop for repeating qustions
   {
    eq1: //easy question 1
{
    int e1 = (rand() %

              (20 - 1 + 1)) +   //random number generator
             1;

    int e2 = (rand() %

              (10 - 1 + 1)) +   //random number generator
             1;
    int ans;

    cout << "What is " << e1 << " + " << e2 << endl;
    cin >> ans;
    //answer checker
    if (ans == (e1 + e2))
    {
        cout << "That's Correct\n";
        cout << endl;
        score = score + 10;

        cout << "Your Score is " << score << endl;
        cout << endl;
        
    }
    else
    {
        cout << " opps!!\n Wrong Answer!!" << endl;
        cout << "Correct Answer is " << e1 + e2 << endl;
        cout << "Try Again\n";
        score = score - 5;
        cout << endl;
        cout << "Your Score is " << score << endl;
        
    }
}

eq2: //easy question 2
{
    int e1 = (rand() %

              (9 - 1 + 1)) +
             1;

    int e2 = (rand() %

              (9 - 1 + 1)) +
             1;
    int ans;

    cout << "What is " << e1 << " * " << e2 << endl;
    cin >> ans;
    if (ans == (e1 * e2))
    {
        cout << "That's Correct\n";
        cout << endl;
        score = score + 10;

        cout << "Your Score is " << score << endl;
        cout << endl;
        
    }
    else
    {
        cout << "opps!!\n Wrong Answer!!" << endl;
        cout << "Correct Answer is " << e1 * e2 << endl;
        cout << "Try Again\n";
        score = score - 5;
        cout << endl;
        cout << "Your Score is " << score << endl;
        
    }
}
 n++; //incrementor to make loop work for 2 times
   }

  int m=1; //declaration of m to use it
  while(m<3) //loop for repeating questions 2 times
  { eq3: //easy question 3
{
    int e1 = (rand() %

              (20 - 1 + 1)) +
             1;

    int e2 = (rand() %

              (20 - 1 + 1)) +
             1;
    int e3 = (rand() %

              (20 - 1 + 1)) +
             1;
    int ans;

    cout << "What is " << e1 << " + " << e2 << " - " << e3 << endl;
    cin >> ans;
    if (ans == (e1 + e2 - e3))
    {
        cout << "That's Correct\n";
        cout << endl;
        score = score + 10;

        cout << "Your Score is " << score << endl;
        cout << endl;
        
    }
    else
    {
        cout << "opps!!\n Wrong Answer!!" << endl;
        cout << "Correct Answer is " << e1 + e2 - e3 << endl;
        cout << "Try Again\n";
        score = score - 5;
        cout << endl;
        cout << "Your Score is " << score << endl;
        
    }
}

eq4:
{
    int e1 = (rand() %

              (20 - 1 + 1)) +
             1;

    int e2 = (rand() %

              (20 - 1 + 1)) +
             1;
    int e3 = (rand() %

              (20 - 1 + 1)) +
             1;
    int ans;

    cout << "What is " << e1 << " * " << e2 << " - " << e3 << endl;
    cin >> ans;
    if (ans == (e1 * e2 - e3))
    {
        cout << "That's Correct\n";
        cout << endl;
        score = score + 10;

        cout << "Your Score is " << score << endl;
        cout << endl;
        // goto easy1;
    }
    else
    {
        cout << "opps\n Wrong Answer!!" << endl;
        cout << "Correct Answer is " << e1 * e2 - e3 << endl;
        cout << "Try Again\n";
        score = score - 5;
        cout << endl;
        cout << "Your Score is " << score << endl;
        // goto easy1;
    }
}

eq5:
{
    int e1 = (rand() %

              (20 - 1 + 1)) +
             1;

    int e2 = (rand() %

              (10 - 1 + 1)) +
             1;
    int e3 = (rand() %

              (10 - 1 + 1)) +
             1;
    int ans;

    cout << "What is " <<"("<< e1 << " - " << e2<<")" << " * " << e3 << endl;
    cin >> ans;
    if (ans == ((e1 - e2) * e3))
    {
        cout << "That's Correct\n";
        cout << endl;
        score = score + 10;

        cout << "Your Score is " << score << endl;
        cout << endl;
        
    }
    else
    {
        cout << "opps\n Wrong Answer!!" << endl;
        cout << "Correct Answer is " << (e1 - e2) * e3 << endl;
        cout << "Try Again\n";
        score = score - 5;
        cout << endl;
        cout << "Your Score is " << score << endl;
        
    }
}
 
 m++; //incrementor to run loop only for 2 times
  }

    int response;
    cout<<endl; //line break

    cout<<"Well Done\n";
    cout<<endl;

  response : {
        cout << "1: Continue with same level !!\n";
            cout << "2: Change level\n";
            cout << "3: Exit !!\n";
            cin >> response;

            switch (response)
            {
            case 1:
            {
                goto easy;
            }
            break;
            case 2:
            {
                goto startermenu;
            }
            break;
            case 3:
            {
                goto exit1;
            }
            break;

            default:
            {  
                cout<<endl;
                cout<<"Invalid Response !!\n";
                goto response;
            }
            break;
            }
   }
    return 0;
}
  //moderate level code
moderate:
{

    cout << "Moderate level is under construction";
    return 0;
}
  //hard level code
hard:
{

    cout << "Hard level is under construction";
    return 0;
}
exit1:
{
    
    cout << "Thanks for playing this Game :-) \n";

    return 0;
}

    return 0;
}