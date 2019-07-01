int lengthOfLongestSubstring(string s) {
           int maxLength =0;
           std::string str;
           int i=0,j=0;

          cout<<s.length();



           while (j < s.length()){
             //cout<< str.find(s.at(j))<<endl;

             if ( str.find(s.at(j))==std::string::npos) {

                 str.push_back(s.at(j));
//                 cout <<"insert\t";
                 j++;
                     maxLength = std::max(maxLength,j-i);

              }else{
  //          	  cout <<"erase\t";
            	  str.erase(str.begin());
            	   i++;

              }
    //         cout<<str<<"\n ";
           }
           return maxLength;
         }

int main(){

cout<<"max"<<lengthOfLongestSubstring("ABDEFGABEF");
 return 0;
}
