package gUI_projInno;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class SaveListener implements ActionListener{

	@Override
	public void actionPerformed(ActionEvent e) {
		//saves list in a text file
		ArrayList<CoordButton> buttons = CreateGridDemo.getButtonList();
		//create the basics to write to a file
		File logFile = new File("C:\\users\\Christopher\\Desktop\\ECP\\ProjInno\\logFile.txt");
		try {
			FileWriter fileWrite = new FileWriter(logFile);
			int counter = 0; //counts the leds that are set to on
//			fileWrite.write("Test this");
			for(CoordButton btn : buttons){
				
//				write data to file now
				fileWrite.write("_shapeArray[" + counter + "][0] = " + btn.getxIndex() + "; \r\n" +
								"_shapeArray[" + counter + "][1] = " + btn.getyIndex() + "; \r\n");			
				counter++;
			}
			fileWrite.close();
		} catch (IOException es) {
			es.printStackTrace();
		}
	}

}
