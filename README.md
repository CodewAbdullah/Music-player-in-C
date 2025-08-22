# 🎵 Console Music Player

A simple console-based music player implemented in C using circular queue data structure. This project demonstrates fundamental programming concepts including data structures, menu-driven programming, and user input handling.

## 📋 Features

- **Add Songs**: Add up to 5 songs to your playlist
- **Remove Songs**: Remove songs from the front of the queue (FIFO)
- **Display Playlist**: View all songs currently in the playlist
- **Song Navigation**: 
  - Play first song
  - Choose specific song by number
  - Next song (with looping)
  - Previous song (with looping)
- **Input Validation**: Handles invalid inputs gracefully
- **Full Queue Management**: Prevents overflow and underflow

## 🛠️ Technical Implementation

- **Data Structure**: Circular Queue using array
- **Language**: C
- **Key Concepts**: 
  - Pointers and arrays
  - Menu-driven interface
  - State management (tracking currently playing song)
  - Input validation and error handling

## 🚀 How to Run

1. **Compile the program:**
   ```bash
   gcc music_player.c -o music_player
   ```

2. **Run the executable:**
   ```bash
   ./music_player
   ```

## 📖 Usage

When you run the program, you'll see a menu with the following options:

```
=== Music player ===
1. Add Song.
2. Remove song.
3. List all songs.
4. Play song.
5. Choose music.
6. Next Song
7. Previous song.
8. Exit program.
```

### Example Usage:
1. Add songs by entering single characters (A, B, C, etc.)
2. View your playlist with option 3
3. Navigate through songs using options 4-7
4. Exit when done with option 8

## 🔧 Code Structure

- **`addSong()`**: Adds a song to the circular queue
- **`removeMusic()`**: Removes song from front of queue
- **`display()`**: Shows all songs in current playlist
- **`first()`**: Plays the first song in queue
- **`chooseMusic()`**: Allows user to select specific song
- **`nextSong()`**: Plays next song with circular navigation
- **`previousSong()`**: Plays previous song with circular navigation

## 🎯 Learning Outcomes

This project helped me learn:
- Circular queue implementation
- Memory management in C
- User input validation
- Menu-driven program design
- State management in applications
- Error handling and edge cases

## 📝 Notes

- Currently stores songs as single characters for simplicity
- Maximum playlist size is 5 songs
- Uses circular navigation (after last song, goes to first)
- Includes comprehensive input validation

## 🔮 Future Enhancements

- Store full song names instead of single characters
- Save/load playlists from files
- Add shuffle functionality
- Implement playlist duration tracking
- Add song search feature

## 👨‍💻 Author

Built as part of my C programming learning journey, focusing on data structures and practical application development.

---

*This project demonstrates practical implementation of circular queues and console-based user interface design in C.*
