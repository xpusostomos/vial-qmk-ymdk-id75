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
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,   KC_PGDN,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, KC_RCTL, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT
 ),

 [1] = LAYOUT_ortho_5x15(
    QK_BOOT,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT
  ),

 [2] = LAYOUT_ortho_5x15(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

 [3] = LAYOUT_ortho_5x15(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
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

bool rgb_matrix_indicators_user(void) {
  uint8_t layer = get_highest_layer(layer_state);
  
  for (uint8_t row = 0; row < 5; row++) {
	for (uint8_t col = 0; col < 15; col++) {

	  /* uint16_t keycode = dynamic_keymap_get_keycode(layer, row, col); */
	  /* uint16_t keycode = pgm_read_word(&keymap(s[layer][row][col]); */
	  uint16_t keycode0 = keymap_key_to_keycode(0, (keypos_t){.row = row, .col = col});
	  uint16_t keycodec = keymap_key_to_keycode(layer, (keypos_t){.row = row, .col = col});
	  // This is the "proper" QMK way to find the active keycode
	  uint16_t keycode = get_resolved_keycode(row, col);
		  
	  uint8_t led_idx = g_led_config.matrix_co[row][col];

	  if (host_is_muted && row == 0 && col == 0) {
        rgb_matrix_set_color(led_idx, RED);
	  }

	  if (led_idx < RGB_MATRIX_LED_COUNT) {
		if (!host_keyboard_led_state().num_lock && keycode == KC_NUM_LOCK) {
		  rgb_matrix_set_color(led_idx, WHITE);
		} else if (IS_LAYER_ON(1) && keycode == TG(1)) {
		  rgb_matrix_set_color(led_idx, WHITE);
		} else if ((keycode & 0xFF) == KC_CAPS || (keycode >= KC_A && keycode <= KC_Z)) {
		  if (host_keyboard_led_state().caps_lock) {
			rgb_matrix_set_color(led_idx, WHITE);
		  }
		} else if (layer == 4) {
		  /* if ((col >= 1 && col < 13 && row < 2) */
		  if (keycodec != KC_TRNS && keycodec != KC_NO) {
			rgb_matrix_set_color(led_idx, GREEN);
		  }
		/*   if ((keycode >= KC_F1 && keycode <= KC_F24) */
		/* 	  || keycode == KC_CUT || keycode == KC_COPY || keycode == KC_PSTE) { */
		/* 	rgb_matrix_set_color(led_idx, GREEN); */
		/* 	} */
		} else if (IS_LAYER_ON(1) || IS_LAYER_ON(2) || IS_LAYER_ON(3)) {
		  if (keycode0 == TG(1)) {
			rgb_matrix_set_color(led_idx, BLUE);
		  }
		  switch (keycodec) {
		  case KC_KP_MINUS:
		  case KC_KP_PLUS:
		  case KC_KP_SLASH:
		  case KC_KP_ASTERISK:
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
		  case KC_KP_EQUAL:
		  case KC_NUM_LOCK:
		  case KC_KP_DOT:
		  case KC_LPRN:
		  case KC_RPRN:
			rgb_matrix_set_color(led_idx, WHITE);
			break;
		  case QK_BOOT:
			rgb_matrix_set_color(led_idx, RED);
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
			rgb_matrix_set_color(led_idx, GREEN);
			break;
		  case KC_BRIU:
		  case KC_BRID:
		  case KC_VOLU:
		  case KC_VOLD:
		  case KC_MUTE:
			rgb_matrix_set_color(led_idx, MAGENTA);
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
			rgb_matrix_set_color(led_idx, RED);
			break;
		  case KC_MPRV:
		  case KC_MNXT:
		  case KC_MPLY:
		  case KC_MSTP:
			rgb_matrix_set_color(led_idx, YELLOW);
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
			rgb_matrix_set_color(led_idx, BLUE);
			break;
		  case KC_NO:
			rgb_matrix_set_color(led_idx, BLACK);
		  }
		}
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

#define USER0 (DYNAMIC_KEYMAP_MACRO_COUNT + 0)
#define USER1 (DYNAMIC_KEYMAP_MACRO_COUNT + 1)
#define USER2 (DYNAMIC_KEYMAP_MACRO_COUNT + 2)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case USER0:
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
