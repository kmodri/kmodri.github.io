const team = {
  
  _players: [
    {
      firstName: 'Roger',
      lastName: 'Federrer',
      age: 40
    },
    {
      firstName: 'Novak',
      lastName: 'Djokovic',
      age: 34
    },
    {
      firstName: 'Rafael',
      lastName: 'Nadal',
      age: 36
    }
  ],
  _games: [
    {
      opponent: 'Broncos',
      teamPoints: 42,
      opponentPoints: 27
    },
    {
      opponent: 'Barcelona',
      teamPoints: 62,
      opponentPoints: 33
    },
    {
      opponent: 'Maradonna Cup',
      teamPoints: 39,
      opponentPoints: 39
    }
  ],

  get players() {
    return this._players;
  },

  get games() {
    return this._games;
  },

  addPlayer(firstName, lastName, age) {
    let player = {
      firstName: firstName,
      lastName: lastName,
      age: age
    };
    this.players.push(player);
  },

  addGame(oppName, teamPts, oppPts) {
    const game = {
      opponent: oppName,
      teamPoints: teamPts,
      opponentPoints: oppPts
    };
    this.games.push(game);
  }
};

team.addPlayer('Bobolita', 'McCornDoggo', 28);
team.addPlayer('Nyomi', 'Kim', 12);
team.addPlayer('Shang', 'Chi', 39);

console.log(team.players);

team.addGame('Titans', 100, 98);
team.addGame('The Pizza Scrumpers Cup', 150, 80);
team.addGame('The Cutest People Cup', 200, 55);