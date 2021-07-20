#include<iostream>
#include<list>
#include<vector>
using namespace std;

 
// ------------------Find the first integer value of 1st -ve number from window size k---------
int slidingwindow2(  int funarr[] ,int n,int k){
    vector<int>neg;
    int i=0,j=0;
    
    while(j<n)
    {
         if (funarr[j]<0)
            {
                neg.push_back(funarr[j]);
            }
        if(j-i+1<k)
        {
            j++;
        }
       else if(j-i+1==k)
        {
            if(neg.empty())
            cout<<0<<endl;
            else
            cout<< neg.front()<<endl;
            if(neg.front()==funarr[i]&&!neg.empty())
            {
                neg.erase(neg.begin());
            }

            i++;
            j++;
            

        }
    }
   return 0;
}



// [12,-1,-7,8,-15,30,16,28]- Common Input 

//driver code
int main(){
    
    int size,win_size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the "<<i<<"th number"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the window size"<<endl;
    cin>>win_size;
     slidingwindow2( arr,size,win_size);

    return 0;
}
