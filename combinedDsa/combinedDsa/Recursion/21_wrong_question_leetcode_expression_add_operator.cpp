////
////  21_expression_add_operator.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////void customFunc(string s,int i,vector<string>&arr){
////    
////    if(i == s.length()-1){
////        arr.push_back(s);
////        return;
////    }
////    
////    //add +
////    customFunc(s.substr(0,i+1)+'+'+s.substr(i+1,s.length()-i+1), i+2, arr);
////    
////    //add -
////    customFunc(s.substr(0,i+1)+'-'+s.substr(i+1,s.length()-i+1), i+2, arr);
////    
////    //add *
////    customFunc(s.substr(0,i+1)+'*'+s.substr(i+1,s.length()-i+1), i+2, arr);
////    
////    //add /
//////    customFunc(s.substr(0,i+1)+'/'+s.substr(i+1,s.length()-i+1), i+2, arr);
////}
////
////int stringToResult(string s){
////    
////    for(int i = 0;i<s.length();i++){
////        if(s[i] == '/'){
////            
//////            if((s[i-1] - 48) > INT_MAX || (s[i+1] - 48) > INT_MAX || ((s[i-1]-48) / (s[i+1]-48)) > INT_MAX)return 0;
////            if(s[i+1] == '0') return 0;
////            s = s.substr(0,i-1) + to_string((s[i-1]-48) / (s[i+1]-48)) + s.substr(i+2,s.length()-i-1);
////            i--;
////        }
////    }
////    
////    for(int i = 0;i<s.length();i++){
////        if(s[i] == '*'){ 
//////            if((s[i-1] - 48) > INT_MAX || (s[i+1] - 48) > INT_MAX || ((s[i-1]-48) * (s[i+1]-48)) > INT_MAX)return 0;
////            s = s.substr(0,i-1) + to_string((s[i-1]-48) * (s[i+1]-48)) + s.substr(i+2,s.length()-i-1);
////            i--;
////        }
////    }
////    
////    for(int i = 0;i<s.length();i++){
////        if(s[i] == '+'){
////
////            s = s.substr(0,i-1) + to_string((s[i-1]-48) + (s[i+1]-48)) + s.substr(i+2,s.length()-i-1);
////            i--;
////        }
////    }
////    
////    for(int i = 0;i<s.length();i++){
////        if(s[i] == '-'){ 
//////            if((s[i-1] - 48) > INT_MAX || (s[i+1] - 48) > INT_MAX || ((s[i-1]-48) - (s[i+1]-48)) > INT_MAX)return 0;
////            s = s.substr(0,i-1) + to_string((s[i-1]-48) - (s[i+1]-48)) + s.substr(i+2,s.length()-i-1);
////            i--;
////        }
////    }
////
////    
////    return int(s[0]-48);
////
////}
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////the question requires only +,-,* oprator but i used / also so wrong
//
////void customFunc(string s,int i,vector<string>&arr,int target,int result,int prev1,int prev2,char prevOp){
////
////    if(i == s.length()-1 && result == target){
////        arr.push_back(s);
////        return;
////    }
////    
////    if(i>= s.length()-1){
////        return;
////    }
////
////    //add -
////    customFunc(s.substr(0,i+1)+'-'+s.substr(i+1,s.length()-i+1), i+2, arr,target,result-(s[i+1]-48),result,s[i+1]-48,'-');
////    
////    //add +
////    if(prevOp == '-'){
////        customFunc(s.substr(0,i+1)+'+'+s.substr(i+1,s.length()-i+1), i+2, arr,target,prev1 - (prev2+(s[i+1]-48)),result,s[i+1]-48,'+');
////    }else{
////        customFunc(s.substr(0,i+1)+'+'+s.substr(i+1,s.length()-i+1), i+2, arr,target,result+(s[i+1]-48),result,s[i+1]-48,'+');
////    }
////    
////
////    //add *
////    if(prevOp == '+'){
////        customFunc(s.substr(0,i+1)+'*'+s.substr(i+1,s.length()-i+1), i+2, arr,target,prev1 + (prev2*(s[i+1]-48)),result,s[i+1]-48,'+');
////    }else if(prevOp == '-'){
////        customFunc(s.substr(0,i+1)+'*'+s.substr(i+1,s.length()-i+1), i+2, arr,target,prev1 - (prev2*(s[i+1]-48)),result,s[i+1]-48,'+');
////    }else{
////        customFunc(s.substr(0,i+1)+'*'+s.substr(i+1,s.length()-i+1), i+2, arr,target,result*(s[i+1] - 48),result,s[i+1]-48,'*');
////    }
////    
////
////}
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// the question requires 1 digit or 2 digits or 3 digits or any number of digits to be included so as to give target ex 123  -> 12+3......
///// language problem in question because digit only means 0 to 9
/////
/////
/////correct code  below
/////
////void recursiveCall(int i, string sumPath, long sum, long prev, string num, int target, vector<string> &result){
////    if(i==num.size()){
////        if(sum == target){
////            result.push_back(sumPath);
////        }
////        return;
////    }
////
////           
////        for (int j = i; j < num.size(); j++){
////            if (j > i && num[i] == '0'){
////                break;
////            }
////            long number = stol(num.substr(i, j - i + 1));
////            string tempPath = num.substr(i, j - i + 1);
////            if(i == 0){
////                recursiveCall(j + 1, tempPath, number, number, num, target, result);
////            }else{
////                recursiveCall(j + 1, sumPath + '+' + tempPath, sum + number, number, num, target, result);
////                recursiveCall(j + 1, sumPath + '-' + tempPath, sum - number, -number, num, target, result);
////                recursiveCall(j + 1, sumPath + '*' + tempPath, sum - prev + (prev *number), prev *number, num, target, result);
////                }
////            }
////        }
////
//void customFunc(vector<string>&ans,int i,long result,long prev,string num,int target,string resultPath){
//    
//    if(i == num.size()){
//        if(result == target){
//            ans.push_back(resultPath);
//        }
//        return;
//    }
//    
//    
//    for(int j = i;j<num.size();j++){
//        
//        
//        //avoid leading zeroes
//        if(j>i && num[i] == '0'){
//            break;
//        }
//        
//        long number = stol(num.substr(i,j-i+1));
//        string tempPath = num.substr(i,j-i+1);
//        
//        if(i == 0){
//            customFunc(ans,j+1,number,number,num,target,tempPath);
//        }else{
//            customFunc(ans,j+1,result+number,number,num,target,resultPath+ '+' + tempPath);
//            customFunc(ans,j+1,result-number,-number,num,target,resultPath+ '-' + tempPath);
//            customFunc(ans,j+1,result - prev + (prev*number),prev*number,num,target,resultPath+ '*' + tempPath);
//        }
//    }
//    
//}
//
//
//
//
//
//
//
//
//vector<string> addOperators(string num, int target){
//    vector<string> result;
////    customFunc(0, "", 0, 0, num, target, result);
////    customFunc(result, 0, 0, 0, num, target, "");
//    customFunc(result, 0, 0, num, target, 0, "");
//    
////    recursiveCall(0, "", 0, 0, num, target, result);
//    
//    return result;
//}
//
//
//
//
//
//
//
////vector<string> addOperators(string num, int target) {
////    
//////    vector<string> ans;
////    
////    vector<string> arr;
////    
////
////
////    
////    return arr;
////}
//
//int main(){
//    
//    string num = "123";
//    int target = 6;
//    
////    num = "232";
////    target = 8;
////    
////    //2+3*2
////    //2*3+2 give
////    
////    num = "3456237490";
////    target = 9191;
////    
////    num = "105";
////    target = 5;
////    
////    num = "00";
////    target = 0;
//    
//    vector<string>ans = addOperators(num, target);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    return 0;
//}
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
////READ QUESTION PROPERLY DONT MAKE ASSUMPTIONS BY SEEING THE EXAMPLES GIVEN
////here basically you made assumption that / is also alowed but only *,+,- are allowed
//
////void customFunc(string s,int i,vector<string>&arr,int target,int prev1,int prev2,char prevOp,char x,char y,int result){
////    
////    if(i == s.length()-1 && result == target){
//////        s.pop_back();
////        arr.push_back(s);
////        return;
////    }
////    
////    //123
////    
////    if(x == '+'){
//////        if (prevOp == '-'){
//////            //prev1 = target
//////            //prev1 - prev2 + (s[i]-48);
//////            //currently target = target - prev2
//////            //first add then subtract
//////            //new target = prev1 - (prev2 + (s[i]-48))
//////
//////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,prev1 - (prev2 + int(s[i]-48)),target,s[i],x,x,y);
//////        }else{
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr, target ,result,s[i+1] - 48,x,x,y,result + int(s[i+1]-48));
//////        }
////    }else if(x == '-'){
////        customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1] - 48,x,x,y,result - int(s[i+1]-48));
////    }else if(x == '/'){
////        
////        
////        if(prevOp == '+'){
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,x,x,y,prev1 + (prev2 / int(s[i+1]-48)));
////        }else if(prevOp == '-'){
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,x,x,y,prev1 - (prev2 / int(s[i+1]-48)));
////        }else{
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,x,x,y,result / int(s[i+1]-48));
////        }
////        
////    }else if(x == '*'){
////        
////        if(prevOp == '+'){
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1] - 48,x,x,y,prev1 + (prev2 * int(s[i+1]-48)));
////        }else if(prevOp == '-'){
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1],x,x,y,prev1 - (prev2 * int(s[i+1]-48)));
////        }else{
////            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1],x,x,y,result * int(s[i+1]-48));
////        }
////        
////    }
////    
////    if(x!=y){
////        if(y == '+'){
////            //        if (prevOp == '-'){
////            //            //prev1 = target
////            //            //prev1 - prev2 + (s[i]-48);
////            //            //currently target = target - prev2
////            //            //first add then subtract
////            //            //new target = prev1 - (prev2 + (s[i]-48))
////            //
////            //            customFunc(s.substr(0,i+1)+x+s.substr(i+1,s.length()-i+1), i+2, arr,prev1 - (prev2 + int(s[i]-48)),target,s[i],x,x,y);
////            //        }else{
////            customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr, target ,result,s[i+1] - 48,y,x,y,result + int(s[i+1]-48));
////            //        }
////        }else if(y == '-'){
////            customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1] - 48,y,x,y,result - int(s[i+1]-48));
////        }else if(y == '/'){
////            
////            
////            if(prevOp == '+'){
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,y,x,y,prev1 + (prev2 / int(s[i+1]-48)));
////            }else if(prevOp == '-'){
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,y,x,y,prev1 - (prev2 / int(s[i+1]-48)));
////            }else{
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1]-48,y,x,y,result / int(s[i+1]-48));
////            }
////            
////        }else if(y == '*'){
////            
////            if(prevOp == '+'){
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1] - 48,y,x,y,prev1 + (prev2 * int(s[i+1]-48)));
////            }else if(prevOp == '-'){
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1],y,x,y,prev1 - (prev2 * int(s[i+1]-48)));
////            }else{
////                customFunc(s.substr(0,i+1)+y+s.substr(i+1,s.length()-i+1), i+2, arr,target,result,s[i+1],y,x,y,result * int(s[i+1]-48));
////            }
////            
////        }
////    }
////    
////    
////
////    
////    
////}
