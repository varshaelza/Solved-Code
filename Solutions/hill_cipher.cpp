
#include <iostream> 
#include<string>
using namespace std; 
  
  

void HillCipher(string message, string key) 
{ 
    const int l=message.length();
    int keyMatrix[l][l]; 
    int k = 0; 
     int messageVector[l][1]; 
  
    cout<<"MESSAGE MATRIX : \n";
    for (int i = 0; i < l; i++) 
        {messageVector[i][0] = (message[i]) % 65;
        cout<<messageVector[i][0]<<"\n";
        }
  
    cout<<"KEY MATRIX : \n";
    for (int i = 0; i < l; i++)  
    { 
        for (int j = 0; j < l; j++)  
        { 
            keyMatrix[i][j] = (key[k++]) % 65; 
            cout<<keyMatrix[i][j]<<" ";
             
        } 
        cout<<"\n";
    }  
  
    
  
    int cipherMatrix[l][1]; 
  
     int x,i,j; 
    for (i = 0; i <l; i++)  
    { 
        for (j = 0; j < 1; j++) 
        { 
            cipherMatrix[i][j] = 0; 
           
             for (x = 0; x < l; x++) 
            { 
                cipherMatrix[i][j] +=  
                     keyMatrix[i][x] * messageVector[x][j]; 
            } 
          
            cipherMatrix[i][j] = cipherMatrix[i][j] % 26; 
        } 
    } 
   

  
    string CipherText; 
  
    for (int i = 0; i < l; i++) 
        CipherText += cipherMatrix[i][0] + 65; 
  
   
    cout << "CIPHERTEXT : " << CipherText; 
} 
  

int main() 
{ 
    string text,key;
    cout<<"PLAINTEXT : " ;
    cin>>text;
  
    label:cout<<"KEY : ";
    cin>>key;
    if(text.length()*text.length()!=key.length())
    {
        cout<<"INVALID KEY\n";
        goto label;
    }
  
    HillCipher(text, key); 
  
    return 0; 
}
   
