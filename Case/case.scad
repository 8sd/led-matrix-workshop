$fn=50;
// Box dimensions
box_x = 70;
box_y = 40;
box_z = 40;
thickness = 3;

//Led-Matrix dimensions
lm_x = 65.3;
lm_vx = 54;
lm_y = 30.5;
lm_vy = 22;
lm_z = 2;
lm_z_withLEDs = 2.3;

module single_jack_mount () {
  difference () {
    cube ([4,2.5,5]);
    translate ([1.5,1.5,-1]) cube ([3,2,7]);
  }
}

module jack_mount () {
  rotate([0,0,180]){
    single_jack_mount();
    translate ([0,14,5]) rotate ([180,0,0]) single_jack_mount();
  }
}

module single_lm_guide (guide_height = 1) {
  linear_extrude(height=guide_height) polygon([
    [0,0],
    [0,thickness],
    [thickness,0]
  ]);
}

module lm_guide () {
  rotate([270,0,0]) single_lm_guide (box_y-2*thickness);
  translate ([box_x-2*thickness,box_y-2*thickness,0]) rotate([270,0,180]) single_lm_guide (box_y-2*thickness);
}

module eps_one_socket () {
    cube([5,5,5]);
  
}

module esp_socket () {
  difference() {
    union () {
      translate([(box_x-51)/2, thickness+2, thickness]) eps_one_socket(); //Socket for esp
      translate([(box_x-51)/2, thickness+26, thickness]) eps_one_socket(); //Socket for esp
      translate([(box_x-51)/2+47, thickness+2, thickness]) eps_one_socket(); //Socket for esp
      translate([(box_x-51)/2+47, thickness+26, thickness]) eps_one_socket(); //Socket for esp
    }
    union(){
      translate([(box_x-51)/2+3, thickness+5,thickness+1]){
        cylinder(d=2.5, h=5);
        translate([46,0,0]) cylinder(d=2.5, h=5);
        translate([0,23.5,0]) cylinder(d=2.5, h=5);
        translate([46,23.5,0]) cylinder(d=2.5, h=5);
      }
    }
  }
}

module case () {
  union () {
    difference () {
      
      minkowski() {
        cube([box_x,box_y,box_z-2]); // make outer box
        sphere(r=1);
      }
      union () {
        translate ([thickness,-1,thickness]) cube([box_x-2*thickness,box_y-thickness+1,box_z-2*thickness]); // make outer box hollow
        translate ([(box_x-lm_x)/2,(box_y-lm_y)/2-20,box_z-thickness-lm_z_withLEDs]) cube ([lm_x,lm_y+22,lm_z]); // cut space for LED-Matrix
        translate ([(box_x-lm_vx)/2, box_y-thickness-lm_vy, box_z-thickness-1]) cube([lm_vx,lm_vy,thickness+2]); // view port for lm
        translate ([-1,(box_y+thickness)/2,(box_z+thickness)/2]) rotate ([0,90,0]) cylinder(r=3, h=5);//switch
        translate ([box_x-thickness-1,(box_y+thickness)/2,(box_z+thickness)/2]) rotate ([0,90,0]) cylinder(r=4.1, h=5);//power
        translate ([-1,(box_y-15)/2,2*thickness-1.5]) cube([5, 15, 8]);//usb
        translate([-1,2,1.5]) cube ([box_x,2,box_z-3]);//Guidance back

      }
    }
    translate([thickness,thickness+1,box_z-thickness-lm_z_withLEDs]) lm_guide(); //Guidance
    translate([-1,box_y-13,box_z/2+8]) rotate([90,0,270]) linear_extrude(height=1) scale ([0.5,0.5]) text("8sd"); //name
    esp_socket();
    translate([box_x-thickness-3.5,(box_y+thickness)/2-3,(box_z+thickness)/2+6]) rotate([90,0,180]) jack_mount();
  }
}

module back () {
  difference() {
    cube ([box_x,1.5,box_z-4]);
    translate ([box_x/4,3,box_z/2]) rotate([90,0,0]) cylinder(d=1, h=4);
  }
}

!rotate ([270,0,0]) 
  case ();
rotate([90,0,0]) translate([-100,2,1.5]) back();