
//only for sisplay 128x32


#include <textajust1309.h>

//-------------------------------------------------------- classs

 String textajust1309::ajsuttext(String data){

  if(data.substring(21) != " " && data.length() > 21 ) // procura o fim da ultima palavra
    {
      int x = 21;
      int v = 0;
      while(data.substring(x-1,x) != " ")
      {
        x--;
        v++;
      }
      //adicionar espaço para enpurrar a palavra para a proxima linha
      String addspaco = "";
      while(v > 0)
      {
          addspaco += " ";
          v--;
      }
      data = data.substring(0, x) + addspaco + data.substring(x,data.length());
    }
 

  if(data.substring(42) != " " && data.length() > 42 )
    {
      int x = 42;
      int v = 0;
      while(data.substring(x-1,x) != " ")
      {
        x--;
        v++;
      }
      String addspaco = "";
      while(v > 0)
      {
          addspaco += " ";
          v--;
      }
      data = data.substring(0, x) + addspaco + data.substring(x,data.length());
    }

 
  if(data.substring(63) != " " && data.length() >63 )
    {
      int x = 63;
      int v = 0;
      while(data.substring(x-1,x) != " ")
      {
        x--;
        v++;
      }
      //adicionar espaço
      String addspaco = "";
      while(v > 0)
      {
          addspaco += " ";
          v--;
      }
      data = data.substring(0, x) + addspaco + data.substring(x,data.length());
    }

  if (data.length() > 80)
  Serial1.println("caracters exedido");
  return data;

 }

