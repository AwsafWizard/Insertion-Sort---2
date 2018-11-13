#include <iostream>

using namespace std;

int main()
{
    int n, a, num;
    cin >> n;

    int arr[n+1];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=1; i<n; i++){

        num = arr[i];

        for(int j=(i - 1); j>=0; j--){

            if(num < arr[j]){
                a = arr[j];
                arr[j] = num;
                arr[j+1] = a;
            }else break;
        }

        for(int i=0; i<n; i++)
            cout << arr[i] << " ";

        cout << endl;

    }


    return 0;
}
