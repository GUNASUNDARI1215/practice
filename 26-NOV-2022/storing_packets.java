/*
C Program to the folder for storing the packets
The data network of MNC 'CompSoft' transmits a list consists  of the packetId of the packets to be transmitted.
The packetId is a numeric value consisting of digits from 0-9.
The sum of all even digits present in the packetId is the folder number in which the data must be stored upon transmission to the next server.
The company wishes to find out the folder number of all the N data packets.
Write an algorithm to find the folder number from the packetId of all the N data packets.
Sample Input 1:
	numPackets=3
	packetId= 11 22 24
	
	ouput:	0 4 6
	
Sample Input 2:
	numPackets=5
	packetId= 43 236 11 482 10
	
	ouput: 4 8 0 14 0
	
*/

import java.util.Scanner;

class storing_packets
{
	static void find_folder(int packetID[],int total_packets)
	{
		int sum=0,remainder;
		int ID;
		System.out.println("Stored Folder: ");
		for(int i=0;i<total_packets;i++)
		{
			ID=packetID[i];
			sum=0;
			
			while(ID>0)
			{
				remainder=ID%10;
				if(remainder%2==0)
				{
					sum+=remainder;
				}
				ID/=10;
			}
			System.out.print(sum+" ");
		}
	}

	public static void main(String[] args)
	{
		int total_packets;
		Scanner get=new Scanner(System.in);
		
		System.out.print("Enter the number of packets: ");
		total_packets=get.nextInt();
	
		int packetID[]=new int[total_packets];
		System.out.println("Enter all the packetIds: ");
		for(int i=0;i<total_packets;i++)
		{
			System.out.print("packetID[" +i +"] ");
			packetID[i]=get.nextInt();
		}
	
		find_folder(packetID,total_packets);
	}
}
		
		