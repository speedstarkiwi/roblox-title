bool changed = false;//default set to false
HWND hwnd = FindWindow(NULL, "Roblox");
if (hwnd == NULL)
{
    cout << "Window not found" << endl;
    changed = NULL;
}
else{//eithe ruser is dumb and put wrong window title or doesnt exist
  SetWindowText(hwnd, "I am part of the Ku Klux Klan.We hate niggers. Beating niggers up.");
changed = true;//set to true
}
