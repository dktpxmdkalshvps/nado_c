package javastudy;

public class Car {
	String name;
	int number;

	public Car(String name){
		this.name = name; //this '자기 자신이 가지고 있는 메소드
	}

	public Car(){
		// this.name = "none";
		// this.number = 0;
		this("none",0);
	}

	public Car(String name, int number){
		this.name;
		this.number = number;
	}
	
}

