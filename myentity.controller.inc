<?php
 class MyentityController extends DrupalDefaultEntityController{
   
   public function save($myentity) {
   drupal_write_record('myentity', $myentity);
   field_attach_insert('myentity', $myentity);
   module_invoke_all('entity_insert', 'myentity', $myentity);
   return $myentity;

 }
 }
 ?>
