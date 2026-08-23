#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n=0;
    int choice;
    do{
        cout << "\n----- MENU -----" << endl;
        cout<<"1. CREATE"<<endl;
        cout<<"2. DISPLAY"<<endl;
        cout<<"3. INSERT"<<endl;
        cout<<"4. DELETE"<<endl;
        cout<<"5. LINEAR SEARCH"<<endl;
        cout<<"6. EXIT"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;    //select ur choice
        switch(choice){
            case 1: //create array
                cout<<"Enter no. of elements:";
                cin>>n;
                cout << "Enter "<< n<<" elements:"<< endl;
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                cout<<"array created successfully!";
                break;
            case 2: //display array
                if(n==0)
                    cout<<"array is empty!";
                else{
                    for(int i=0;i<n;i++){
                        cout<<arr[i]<<" ";
                    }
                }
                break;
            case 3: //inserting in an array
                {int pos,value;
                cout<<"Enter position:";
                cin>>pos;
                cout<<"Enter value:";
                cin>>value;
                if(pos<0 || pos>n)
                    cout<<"Invalid"<<endl;
                else{
                    for(int i=n;i>pos;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[pos]=value;
                    n++;
                }
                cout<<"value inserted successfully!";
                break;}
            case 4: // deleting from array
                {int pos;
                cout<<"enter pos to delete:";
                cin>>pos;
                if(pos<0 || pos>=n)
                    cout<<"Invalid"<<endl;
                else{
                    for(int i=pos;i<n-1;i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                }
                break;}
            case 5://linear search
               {
                int value;
                cout<<"Enter value to search:";
                cin>>value;
                int found=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==value){
                        cout<<"value found at pos:"<<i;
                        found=1;
                        break;
                }}
                if(found==0)
                    cout<<"not found";
                break;
                }
        
           case 6://exit
                exit(0);
    }}
    while(choice!=6);
    }