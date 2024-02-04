This library is designed for aligning words on an SSD1309 display, preventing them from being split when the display limit is reached.
It seems to work by checking if the substring beyond certain character positions (21, 42, 63) contains a space.
If not, it finds the last space before that position, adds spaces to push the word to the next line, and repeats 
this process for each specified position.

For example, the code ensures that the text displayed on a 128x32 display does not split words when reaching positions 21, 42, and 63 in the string.

To make it more flexible for users with different display sizes, you can consider turning these fixed values (21, 42, 63) into variables that users
can set based on their specific display width requirements. This way, users can easily adapt the library to different display configurations without
having to modify the code extensively.

Additionally, consider making the library more general-purpose by allowing users to input their display width as a parameter,
making it applicable to a broader range of scenarios. You can provide clear documentation on how users can integrate and 
customize the library for their specific display characteristics.

Remember to update the GitHub readme with instructions on usage, customization, and any potential modifications users
might find helpful.
