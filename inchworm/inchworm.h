#include <iostream>
#include <stdlib.h>
using namespace std;
class inchworm{
public:
	int lunchtime(int branch, int rest, int leaf){
		int eaten = 1;
		int leaf_position = leaf;
		int rest_position = rest;

		for(int i = 0; i <= branch; i++){
			if (i == leaf_position && i == rest_position){
				eaten++;
				leaf_position = leaf_position + leaf;
				rest_position = rest_position + rest;
			}

			else if(i == leaf_position){
				leaf_position = leaf_position + leaf;
			}

			else if(i == rest_position){
				rest_position = rest_position + rest;
			}
		}
		return eaten; 	
	}
};