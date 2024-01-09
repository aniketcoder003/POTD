//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
     int large=arr[0] , secondlarge=-1;
      for ( int i =0 ; i < n ; i++)
      {
          if ( arr[i]>large)
          {
              secondlarge=large;
              large=arr[i];
          }
          if (   large>arr[i] && arr[i]>secondlarge)
          {
              secondlarge=arr[i];
          }
              
      }
  
      
      return secondlarge;    
          

	}
	
};