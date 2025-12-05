#include<iostream>
#include <string>
#include <vector>
using namespace std;


int getlength(char name[]){
    int count=0;
    for (int  i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//reverse a string 
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}

//check palindrome
char toLowerCAse(char ch){
    if ((ch>='a' && ch<='z' ) || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;                                      
    }
}

bool checkPalindrome(char s[],int n){
    int st=0;
    int e=n-1;
    while (st<=e)
    {
        if (toLowerCAse(s[st])!=toLowerCAse(s[e]))
        {
            return 0;
        }
        else{
            st++;
            e--;

        }
    }
    return 1;
}

//palindrome for string 
// char toLowerCAse(char ch){
//     if ((ch>='a' && ch<='z' ) || (ch>='0' && ch<='9'))
//     {
//         return ch;
//     }
//     else{
//         char temp=ch-'A'+'a';
//         return temp;                                      
//     }
// }

//valid palindrome
bool checkPalindrome2(string a){
    int s=0;
    int e=a.length()-1;
    while (s<=e)
    {
        if ((a[s])!=(a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;

        }
    }
    return 1;
}
bool valid(char ch){
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    {
        return 1;
    }
    else{
        return 0;
    }
}

bool isValidPalindrome(string s){
    string temp="";
    //remove unwanted char
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
        
    }//lowercase convertion
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i]=tolower(temp[i]);
    }
    //check palindrome
    return checkPalindrome2(temp);
    
}

//reverse words in a string 2
void reverseString(string &s,int x,int y){
    while(x<=y){
        swap(s[x],s[y]);
        x++;
        y--;
    }
}

//maxi occu char
char getMaxOccChar(string s){
    int arr[26]={0};

    //create an arrY OF COUNT OF CHAR
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        int number=0;
        if (ch>='a' && ch<='z')
        {
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }

    //find max pcc char
    int maxi=-1;
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }

    }
    char finalAns='a'+ans;
    return finalAns;    
}

//replace spaces
string replaceSpaces(string &str){
    string temp="";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

//remove all occurances of a sub string
string remAllOccOfSubsstring(string s,string part){
    while (s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

//permutation in string

 bool checkEqual(int a[26],int b[26]){
    for (int i = 0; i < 26; i++)
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        return 1;
    }
    
 }
bool checkInclusion(string s1,string s2){
    int count[26]={0};
    //char count array
    for (int i = 0; i < s1.length(); i++)
    {
        int index=s1[i]-'a';
        count[index]++;
    }

    //traverse s2 string in window of size s1 and compare
    int i=0;
    int count2[26]={0};
    int windowSize=s1.length();

    //running for 1st window
    while (i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    //checkeqaual
    if(checkEqual(count,count2)){
        return 1;
    }
    
    //aage ki window process
    while (i<s2.length())
    {
        char newCh=s2[i];
        int index=newCh-'a';
        count2[index]++;
        
        char oldCh=s2[i-windowSize];
        index=oldCh-'a';
        count2[index]--;
        i++;
        
        if(checkEqual(count,count2)){
            return 1;
        }
    }
    
    return 0;
    
}

//remove all adjacent duplicate in a string
string removeDup(string s){
    vector<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push_back(s[i]);
        }
        else if (st.back()==s[i])
        {
            st.pop_back();
        }
        else{
            st.push_back(st[i]);
        }
         
    }
    string ans(st.begin(),st.end());
    return ans;
}


//string compression
int compression(vector<char>& chars){
    int i=0;
    int ansIndex=0;
    int n=chars.size();

    while (i<n)
    {
        int j=i+1;
        while (j<n && chars[i]==chars[j] )
        {
            j++;
        }
        //bahar kab aege yato pura vector traverse karke yato condition fail
        //oldChar store karlo
        chars[ansIndex++]=chars[i];

        int count=j-i;
        if (count>1)
        {
            //converting counting into singledigit and saving in ans
            string cnt=to_string(count);
            for (char ch:cnt)
            {
                chars[ansIndex++]=ch;
            }
            
        }
        i=j;
    }
    return ansIndex;


}

int main(){
    // char name[20];
    // cout<<"enter your name"<<endl;
    // cin>>name;
    // cout<<"Your name is ";
    // cout<<name<<" ";
    // int len=getlength(name);
    // cout<<getlength(name)<<endl;
    // reverse(name,len);
    // cout<<name;
    // cout<<"palindrome or not"<<checkPalindrome(name,len);


    //reverseString 
    // string s;
    // getline(cin,s);
    // int x=0,y=0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i]==' ' || s[i]== '\0')
    //     {
    //         y=i-1;
    //         reverseString(s,x,y);
    //         x=i+1;
    //     }
        
    // }
    // //for last word
    // reverseString(s,x,s.length()-1);
    // cout<<s;

    string s;
    cin>>s;

    cout<<getMaxOccChar(s)<<endl;


    return 0;
    
}
