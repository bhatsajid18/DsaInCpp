#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;




int sumXor(int n) {
    int y = (n);
    int oneCount=0,digitCount=0;
    while (n) {
        n = n&(n-1);
        oneCount++;
    }
    while (y)
    {
        y= (y>>1);
        digitCount++;
    }
    
    
    int ans=1;
    int count=digitCount-oneCount;
    while (count--) {
        ans*=2;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    // for(int i=0;i<=n;i++)
    cout<<sumXor(n)<<endl;
}

/*
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=n*(n-1)/2;
    string res[x];
    int mx=-1,st=0;
            int flag=0;
    for(int i=0;i<n-1;i++){
        string s1=a[i];
        for(int j=i+1;i<n;i++){
            res[st]="";
            st++;
            string s2=a[j];
            // int ans=0;
            for(int k=0;k<m;k++){
                if(s1[k]=='1' || s2[k]=='1'){
                        // ans++;
                        res[st]+="1";
                }else{
                    res[st]+="0";
                }
            }
            // if (ans>mx) {
            //     mx=ans;
            //     flag=1; 
            //     // st=flag;
            // }
            // else if (ans==mx) {
            //     flag++;
            // // st=flag;
            // }
            // mx=max(mx,ans);
        }
        int l;
        for (int i = 0; i < x; i++)
        {
            flag=0;
            for(int j=0;j<m;j++){
                if (res[i][j]=='1')
                {
                    flag++;
                }
                
            }
            if (flag>mx)
            {
                mx=flag;
            }
            
        }
        
    }
    cout<<mx<<endl<<flag<<endl;
}
*/




// int howManyGames(int p, int d, int m, int s) {
//     // Return the number of games you can buy
//     int x=0,cost=p;
//     while (s>=0) {
//         if (cost<=m) {
//             s-=m;
//         }else{
//             s-=(p-x*d);
//         }
//         x++;
//         cost=p-x*d;
//     }
//     return x-1;
// }

// int main()
// {
//     int p,d,m,s;
//     cin>>p>>d>>m>>s;
//     cout<<howManyGames(p,d,m,s);
// }




// int main()
// {
//     int n;
//     cin>>n;
//     int mn=-1;
//     long long a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
        
//     for(int i=0;i<n-1;i++){
//         // int curr
//         for(int j=i+1;j<n;j++){
//             if (a[i]==a[j]) {
//                 mn=min(mn,j-1);
//             }
//         }
//     }
//     cout<<mn;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     string a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int b[n][n];
//     for (int i=0;i<n;i++) {
//         for(int j=0;j<n;j++){
//             b[i][j]=a[i][j]-'0';
//         }
//     }
//     for (int i=1;i<n-1;i++) {
//         for(int j=1;j<n-1;j++){
//             if (b[i][j]>b[i-1][j] && b[i][j]>b[i+1][j] && b[i][j]>b[i][j-1] && b[i][j]>b[i][j+1]) {
//                 b[i][j]=-1;
//             }
//         }
//     }
    
//     string ans[102]={""};
//     for (int i=0;i<n;i++) {
//         for(int j=0;j<n;j++){
//             if (b[i][j]==-1) {
//                 ans[i]+='X';
//             }
//             else{
//                 ans[i]+=(b[i][j]+'0');
//             }
//         }
//     }
//     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<endl;
//     }
// }




// int main()
// {
//     vector<int> v;
//     int q,t=1;
//     cin>>q;
//     while (t<=q) {
//         int n;
//         cin>>n;
        
//         bool flag=false;
//         int sum[101]={0};
//         int a[n][n];
        
//         for (int i=0; i<n; i++) {
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//         }
//         for (int i=0; i<n; i++) {
//             for(int j=0;j<n;j++){
//                 sum[i]+=a[j][i];
//             }
//         }
//         for(int i=0;i<n-1;i++){
//             if (sum[i]!=sum[i+1]) {
//                 v.push_back(0);
//                 flag=true;
//                 break;
//             }
//         }
//         if (!flag) {
//             v.push_back(1);
//         }
//         t++;
//     }
//     for(int i=0;i<v.size();i++){
//         if (v[i]==0)
//         {
//             cout<<"Impossible"<<endl;
//         }else{
//             cout<<"Possible"<<endl;
//         }
        
        
//     }
// }


//Chocolate-Wrapper problem
// int main()
// {
//     int t;
//     int x=1;
//     cin>>t;
//     int a[t];
//     while (x<=t) {
//         int n,c,m;
//         cin>>n>>c>>m;
//         int count=0;
//         int moneyLeft=n;
//         int wrapperLeft=n/c;
//         do {
//             count+=moneyLeft/c + wrapperLeft/m;
//             moneyLeft=moneyLeft%c;
//             wrapperLeft=(wrapperLeft%m)+(wrapperLeft/m);
//         }while (wrapperLeft>=m);
//         a[x-1]=count;
//         x++;
//     }
//     for(int i=0;i<t;i++){
//         cout<<a[i]<<endl;
//     }
// }



// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     string a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
    
//     int mx=-1,flag;
//     for(int i=0;i<n-1;i++){
//         string s1=a[i];
//         for(int j=i+1;i<n;i++){
//             string s2=a[j];
//             int ans=0;
//             for(int k=0;k<m;k++){
//                 if(s1[k]=='1' || s2[k]=='1'){
//                     ans+=1;
//                 }
//             }
//             if (ans>mx){
//                 mx=ans;
//                 flag=1;
//             }
            
//             else if (ans==mx) {
//                 flag+=1;
//             }
//             s2.clear();
//         }
//         s1.clear();
//     }
//     cout<<mx<<endl<<flag<<endl;
// }



// //reverse of a number using recursion
// int noOfDigits(int x){
//     if (x<=9){
//         return 1;
//     }
//     return 1+noOfDigits(x/10);
// }
// int reverse(int n) {
//     static int i=noOfDigits(n);
//     if (n==0) {
//         return 0;
//     }
//     i--;
//     return (n%10)*pow(10,i) + reverse(n/10);
// }

// int main(){
//     cout<<reverse(123)<<endl;
// }