package gUI_projInno;
	import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.*;
	public class CreateGridDemo extends JFrame{

		public CreateGridDemo(){
			this.setLayout(new BorderLayout());
			this.add(this.masterPanel, BorderLayout.NORTH);
			this.add(this.saveOrDelete, BorderLayout.SOUTH);
		}
		
		private static ArrayList<CoordButton> buttons = new ArrayList<>();
		JPanel masterPanel = new JPanel();
		JPanel saveOrDelete = new JPanel();
		ActionListener ledListen = new ListenToLEDButton();
		ActionListener saveListen = new SaveListener();
		
		
		public static void addButtonToList(CoordButton button){
			buttons.add(button);
		}
		public static void removeButtonFromList(CoordButton button){
			buttons.remove(button);
		}
		
		public static ArrayList<CoordButton> getButtonList(){
			return buttons;
		}
		
		public JButton createCoordButton(int index){
			//TODO write code here
			return new CoordButton(index);
		}
		
		public void addComponentsToPanel(){
//			this.add(masterPanel);
			int rows = 24;
			int coloumns = 64;
			int vGap = 10;
			int hGap= 10;
			JButton btn;
			this.masterPanel.setLayout(new GridLayout(rows, coloumns,vGap,hGap));
			
			for(int i = 0; i < (rows*coloumns); i++){
			btn = new CoordButton(i);
			btn.addActionListener(ledListen);
			btn.setPreferredSize(new Dimension(10,10));
			this.masterPanel.add(btn);
			}
		}
		
		public void addSaveToFrame(){
//			this.add(saveOrDelete);
			this.saveOrDelete.setLayout(new GridLayout(2,2));
			
			JButton save = new JButton("Save geometry");
			JButton delete = new JButton("delete geometry");
			save.addActionListener(saveListen);
			
			saveOrDelete.add(new JButton()); //creates some space
			saveOrDelete.add(new JButton()); //between pic and axes
			saveOrDelete.add(save);
			saveOrDelete.add(delete);
			saveOrDelete.setVisible(true);
		}
	
	public static void main(String[] args) {
		CreateGridDemo myFrame = new CreateGridDemo();
		myFrame.setDefaultCloseOperation(EXIT_ON_CLOSE);
		myFrame.addComponentsToPanel();
		myFrame.addSaveToFrame();
		myFrame.pack();
		myFrame.show();
		
	}
}
