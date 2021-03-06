/*
 *  MyDialogBox.h
 *  
 * Creates a dialog box that holds a radio button group with each radio button associated with a colour.
 * Outputs the colour chosen by the user.
 *
 *  Created by Caroline Kierstead on 28/05/09.
 *  Copyright 2009 UW. All rights reserved.
 *
 */
#ifndef __MY_DIALOG_BOX_H
#define __MY_DIALOG_BOX_H

#include <gtkmm/dialog.h>
#include <gtkmm/box.h>
#include <gtkmm/radiobuttongroup.h>
#include <gtkmm/radiobutton.h>
#include <string>
#include <vector>


class DialogBox : Gtk::Dialog {
public:
	// Specifies the parent window of the dialog box and the title of the dialog box.
	DialogBox( Gtk::Window & parentWindow, std::string title);
	virtual ~DialogBox();
	
private:
	Gtk::RadioButton::Group      group;          // Used to group the radio buttons so only one can be active at a time.
	std::vector<Gtk::RadioButton *>   buttons;        // Buttons for the messages.
}; 
#endif
