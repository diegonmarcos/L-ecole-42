## How to Configure VS Code to Use Tabs for Indentation

Norminette, the code style checker used at 42 school, requires tabs for indentation. Here's how to set up VS Code to use tabs instead of spaces:

1. **Open User Settings:**
    
    - Click the gear icon (Manage) in the lower left corner.
    - Select "Settings" from the menu.
2. **Search for "Tab Size":**
    
    - Type "Tab Size" in the search bar.
3. **Modify Settings:**
    
    - **Editor: Tab Size:** Set to your preferred tab width (e.g., 4).
    - **Editor: Insert Spaces:** Uncheck this option.
    - **Editor: Detect Indentation:** Uncheck this option (optional).
4. **Optional: Per-Language Settings:**
    
    - If you need different tab settings for specific languages, click "Configure per language" in the "Editor: Tab Size" setting and customize accordingly.
5. **Save and Reload:**
    
    - Save your changes.
    - Close and reopen your files for the changes to take effect.

**Additional Tips:**

- **Install C/C++ Extension:** For C/C++ code, install a relevant extension for enhanced syntax highlighting and formatting.
- **Reformat Code:** Reformat existing code to replace spaces with tabs using the extension's formatting tools.

By following these steps, VS Code will use tabs for indentation, helping your code comply with Norminette's style requirements.