bool uniqueString(string& input){
  unordered_map<char,int> dict;
  
  for(int i = 0; i<input.size(); i++){
    if(dict.find(input[i]) != dict.end())
      return false;
    else
      dict[input[i]] = 1;
  
  }
  return true;


}
