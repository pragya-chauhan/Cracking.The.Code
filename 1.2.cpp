bool checkPermutation(string& input1, string & input2){
  unordered_map<char, int> dict;
  
  for(int i = 0; i<input1.size();i++){
    if(dict.find(input1[i]) != dict.end()){   //found
      dict[input1[i]]++;
    }
    else{     //not found
      dict[input1[i]] = 1;
    }
  }
  
  for(int i = 0 ; i<input2.size();i++){
    if(dict.find(input2[i]) != dict.end() ) {//found
      if(dict[input2[i]] > 1)
        dict[input2[i]]--;
      else
        dict.erase(input2[i]);
        }
        else      //not found
          return false;
          
        
  }
  if(dict.empty())
    return true;
   else
    return false;
  


}
