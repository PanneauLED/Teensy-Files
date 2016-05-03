package gUI_projInno;

import static org.junit.Assert.*;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

import org.junit.Test;

public class SaveListenerTest {

	@Test
	public void test() {
		//test write out func
		
		File testFile = new File("C:\\users\\Christopher\\Desktop\\ECP\\ProjInno\\test");
		System.out.println(testFile.isFile());
		try {
			FileWriter fileWrite = new FileWriter(testFile);
			fileWrite.write("Test this");
			fileWrite.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
