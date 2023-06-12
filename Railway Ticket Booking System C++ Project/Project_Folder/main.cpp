#include "Linkedlist.h"
#include<conio.h>

int main()
{
	Linkedlist l;
	cout<<"\n===========================================================================";
	cout<<"\n=                                                                         =";
	cout<<"\n=                 -----------------------------------------               =";
	cout<<"\n=                      Train Ticket Booking System                        =";
	cout<<"\n=                 -----------------------------------------               =";
	cout<<"\n=                                                                         =";        
	cout<<"\n===========================================================================";
	
	getch();
	system("cls");
	
		int cchh=0;

		while(cchh !=3)
		{
			cout<<"\n=============================================";
			cout<<"\n\t1)Passenger Use.";
			cout<<"\n---------------------------------------------";
			cout<<"\n\t2)Only Admin Use";
			cout<<"\n---------------------------------------------";
			cout<<"\n\t3)Exit";
			cout<<"\n---------------------------------------------";
			cout<<"\n\tEnter Choice.";
			cout<<"\n\t____________________[";
			cin>>cchh;
						switch(cchh)
						{
							case 1:
								{	
									int pc=0;
									while(pc != 5)
										{
											
											cout<<"\n=============================================";
											cout<<"\n\t1)Show Avalible Trains.";
											cout<<"\n---------------------------------------------";
											cout<<"\n\t2)Book Ticket ";
											cout<<"\n---------------------------------------------";
											cout<<"\n\t3)Show Booked Tickets.";
											cout<<"\n---------------------------------------------";
											cout<<"\n\t4)Cancel Booked Ticket ";
											cout<<"\n---------------------------------------------";
											cout<<"\n\t5)Exit";
											cout<<"\n\tEnter the Choice.";
											cout<<"\n\t___________________[";
											cin>>pc;
												switch(pc)
												{
													case 1:
														l.avalibletrn();
														getch();
														break;
											
													case 2:
														{
															int op;
															cout<<"\n Where Are you Adding Data";
															cout<<"\n			1)Frant. ";
															cout<<"\n			2)Position. ";
															cout<<"\n			3)End. ";
															cout<<"\n______________________________[ ";
															cin>>op;
						
																switch(op)
																	{
																		case 1:
																			{
																				int id,ag;
																				char nm[20];
																				char lo[20];
																				int age;
																				cout<<"\n\n\n";
																				cout<<"\nEnter Passenger  Adhar ID/ PAN Card / Voter ID::";
																				cin>>id;					
																				cout<<"\nEnter Passenger Name::";
																				cin>>nm;
																				cout<<"\nEnter Passenger Location::";
																				cin>>lo;
																				cout<<"\nEnter Passenger Age::";
																				cin>>age;
																				Pass e(id,nm,lo,age);

																				cout<<"Booking To Confirm (y/n):";
																				char cnf[1];
																				cin>>cnf;
																				if(strcmp(cnf,"y")==0 || strcmp(cnf,"Y")==0)
																					{
																						l.InsertBeg(e);
																					}
																				else
																					{
																							cout<<"\n\n\n\n\t\tExit And Re-Book Ticket";
																							cout<<"\n\t\t====Thank You=====\n\n\n\n\n";
																					}
														
																			}
																		break;
																		case 2:
																			{
																				cout<<"\n\n\n";
																				int id,po,ag;
																				char nm[20];
																				char loca[20];
																				cout<<"\nEnter The Passenger Adhar ID/ PAN Card / Voter ID::";
																				cin>>id;					
																				cout<<"\nEnter The Passenger Name ::";
																				cin>>nm;
																				cout<<"\nEnter The Passenger Location::";
																				cin>>loca;
																				cout<<"\nEnter Passenger Age::";
																				cin>>ag;
																				Pass e(id,nm,loca,ag);
																				cout<<"\nEnter The Position::";
																				cin>>po;
																				char cnf[1];
																				cin>>cnf;
																				if(strcmp(cnf,"y")==0 || strcmp(cnf,"Y")==0)
																				{
																					l.InsertPosi(e,po);
																				}
															
																					cout<<"\n\n\n\n\t\tExit And Re-Book Ticket";
																					cout<<"\n\t\t====Thank You=====\n\n\n\n\n";
																																									
																			}
																		break;
											
																		case 3:
																			{
																				cout<<"\n\n\n";
																				int id,ag;
																				char nm[20];
																				char loc[20];
																				cout<<"\nEnter The Passenger Adhar ID/ PAN Card / Voter ID::";
																				cin>>id;					
																				cout<<"\nEnter The Passenger Name::";
																				cin>>nm;
																				cout<<"\nEnter The Passenger Location::";
																				cin>>loc;
																				cout<<"\nEnter Passenger Age::";
																				cin>>ag;
																				Pass e(id,nm,loc,ag);

																				char cnf[1];
																				cin>>cnf;
																				if(strcmp(cnf,"y")==0 || strcmp(cnf,"Y")==0)
																				{
																					l.InsertEnd(e);
																				}
																				else
																				{
																					cout<<"\n\n\n\n\t\tExit And Re-Book Ticket";
																					cout<<"\n\t\t====Thank You=====\n\n\n\n\n";
																				}
																			}
																		break;
																	}
														}
														break;
														case 3:
																 //ShowRecord();
																l.Display();
															
														break;
														
														case 4:
															{
																int op;
																cout<<"\n Which Ticket Delete..";
																cout<<"\n					1)Frant. ";
																cout<<"\n					2)Position. ";
																cout<<"\n					3)End. ";
																cin>>op;
																cout<<"\n___________________________";
																switch(op)
																{
																	case 1:
																		l.DeleteBeg();
																	break;
																	case 2:
																		{
																			int pp;
																			cout<<"\nEnter The Position::";
																			cin>>pp;
																			l.DeletePos(pp);
																		}
																		
																	break;
																	case 3:
																			l.DeleteEnd();
																	break;
																	default:
																	cout<<"\nInvalid Choice.";
																	break;
																}
															}														
														getch();
															system("cls");
														break;
														
														case 5:
															{
																	cout<<"\n------------------------------------------------------------------------------------------------------";
																	cout<<"\n\n\t\t\t\t==========>>Thank You User<<==============\t\t\t\t\t\t\t\n";
																	cout<<"\n------------------------------------------------------------------------------------------------------";
																	cout<<"\n\nPlz Enter any  Key for ""_Exit_""\n\n\n\n";
																	cout<<"\n\n\n";
															}
														break;
														
														default:
															cout<<"\n\tInvalid Input eneted User..";
														break;
												}
										}
								}
							break;
							case 2:
								{
									int i=0,a=0;
									char pword[10];
									char puser[10];
									char ause[10]="user";
									char pass[10]="pass";
									char c=' ';
									cout<<"\nEnter USER-ID\t:: ";
									cin>>puser;
									cout<<"\nenter PASS-WD\t:: ";
								
									do
									{
											while(i<10)
										{
											pword[i]=getch();
											c=pword[i];
											if(c==13)
											break;
											else
											cout<<"*";
											i++;
										}
											pword[i]='\0';
											i=0;
											if(strcmp(puser,"user")==0 && strcmp(pword,"pass")==0)
											 {
												cout<<"\n\n\n\n\t Login Sucessefull in Admin Section....\n\n";
										
												int ch;
												while(ch != 7)
											      {
													cout<<"\n=============================================";
													cout<<"\n\t1)Show Avalible Trains.";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t2)Show Booked Tickets.";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t3)Delete Booked Ticket ";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t4)Search Passenger Booked Ticket ";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t5)Update Passenger Booked Ticket ";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t6)Reset All Passenger DATA and Tickets.";
													cout<<"\n---------------------------------------------";
													cout<<"\n\t7)Exit.";
													cout<<"\n=============================================";
													cout<<"\n\tEnter The Choice _";
													cout<<"\n===========================";
													cin>>ch;
													system("cls");
													switch(ch)
													{
										
										
																	case 1:
																			l.avalibletrn();
																				getch();
																		break;	
																		
																	case 2:
																				l.Display();
																				cout<<"\n\n";
																				break;
																					getch();
																
																				system("cls");
																
																	case 3:
																	{
																				int op;
																				cout<<"\n Which Ticket Delete..";
																				cout<<"\n					1)Frant. ";
																				cout<<"\n					2)Position. ";
																				cout<<"\n					3)End. ";
																				cin>>op;
																				cout<<"\n___________________________";
																				switch(op)
																				{
																					case 1:
																						l.DeleteBeg();
																					break;
																					case 2:
																						{
																							int pp;
																							cout<<"\nEnter The Position::";
																							cin>>pp;
																							l.DeletePos(pp);
																						}
																						
																					break;
																					case 3:
																							l.DeleteEnd();
																					break;
																					default:
																						cout<<"\nInvalid Choice.";
																					break;
																				}
																	}
																	break;
																					getch();
																			
																						system("cls");
																			
																	case 4:
																						{
																							int option;
																							cout<<"\nSearch By Passenger ";
																							cout<<"\n      1)Adhar ID/ PAN Card / Voter ID";
																							cout<<"\n      2)Name";
																							cout<<"\n_______________";
																							cin>>option;
																							switch(option)
																							{
																								case 1:
																									{
																										int iii;
																										cout<<"\nEnter Adhar ID/ PAN Card / Voter ID To Search:";
																										cin>>iii;
																										l.searchpassbyid(iii);
																									}
																								break;
																								case 2:
																									{
																										char nam[20];
																										cout<<"\nEnter Name To Search:";
																										cin>>nam;
																										l.searchpassbyname(nam);
																									}
																								break;
																								default:
																									cout<<"\nInvalid Choice Option.";
																								break;
																							}
																						}
																	break;
																	case 5:
																		//plz currect the update Section;
																									{																																									
																										int oldid;	
																										cout<<"\nEnter ID for Update Passenger Info";
																										cin>>oldid;
																										
																										int  id,ag;
																										char nm[20];
																										char loc[20];																			
																										
																										cout<<"\nUpdate ID ::";
																										cin>>id;																													
																										cout<<"\nUpdate Name::";
																										cin>>nm;																							
																										cout<<"\nUpdate Location::";
																										cin>>loc;																										
																										cout<<"\nUpdate Passenger Age::";
																										cin>>ag;
																										l.updateinfo(id,nm,loc,ag);
																									
																									}
																	break;
																	case 6:
																									{
																										int opt;
																										cout<<"\nAre You Conferm To Reset DATA ?";
																										cout<<"____\t1.Yes\n\t\t\t\t\t0.No\n\t\t\t\t\t(1/0)__";
																										cin>>opt;
																										if(opt==1)
																										{
																											l.~Linkedlist();
																										
																											cout<<"\nSuccesfull-Reset.";
																										}
																										else
																										{
																											cout<<"\nNo Rest.";
																										}
																									}
																	break;
																							
																							
																	case 7:
																									{			
																											cout<<"\n------------------------------------------------------------------------------------------------------";
																											cout<<"\n\n\t\t\t\t==========>>Thank You Admin<<==============\t\t\t\t\t\t\t\n";
																											cout<<"\n------------------------------------------------------------------------------------------------------";
																											cout<<"\n\nPlz Enter any  Key for ""_Exit_""\n\n\n\n";
																											cout<<"\n\n\n";	
																									}
																																																					
																	break;
																		
																																		
																	default:
																									
																				cout<<"\nInvalid Choice.........";
																							
																	break;
																						
													} //switch case end
												} //while end	
												
												
											}//if end
											else
																{
																		a++;
												
																		cout<<"\n        SORRY !!!!  LOGIN IS UNSUCESSFUL";
															 			cout<<"\nSorry you have entered the wrong username and password for four times!!!";
													
																}
																						
											 	} //do
												 while(a<=1);																							
																					}//case 2
																				
																			break;
																			case 3:
																					cout<<"\n\n\n";
																					cout<<"\n------------------------------------------------------------------------------------------------------";
																					cout<<"\n\n\n\t\t\t\t==========>>Thank You Visit Again<<==============\t\t\t\t\t\t\t\n";
																					cout<<"\n\t\t\t\t==========>> From Indian Railway <<==============\t\t\t\t\t\t\t\n";
																					cout<<"\n------------------------------------------------------------------------------------------------------";
																					cout<<"\n\nPlz Enter any  Key for ""_Exit_""\n\n\n\n";
																					cout<<"\n\n\n";
																			break;
																			defualt:
																					cout<<"\n\nInvalid Choice for Railway Ticket Booking System..";
																			break;
																		}//main switch end
	}
	
	return 0;
}
////////////////////////////////////////////

