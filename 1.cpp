   #include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	for(c=min(a,b)/2;c>=2;c--){
	if(a%c==0&&b%c==0)break;
	}
	cout<<c;
}





