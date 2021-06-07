#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
typedef struct Fraction{
	long long u,d;
}fs;
long long gcd(long long a,long long b)
{ 
	return !b? a:gcd(b,a%b);
}
fs fsrd(fs f)
{
	if(f.d<0) f.d=-f.d,f.u=-f.u;
	if(f.u==0) f.d=1;
	else
	{
		long long d=gcd(abs(f.u),f.d);
		f.u/=d;
		f.d/=d;
	} 
	return f;
}
fs fsadd(fs fa,fs fb)
{
	fs f;
	f.u=fa.u*fb.d+fb.u*fa.d;
	f.d=fa.d*fb.d;
	return fsrd(f);
}
fs fssub(fs fa,fs fb)
{
	fs f;
	f.u=fa.u*fb.d-fb.u*fa.d;
	f.d=fa.d*fb.d;
	return fsrd(f);
}
fs fsmul(fs fa,fs fb)
{
	fs f;
	f.u=fa.u*fb.u;
	f.d=fa.d*fb.d;
	return fsrd(f);
}
fs fsdiv(fs fa,fs fb)
{
	fs f;
	f.u=fa.u*fb.d;
	f.d=fa.d*fb.u;
	return fsrd(f);
}
void fsf(fs f)
{
	f=fsrd(f);
	if(f.u<0) printf("(");
	if(f.d==1) printf("%lld",f.u);
	else if(abs(f.u)>f.d)
		printf("%lld %lld/%lld",f.u/f.d,abs(f.u)%f.d,f.d );
	else printf("%lld/%lld",f.u,f.d);
	if(f.u<0) printf(")");
}
int main()
{
	fs fa,fb;
	scanf("%lld/%lld %lld/%lld",&fa.u,&fa.d,&fb.u,&fb.d);
	fsf(fa);printf(" + ");fsf(fb);printf(" = ");fsf(fsadd(fa,fb));printf("\n");
	fsf(fa);printf(" - ");fsf(fb);printf(" = ");fsf(fssub(fa,fb));printf("\n");
	fsf(fa);printf(" * ");fsf(fb);printf(" = ");fsf(fsmul(fa,fb));printf("\n");

	fsf(fa);printf(" / ");fsf(fb);printf(" = ");
	if(fb.u==0) printf("Inf");
	else fsf(fsdiv(fa,fb));
	return 0;
}