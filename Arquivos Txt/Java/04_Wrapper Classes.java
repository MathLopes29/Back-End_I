/**
* Aula 010 - Wrapper Classes
* Representação de valores dentro de objetos Java
* Os 'Enpacotadores de arquivos java'
* Conversões Estáticas
* @author Matheus Lopes
*/

/*

*	Wrappers Primitivas (Classes e não Varáveis)
 
*	Integer (int)   Byte     Short
*	Long            Float    Double
*	Character       Void     Boolean

*/

public class Wrapper{
	
	public static void main (String[] args){
		
		// int idade = 31; //
		Integer idade = new Integer(31); 
	    
		// double preco = 12.85; //
		Double preco = new Double(12.85);
		
		// Converter Preco em unidades diferentes //
		double d = preco.doubleValue();
		int i = preco.intValue();
		byte b = preco.byteValue();
		float f = preco.floatValue();
		
		
		// char sexo = 'M'; //
		
		
		// boolean casado = true; //
		Boolean casado = new Boolean("yes");
		
		
		// Conversão Estática //
		double d1 = Double.parseDouble("123.45");
		int i1 = Integer.parseInt("123");
		float f1 = Float.parseFloat("3.14F");
		
		// Numeros Binários //
		int i2 = Integer.valueOf("101011", 2);
		System.out.println(i2);
	}
}
