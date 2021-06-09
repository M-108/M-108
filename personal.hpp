#ifndef PERSONAL_HPP
#define PERSONAL_HPP
string th(int n)
{
	string s1="st";
	string s2="nd";
	string s3="rd";
	string s0="th";
	if(n==11 or n==12) return s0;
	else if(n%10==1) return s1;
	else if(n%10==2) return s2;
	else if(n%10==3) return s3;
	else return s0;
}
  
#endif
