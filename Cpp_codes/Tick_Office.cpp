#include <iostream>
using namespace std;

int main()
 {
    float ages[5];

    for (int i = 0; i < 5; ++i)
    {
        cin >> ages[i];
    }
    //getting least age and operate on it 
    if (ages[0]<ages[1]&&ages[0]<ages[2] 
        &&ages[0]<ages[3]&&ages[0]<ages[4])
    {
       cout<< (50-((ages[0]*50)/100));
    }
    else if(ages[1]<ages[2]&&ages[1]<ages[3] &&ages[1]<ages[4])
    {
       cout<< (50-((ages[1]/100)*50));  
    }
    else if(ages[2]<ages[3]&&ages[2]<ages[4])
    {
      cout<< (50-((ages[2]*50)/100));   
    }
    else if (ages[3]<ages[4])
    {
      cout<< (50-((ages[3]*50)/100));
    }
    else
    {
        cout<< (50-((ages[4]*50)/100));
    }
    return 0;
}