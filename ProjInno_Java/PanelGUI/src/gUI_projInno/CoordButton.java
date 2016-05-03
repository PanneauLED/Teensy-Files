package gUI_projInno;
	import javax.swing.*;
public class CoordButton extends JButton{
	boolean isSelected = false;
	
	public boolean isSelected() {
		return isSelected;
	}

	public void setSelected(boolean isSelected) {
		this.isSelected = isSelected;
	}

	int LED_IN_ROW = 64;
	int LED_IN_COLOUMN = 24;
	int arrayIndex = 0;
	
	private int xIndex = 0; //x position in the panel array
	private int yIndex = 0; //y position in the panel array
	
	public CoordButton(int arrayIndex){
		super();
		this.setVisible(true);
		this.arrayIndex = arrayIndex;
		this.xIndex = (arrayIndex)%(LED_IN_ROW);
		this.yIndex = (arrayIndex-this.xIndex)/LED_IN_ROW;
		
	}

	public void getActionEvent(){
		System.out.println("action event called.");
	}
	
	
	public int getArrayIndex() {
		return arrayIndex;
	}



	public int getxIndex() {
		return xIndex;
	}

	public void setxIndex(int xIndex) {
		this.xIndex = xIndex;
	}

	public int getyIndex() {
		return yIndex;
	}

	public void setyIndex(int yIndex) {
		this.yIndex = yIndex;
	}

		
	
}
