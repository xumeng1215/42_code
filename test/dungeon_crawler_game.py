import random

# Define room types
ROOM_EMPTY = 0
ROOM_ENEMY = 1
ROOM_HEALING = 2
ROOM_EXIT = 3

# Define enemy types
ENEMY_GOBLIN = 0
ENEMY_ORC = 1


class Room:
  def __init__(self, room_type):
    self.type = room_type
    self.enemy = None
    self.item = None

  def enter(self, player):
    if self.type == ROOM_ENEMY:
      self.battle(player)
    elif self.type == ROOM_HEALING:
      player.use_item()              # Directly call player's use_item

  def attack(self, player):  # Implement attack logic
    print("An enemy attacks!")
    player.take_damage(self.enemy.damage)

  def battle(self, player):
    print("An enemy attacks!")
    while self.enemy.health > 0 and player.health > 0:
      action = input("Do you want to attack? (y/n): ").lower()
      if action == 'y':
        player.attack(self.enemy)
        if self.enemy.health > 0:
          print(f"The enemy's health: {self.enemy.health}")
          self.enemy.attack(player)
      else:
        self.enemy.attack(player)
        break  # Exit battle

class Enemy:
  def __init__(self, enemy_type):
    self.type = enemy_type
    if self.type == ENEMY_GOBLIN:
      self.health = 5  # Enemy health
      self.damage = 2  # Enemy damage
    elif self.type == ENEMY_ORC:
      self.health = 8
      self.damage = 4

  def attack(self, player):
    player.take_damage(self.damage)


class Player:
  def __init__(self):
    self.health = 10
    self.damage = 3  # Player's attack damage

  def take_damage(self, damage):
    self.health -= damage
    print(f"You took {damage} damage! Health remaining: {self.health}")
    if self.health <= 0:
      print("You have died! Game Over!")
      exit()

  def use_item(self):
    heal_amount = random.randint(1, 3)
    self.health += heal_amount
    print(f"You found a healing bottle! Health increased by {heal_amount}.")

  def attack(self, enemy):
    enemy.health -= self.damage
    print(f"You attack the enemy, dealing {self.damage} damage!")
    if enemy.health <= 0:
      print("The enemy is defeated!")

def generate_room():
  # Randomly choose room type
  room_type = random.choice([ROOM_EMPTY, ROOM_ENEMY, ROOM_HEALING])
  # Optionally add enemy or healing item to specific room types
  if room_type == ROOM_ENEMY:
    enemy_type = random.choice([ENEMY_GOBLIN, ENEMY_ORC])
    room = Room(room_type)
    room.enemy = Enemy(enemy_type)
  elif room_type == ROOM_HEALING:
    room = Room(room_type)
    room.item = Player()  # Player object used for healing effect
  else:
    room = Room(room_type)
  return room


def generate_dungeon(rows, cols):
  dungeon = []
  for _ in range(rows):
    row = []
    for _ in range(cols):
      row.append(generate_room())
    dungeon.append(row)

  # Randomly place exit in a non-corner room
  while True:
    exit_row = random.randint(1, rows - 2)
    exit_col = random.randint(1, cols - 2)
    if dungeon[exit_row][exit_col].type != ROOM_EXIT:
      dungeon[exit_row][exit_col].type = ROOM_EXIT
      break
  return dungeon


def print_dungeon(dungeon):
  for row in dungeon:
    for room in row:
      if room.type == ROOM_EMPTY:
        print(".", end=" ")
      elif room.type == ROOM_ENEMY:
        print("E", end=" ")
      elif room.type == ROOM_HEALING:
        print("H", end=" ")
      else:
        print("X", end=" ")  # Mark exit with X
    print()


def get_player_move(dungeon, player_row, player_col):
  rows, cols = len(dungeon), len(dungeon[0])
  while True:
    move = input("Enter your move (w, a, s, d): ").lower()
    if move == "w" and player_row > 0:
      player_row -= 1
    elif move == "a" and player_col > 0:
      player_col -= 1
    elif move == "s" and player_row < rows - 1:
      player_row += 1
    elif move == "d" and player_col < cols - 1:
      player_col += 1
    else:
      print("Invalid move. Try again.")
      continue
    return player_row, player_col


def main():
  rows, cols = 5, 5
  dungeon = generate_dungeon(rows, cols)
  player = Player()
  player_row, player_col = 0, 0

  while True:
    print_dungeon(dungeon)
    print("Player Health:", player.health)
    player_row, player_col = get_player_move(dungeon, player_row, player_col)

    current_room = dungeon[player_row][player_col]
    current_room.enter(player)

    if current_room.type == ROOM_EXIT:
      print("Congratulations! You've reached the exit. You win!")
      break

if __name__ == "__main__":
    main()