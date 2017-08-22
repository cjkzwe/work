#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int a[1005],b[1005],c[1005];

bool lt(int a[], int b[]) {
        if (a[0]!=b[0]) 
                    return a[0] < b[0];
            for (int i=a[0];i>0;i--)if (a[i]!=b[i] )return a[i] < b[i];
                return false;   
}//recited

void div(int a[]) {
        for(int i=a[0];i>=1;i--){
                    if(a[i]%2==1) 
                                    a[i-1]+=10;
                            a[i]=a[i]/2;
                                }
            if (a[0] > 0 && a[a[0]] == 0) a[0]--;
}
//need recite
void subtract(int a[],int b[]) {
        for(int i=1;i<=a[0];i++){
                    a[i]=a[i]-b[i];
                            if (a[i]<0) {
                                            a[i]+=10;
                                                        a[i+1]-=1;
                                                                }
                                }
            while(a[a[0]]==0) {
                        if (a[0] == 0) return;
                                a[0]--;
                                    }
}

void times2(int a[]){
        int carry = 0;
            for(int i=1;i<=a[0];i++){
                        int q = carry + a[i] * 2;
                                a[i] = q % 10;
                                        carry = q / 10;
                                            }
                if (carry > 0) {
                            a[0]++;
                                    a[a[0]] = carry;
                                        }
}//recited
int cnt = 0;
void gcd(int a[],int b[]){  
        if (a[0]==0 ||b[0]==0)
                   return;
            if (a[1]%2==0&&b[1]%2==0){
                            div(a);
                                        div(b);
                                                    cnt++;
                                                                gcd(a,b);
                                                                    }
                else if (a[1]%2==0){
                            div(a);
                                    gcd(a,b);
                                        }
                    else if (b[1]%2==0) {
                                div(b);
                                        gcd(a,b);
                                            }
                        else if (lt(a,b)){
                                    subtract(b,a);
                                            gcd(a,b);
                                                } else {
                                                            subtract(a,b);
                                                                    gcd(a,b);
                                                                        }
}

void read(int a[]) {
      string s;
        cin >> s;
          a[0] = s.size();
            for (int i = 0; i < s.size(); i++)
                    a[a[0]-i] = s[i] - '0';
}

int main(){
        read(a);
            read(b);
                gcd(a,b);
                    if (a[0] > 0) {
                                while (cnt-->0) {
                                                times2(a);
                                                        }
                                        for(int i=a[0];i>0;i--)cout<<a[i];
                                            } else {
                                                        while (cnt-->0) {
                                                                        times2(b);
                                                                                }
                                                                for(int i=b[0];i>0;i--)cout<<b[i];
                                                                    }
                        return 0;
}
