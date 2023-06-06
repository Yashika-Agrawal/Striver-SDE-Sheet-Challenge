 bool matching(char a, char b)
    {
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b== ']'));
    }
bool isValidParenthesis(string str)
{
    stack <char> s;
       for( char x: str)
       {
           
           if(x=='(' || x=='{' || x=='[')
           {
               s.push(x);
           }
           
           else{
               if(s.empty())
              {
               return false;
              }
               if(matching(s.top(),x ))
               {
                   s.pop();
               }
               else{
                   return false;
               }
           }
       }
       if(s.empty())
       {
           return true;
       }
       else {return false;}
}