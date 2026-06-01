/* Copyright 2020 IFo Hancroft
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x15(
    QK_GRAVE_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_INS, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LBRC, KC_RBRC, KC_DEL,
    MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_ENT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_HOME), KC_PGDN, KC_PGUP, KC_END,
    KC_LCTL, KC_LGUI, KC_LALT, MO(3), KC_LBRC, KC_RBRC, KC_ENT, KC_SPC, KC_RALT, KC_RCTL, LT(2, KC_KP_ENTER), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
  ),

  [1] = LAYOUT_ortho_5x15(
    S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_PMNS, KC_PPLS, KC_PSLS, KC_PAST,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_7, KC_KP_8, KC_KP_9,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_COMM), S(KC_DOT), KC_TRNS, KC_NUM, KC_KP_1, KC_KP_2, KC_KP_3,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_PEQL, KC_PSCR, KC_KP_0, KC_KP_DOT
  ),

  [2] = LAYOUT_ortho_5x15(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
  ),

  [3] = LAYOUT_ortho_5x15(
    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO,
    QK_BOOT, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_NO, KC_MUTE,
    TG(1), KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_NO, KC_NO, RM_ON, RGB_MOD, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, KC_BRIU, KC_VOLU,
    KC_CAPS, KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_NO, RM_OFF, RGB_RMOD, RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD, KC_BRID, KC_VOLD,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_9), S(KC_0), KC_MINS, KC_NO, KC_NO, KC_NO, TG(2), KC_NO, TG(1), KC_NO, KC_NO
  )
};

#define COLS 15
#define ROWS 5
#define RED 255, 0, 0
#define GREEN 0, 255, 0
#define BLUE 0, 0, 255
#define YELLOW 255, 255, 0
#define CYAN 0, 255, 255
#define MAGENTA 255, 0, 255
#define WHITE 255, 255, 255
#define BLACK 0, 0, 0

#define RED_HUE 0
#define ORANGE_HUE 21
#define YELLOW_HUE 43
#define LIME_HUE 64
#define GREEN_HUE 85
#define TEAL_HUE 107
#define CYAN_HUE 128
#define AZURE_HUE 149
#define BLUE_HUE 170
#define VIOLET_HUE 192
#define MAGENTA_HUE 213
#define ROSE_HUE 234

/* #define NUMBERS_CLR WHITE */
/* #define PAD_ARROW_CLR RED */
/* #define MOVEMENT_CLR BLUE */
/* #define CAPS_CLR WHITE */
/* #define FKEY_CLR GREEN */
/* #define RGB_CLR RED */
/* #define MEDIA_CLR MAGENTA */
/* #define VOL_CLR YELLOW */
/* #define BRIGHT_CLR YELLOW */

#define NUMBERS_CLR CYAN_HUE
#define PAD_ARROW_CLR RED_HUE
#define MOVEMENT_CLR BLUE_HUE
#define CAPS_CLR MAGENTA_HUE
#define FKEY_CLR GREEN_HUE
#define RGB_CLR RED_HUE
#define MEDIA_CLR MAGENTA_HUE
#define VOL_CLR YELLOW_HUE
#define BRIGHT_CLR YELLOW_HUE
#define LETTERS_CLR ORANGE_HUE
#define LETTERS_LEFT_CLR (LETTERS_CLR - 12)
#define LETTERS_RIGHT_CLR (LETTERS_CLR + 12)
#define CONTROL_CLR RED_HUE
#define SPECIAL_CLR MAGENTA_HUE
#define ACTION_CLR BLUE_HUE

#define NUMBER_LAYER 1
#define MOVEMENT_LAYER 2
#define FUNCTION_LAYER 3
#define EXTRA_LAYER 4

/**
 * Resolves the active keycode at a specific coordinate by walking down 
 * the layer stack from the current active layer to Layer 0.
 */
uint16_t get_resolved_keycode(uint8_t row, uint8_t col) {
  uint8_t layer = get_highest_layer(layer_state);
    
  for (int i = layer; i >= 0; i--) {
	uint16_t keycode = dynamic_keymap_get_keycode(i, row, col);

	if (keycode != KC_TRNS) {
	  return keycode;
	}
  }
  return KC_NO; // Fallback if somehow nothing is found
}

static bool host_is_muted = false;

static bool custom_lighting = false;
#define set_color(idx, huev) set = true; hue = huev
#define set_white() set = true; target_sat = 0

