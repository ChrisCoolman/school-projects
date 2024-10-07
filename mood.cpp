// Chris Coleman
// 10/7/2024
// Extra: all the emotions

#include <iostream>
using namespace std;

void lines(int num);

int main()
{
    // Anciety, Envy, Embarrassment, Boredom, Disgust, Fear, Joy, Anger, Sadness
    cout << "|-----------------------------------------|" << endl;
    cout << "|         HOW DO YOU FEEL RIGHT NOW       |" << endl;
    lines(1);
    cout << "|               0. Anxiety                |" << endl;
    lines(1);
    cout << "|                1. Envy                  |" << endl;
    lines(1);
    cout << "|             2. Embarrassment            |" << endl;
    lines(1);
    cout << "|               3. Boredom                |" << endl;
    lines(1);
    cout << "|               4. Disgust                |" << endl;
    lines(1);
    cout << "|                5. Fear                  |" << endl;
    lines(1);
    cout << "|                 6. Joy                  |" << endl;
    lines(1);
    cout << "|                7. Anger                 |" << endl;
    lines(1);
    cout << "|               8. Sadness                |" << endl;
    lines(1);
    cout << "|-----------------------------------------|" << endl;
    int num;
    cin >> num;
    switch(num)
    {
        case 0:
            cout << "Always feeling something bad is going to happen\nis called anxiety, not spidey sense\n- Ansh Patel 2024" << endl;
            break;
        case 1:
            cout << "You should be envy of me because im the best literally" << endl;
            break;
        case 2:
            cout << "Did you slip on a bannana peel or something?" << endl;
            break;
        case 3:
            cout << "If your bored play fortnite the new season starts sometime" << endl;
            break;
        case 4:
            cout << "Im disgusted by eggs" << endl;
            break;
        case 5:
            cout << "Im scared of everything" << endl;
            break;
        case 6:
            cout << "You remind me of everything good in the world\n - Paul Rowe 2024" << endl;
            break;
        case 7:
            cout << "Valorant makes me angry\n - Chris Coleman 2024" << endl;
            break;
        case 8:
            cout << "Im sad that the current fortnite season is going to end" << endl;
            break;
        default:
            cout << "Please enter a number 0 - 8" << endl;
            break;
    }
}

void lines(int num)
{
    for(int i = 0; i < num; i++)
    {
        cout << "|                                         |" << endl;
    }
}