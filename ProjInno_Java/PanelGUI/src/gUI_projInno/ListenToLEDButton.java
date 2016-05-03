package gUI_projInno;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ListenToLEDButton implements ActionListener{

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		System.out.println("Button clicked.");
		CoordButton btn = (CoordButton) e.getSource();
		if(!btn.isSelected){
		btn.setBackground(Color.BLUE);
		CreateGridDemo.addButtonToList(btn);
		btn.setSelected(true);
		}
		else if(btn.isSelected){
			btn.setBackground(null);
			btn.setSelected(false);
			CreateGridDemo.removeButtonFromList(btn);
		}
		
	}

}