bool rgb_matrix_indicators_user(void) {
  uint8_t layer = get_highest_layer(layer_state);
  //  uint8_t current_hue = rgb_matrix_get_hue();
  uint8_t current_sat = rgb_matrix_get_sat();
  uint8_t current_val = rgb_matrix_get_val();

  bool ctrl_pressed  = (get_mods() & MOD_MASK_CTRL);
  bool shift_pressed = (get_mods() & MOD_MASK_SHIFT);
  bool alt_pressed   = (get_mods() & MOD_MASK_ALT);
  bool gui_pressed   = (get_mods() & MOD_MASK_GUI);

  
  for (uint8_t row = 0; row < 5; row++) {
	for (uint8_t col = 0; col < 15; col++) {
	  uint16_t keycode0 = keymap_key_to_keycode(0, (keypos_t){.row = row, .col = col});
	  uint16_t keycode0f = (keycode0 & 0xFF );
	  uint16_t keycodec = keymap_key_to_keycode(layer, (keypos_t){.row = row, .col = col});
	  // This is the "proper" QMK way to find the active keycode
	  /* uint16_t keycode = get_resolved_keycode(row, col); */
	  uint8_t hue;
	  bool set = false;
	  uint8_t target_sat = current_sat;
		  
	  uint8_t led_idx = g_led_config.matrix_co[row][col];

	  /* uint16_t keycode = dynamic_keymap_get_keycode(layer, row, col); */
	  /* uint16_t keycode = pgm_read_word(&keymap(s[layer][row][col]); */

	  if (host_is_muted && row == 0 && col == 0) {
		rgb_matrix_set_color(led_idx, RED);
	  }

	  if (led_idx >= RGB_MATRIX_LED_COUNT) {
		continue; // I assume this can't happen.
	  }
	  /* if (!host_keyboard_led_state().num_lock && keycode == KC_NUM_LOCK) { */
	  /*   rgb_matrix_set_color(led_idx, PAD_ARROW_CLR); */
	  /* /\* } else if (IS_LAYER_ON(NUMBER_LAYER) && keycode == TG(1)) { *\/ */
	  /*   rgb_matrix_set_color(led_idx, NUMBERS); */
	  /* } else */
	  if (host_keyboard_led_state().caps_lock && (keycodec >= KC_A && keycodec <= KC_Z)) {
		  if (keycode0f == KC_F || keycode0f == KC_J) {
			set_white();
		  } else if (col < 6) { // Adjust '7' based on your physical split point
			set_color(led_idx, LETTERS_LEFT_CLR);
		  } else {
			set_color(led_idx, LETTERS_RIGHT_CLR);
		  }
	  } else
		if (layer == EXTRA_LAYER) {
		/* if ((col >= 1 && col < 13 && row < 2) */
		if (keycodec != KC_TRNS && keycodec != KC_NO) {
		  set_color(led_idx, GREEN_HUE);
		}
		/*   if ((keycode >= KC_F1 && keycode <= KC_F24) */
		/* 	  || keycode == KC_CUT || keycode == KC_COPY || keycode == KC_PSTE) { */
		/* 	rgb_matrix_set_color(led_idx, GREEN); */
		/* 	} */
	  } else if (IS_LAYER_ON(NUMBER_LAYER) || IS_LAYER_ON(MOVEMENT_LAYER) || IS_LAYER_ON(FUNCTION_LAYER)) {
		if (keycode0 == TG(NUMBER_LAYER)) {
		  if (IS_LAYER_ON(MOVEMENT_LAYER)) {
			set_color(led_idx, MOVEMENT_CLR);
		  } else if (IS_LAYER_ON(NUMBER_LAYER)) {
			set_color(led_idx, NUMBERS_CLR);
		  }
		}
		switch (keycodec) {
		case KC_TILD:
		case KC_EXLM:
		case KC_AT:
		case KC_HASH:
		case KC_DLR:
		case KC_PERC:
		case KC_CIRC:
		case KC_AMPR:
		case KC_ASTR:
		case KC_LPRN:
		case KC_RPRN:
		case KC_MINUS:
		case KC_KP_MINUS:
		case KC_KP_PLUS:
		case KC_KP_SLASH:
		case KC_KP_ASTERISK:
		case KC_KP_EQUAL:
		case KC_LT:
		case KC_GT:
		case KC_PSCR:
		  set_color(led_idx, SPECIAL_CLR);
		  break;
		case KC_KP_9:
		case KC_KP_8:
		case KC_KP_7:
		case KC_KP_6:
		case KC_KP_5:
		case KC_KP_4:
		case KC_KP_3:
		case KC_KP_2:
		case KC_KP_1:
		case KC_KP_0:
		case KC_KP_DOT:
		case KC_NUM_LOCK:
		  if (host_keyboard_led_state().num_lock) {
			set_color(led_idx, NUMBERS_CLR);
		  } else {
			set_color(led_idx, PAD_ARROW_CLR);
		  }
		  break;
		case QK_BOOT:
		  set_color(led_idx, RED_HUE);
		  break;
		case KC_F1:
		case KC_F2:
		case KC_F3:
		case KC_F4:
		case KC_F5:
		case KC_F6:
		case KC_F7:
		case KC_F8:
		case KC_F9:
		case KC_F10:
		case KC_F11:
		case KC_F12:
		case KC_F13:
		case KC_F14:
		case KC_F15:
		case KC_F16:
		case KC_F17:
		case KC_F18:
		case KC_F19:
		case KC_F20:
		case KC_F21:
		case KC_F22:
		case KC_F23:
		case KC_F24:
		case KC_CUT:
		case KC_COPY:
		case KC_PSTE:
		  set_color(led_idx, FKEY_CLR);
		  break;
		case KC_BRIU:
		case KC_BRID:
		  set_color(led_idx, BRIGHT_CLR);
		case KC_VOLU:
		case KC_VOLD:
		case KC_MUTE:
		  set_color(led_idx, VOL_CLR);
		  break;
		case RGB_RMOD:
		case RGB_MOD:
		case RM_OFF:
		case RM_ON:
		case RGB_SPD:
		case RGB_SPI:
		case RGB_VAD:
		case RGB_VAI:
		case RGB_HUD:
		case RGB_HUI:
		case RGB_SAD:
		case RGB_SAI:
		  set_color(led_idx, RGB_CLR);
		  break;
		case KC_MPRV:
		case KC_MNXT:
		case KC_MPLY:
		case KC_MSTP:
		  set_color(led_idx, MEDIA_CLR);
		  break;
		case KC_WH_L:
		case KC_WH_D:
		case KC_WH_U:
		case KC_WH_R:
		case KC_BTN1:
		case KC_BTN2:
		case KC_BTN3:
		case KC_BTN4:
		case KC_MS_L:
		case KC_MS_D:
		case KC_MS_U:
		case KC_MS_R:
		case KC_HOME:
		case KC_PGUP:
		case KC_PGDN:
		case KC_END:
		case KC_LEFT:
		case KC_DOWN:
		case KC_UP:
		case KC_RIGHT:
		  set_color(led_idx, MOVEMENT_CLR);
		  break;
		case KC_NO:
		  rgb_matrix_set_color(led_idx, BLACK);
		}
	  } else if (shift_pressed || ctrl_pressed || gui_pressed || alt_pressed) {
		// 1. Modifier keys (e.g., Shift, Alt, GUI)
		/* if (keycode0 != keycode0f) { */
		/* set_white(); */
		/* } else */
		if (keycode0f >= KC_LCTL && keycode0f <= KC_RGUI) {
		  set_color(led_idx, CONTROL_CLR);
		} 
		// 2. Action keys (Esc, Enter, etc.)
		else if (keycode0 == QK_GRAVE_ESCAPE
				 || keycode0f == KC_ESC
				 || keycode0f == KC_ENT
				 || keycode0f == KC_KP_ENTER) {
		  set_color(led_idx, ACTION_CLR);
		} else if (keycode0 > 0xFF) {
		  rgb_matrix_set_color(led_idx, BLACK);
		  // 3. Numbers (0-9)
		} else if ((keycode0f >= KC_1 && keycode0f <= KC_0)) {
		  set_color(led_idx, NUMBERS_CLR);
		}
		// 4. Special Characters (Pipe, /, ?, :)k
		else if (keycode0f == KC_MINUS
				 || keycode0f == KC_EQUAL
				 || keycode0f == KC_BSLS
				 || keycode0f == KC_LBRC
				 || keycode0f == KC_RBRC
				 || keycode0f == KC_SCLN
				 || keycode0f == KC_QUOT
				 || keycode0f == KC_COMMA
				 || keycode0f == KC_DOT
				 || keycode0f == KC_SLASH) {
		  set_color(led_idx, SPECIAL_CLR);
		}
		// 5. Left Hand vs Right Hand Alphabets
		else if ((keycode0f>= KC_A && keycode0f<= KC_Z) || keycode0f== KC_SPACE || keycode0f== KC_TAB) {
		  if (keycode0f == KC_F || keycode0f == KC_J) {
			set_white();
		  } else if (col < 6) { // Adjust '7' based on your physical split point
			set_color(led_idx, LETTERS_LEFT_CLR);
		  } else {
			set_color(led_idx, LETTERS_RIGHT_CLR);
		  }
		} else {
		  rgb_matrix_set_color(led_idx, BLACK);
		}
	  }
	  if (set) {
		HSV hsv = { hue, target_sat, current_val };
		RGB rgb = hsv_to_rgb(hsv);
		rgb_matrix_set_color(led_idx, rgb.r, rgb.g, rgb.b);
	  }
	}
  }
  return false;
}

