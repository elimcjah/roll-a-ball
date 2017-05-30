#pragma strict

var offset : Vector3;
var player : GameObject;

function LateUpdate () {
	transform.position = player.transform.position + offset;
}

function Start () {
	offset = transform.position - player.transform.position;
}
