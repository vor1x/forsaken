#ifndef MULTIPLAYER_INCLUDED
#define MULTIPLAYER_INCLUDED

BOOL StartAHostSession ( MENUITEM * Item );
BOOL JoinASession ( MENUITEM * Item );
void SelectSession( MENUITEM *Item );
void GetPlayersInCurrentSession( MENUITEM *Item );
void GoToSynchup ( MENUITEM * Item );
void BailMultiplayer( MENU * Menu );
void SwapListItem( LIST * Source , LIST * Dest );
void TeamGoToSynchup ( MENUITEM * Item );
void InitTeamSelection( MENU *Menu );
void InitTeamLists( MENU *Menu );
void InitExistingGameJoin( MENU *Menu );
void SwapTeamIDs( LIST * Source , LIST * Dest );
void ReAssembleTeamNumbers(int *dummy);
void CheckForMenuChange(int *dummy);
void BailMultiplayerFrontEnd( MENU * Menu );
void DistributeTeamsToLists(int *dummy);
void SetUpGameType( int type );

#endif	// MULTIPLAYER_INCLUDED