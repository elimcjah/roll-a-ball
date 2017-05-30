#pragma strict

var count : int;
var countText : UnityEngine.UI.Text;
var rb : Rigidbody;
var speed : float;
var winText : UnityEngine.UI.Text;

function FixedUpdate () {
	var moveHorizontal = Input.GetAxis("Horizontal");
	var moveVertical   = Input.GetAxis("Vertical");
	var movement = new Vector3(moveHorizontal, 0, moveVertical);
	rb.AddForce(movement * speed);
}

function OnTriggerEnter(other : Collider){
	if(other.gameObject.CompareTag ("Pick Up")){
		other.gameObject.SetActive (false);
		count++;
		setCountText();
	}
}

function restartGame() {
  speed = 0;
  count = 0;
  countText.text = "Count: 0";
  winText.text = "0";
  Application.LoadLevel(0);
}

function setCountText(){
	countText.text = "Count: " + count.ToString();
	if(count >= 12){
		winText.text = "You Win!!!";
		yield WaitForSeconds (5);
    	restartGame();
	}
}

function Start () {
	rb = GetComponent.<Rigidbody>();	
	count = 0;
	setCountText();
	winText.text = "";
}