/**
   this is potentially a way for the host computer to send custom
   packets to the keyboard, but it isn't fleshed out or implemented
   See below
*/
void raw_hid_receive_user(uint8_t *data, uint8_t length) {
  if (data[0] == 0xEE
	  ) {
	host_is_muted = (data[1] == 0x01 );
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_USER_0:
	if (record->event.pressed) {
	  custom_lighting = !custom_lighting;
	}
	return false;
	break;
  case QK_GRAVE_ESCAPE:
	uint8_t mods = get_mods();
	
	if (!record->event.pressed && is_key_pressed(KC_GRV)) {
	  unregister_code(KC_GRV);
	  send_keyboard_report();
	  return false;
	}
    
	// Check if GUI is held down when you initially press the key
	if (record->event.pressed && mods & MOD_BIT(KC_LGUI)) {
	  // 1. Kill the GUI modifier right now so the OS stops looking for shortcuts
	  del_mods(MOD_BIT(KC_LGUI));
	  // 2. Press down the raw backtick key
	  register_code(KC_GRV);
	  send_keyboard_report();
	  set_mods(get_mods() | (mods & MOD_BIT(KC_LGUI)));
      
	  return false; // Intercepted, bypass default QMK logic entirely
	}
  }
  return true;
}



/**
   sending message to here:
   sudo pacman -S hidapi
   pip install hid
   lsusb (find vendor)
   
   #!/usr/bin/env python3
   import sys
   import hid

   # Replace these hex values with your keyboard's actual VID and PID
   VENDOR_ID = 0x1209  
   PRODUCT_ID = 0x2328

   def send_hid_packet(state):
   # Most QMK/Vial keyboards expose multiple interfaces (Keyb, Mouse, Raw HID).
   # We iterate through them to find the specific "Raw HID" interface usage page.
   target_device = None
   for device_info in hid.enumerate(VENDOR_ID, PRODUCT_ID):
   # 0xFF60 is the standard QMK/Vial usage page definition for Raw HID communication
   if device_info['usage_page'] == 0xFF60:
   target_device = device_info['path']
   break





















   if not target_device:
   print("Error: Could not find the Raw HID interface for this keyboard.")
   return

   try:
   # Open the raw communication path
   device = hid.device()
   device.open_path(target_device)
        
   # QMK raw HID packets MUST be exactly 32 bytes long.
   # Index 0 is the Windows report ID placeholder (always 0x00).
   # Index 1 is your firmware signature byte (0xEE).
   # Index 2 is your state value (0x01 for ON, 0x00 for OFF).
   packet = [0x00] * 33 
   packet[1] = 0xEE
   packet[2] = 0x01 if state == "on" else 0x00
        
   # Write the 32-byte chunk to the device
   device.write(packet)
   device.close()
   print(f"Successfully sent Numpad Light command: {state.upper()}")
        
   except Exception as e:
   print(f"Failed to communicate with keyboard: {e}")

   if __name__ == "__main__":
   if len(sys.argv) < 2 or sys.argv[1] not in ["on", "off"]:
   print("Usage: ./toggle_numpad.py [on|off]")
   sys.exit(1)
        
   send_hid_packet(sys.argv[1])

   sudo nano /etc/udev/rules.d/99-vial-rawhid.rules
   SUBSYSTEMS=="usb", ATTRS{idVendor}=="1209", ATTRS{idProduct}=="2328", MODE="0660", TAG+="uaccess"
   sudo udevadm control --reload-rules && sudo udevadm trigger
   chmod +x toggle_numpad.py
   ./toggle_numpad.py on

*/
