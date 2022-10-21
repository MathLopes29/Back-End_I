/**
* IMC - Cálculo de IMC
* @author Matheus Lopes
*/

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Calculo {
	
	public static void main (String[] args){
		
	double Massa, IMC, Altura_P, Altura;
	
	
	Massa = Double.parseDouble(JOptionPane.showInputDialog("Massa(KG): "));
	JOptionPane.showMessageDialog(null, + Massa);

	Altura_P = Double.parseDouble(JOptionPane.showInputDialog("Altura(m): "));
	JOptionPane.showMessageDialog(null, + Altura_P);
	
	Altura = Altura_P;
	IMC = (Massa / (Altura * Altura));
	
	JOptionPane.showMessageDialog(null, + IMC);
	
	if ((IMC < 17)){
		//IMC = Integer.parseInt(JOptionPane.showMessageDialog("Muito Abaixo !"));
		System.out.println("Muito Abaixo!");
	} else {
        if ((IMC >= 17) && (IMC < 18.5)){
            //IMC = Integer.parseInt(JOptionPane.showMessageDialog("Abaixo do Peso! ");
            System.out.println("Abaixo do Peso!");
			} else {
                if ((IMC >= 18.5) && (IMC < 25)){
                    //IMC = Integer.parseInt(JOptionPane.showMessageDialog("Peso Ideal! ");
					System.out.println("Peso Ideal!");
            }
        }
	}
	 
	
	/** Feito em C 
	if (IMC<17){
		printf("\n Muito Abaixo\t!");
	}else{
        if (IMC>=17 <18.5){
            printf("\n Abaixo do Peso! \t");
            }else{
                if(IMC>=18.5 <25){
                    printf("\n Peso Ideal! \t");
            }
        }
	}
	*/
	
	/**
	|| (IMC >= 17 && IMC < 18.5) || (IMC >= 18.5 && IMC < 25)
	: " Peso Ideal!"
	
	*/
	
	}
}
