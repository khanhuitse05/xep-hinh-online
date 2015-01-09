/*
	Name: Scripts.js
	Date: March 2010
	Description: Homepage Scripts for Enrique Ramirez website.
	Version: 1.0
	Coder: Enrique Ramirez
	Coder URI: http://enrique-ramirez.com
*/
$(document).ready(function(){

	/* Dropdown
	-----------------------------------------------*/
	/* Removing no-javascript class :) */
	$(".nojs").removeClass("nojs");

	// Alakazam!
	$("#drop, #drop ul").mouseover(function(event){
		$("#drop ul").slideDown().stop(true, true);
		
	});
	$("#drop").mouseleave(function(){
		$("#drop ul").slideUp().stop(true, true);
		
	});
	$('#header .nav > li').each(function(){
		
		$(this).css('width',$(this).width());
	});
	$('#header .nav li').hover(function(){
		$(this).find('ul').css('display','block');
	},function(){
	$(this).find('ul').css('display','none');

	});
});