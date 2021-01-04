#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetTeamName(), SetTeamWins(), SetTeamLosses()
void Team::SetTeamName(string name){
   strTeamName = name;
}

void Team::SetTeamWins(int TeamWins){
   numTeamWins = static_cast<double>(TeamWins);
}

void Team::SetTeamLosses(int TeamLosses){
   numTeamLosses = static_cast<double>(TeamLosses);
}

   
// TODO: Implement accessor functions - 
//       GetTeamName(), GetTeamWins(), GetTeamLosses()
string Team::GetTeamName() const{
   return strTeamName;
}

int Team::GetTeamWins() const{
   return static_cast<double>(numTeamWins);
}
int Team::GetTeamLosses() const{
   return static_cast<double>(numTeamLosses);
}
   
// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage() {
   return static_cast<double>(numTeamWins) / (static_cast<double>(numTeamWins) + static_cast<double>(numTeamLosses));
}
