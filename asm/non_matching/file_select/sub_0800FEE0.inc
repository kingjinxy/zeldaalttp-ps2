	THUMB_FUNC_START sub_0800FEE0
sub_0800FEE0: @ 0x0800FEE0
	push {r4,lr}
	bl sub_0801022C
	cmp r0, #0
	beq _0800FEEC
	b _0801008C
_0800FEEC:
	bl sub_08010DC0
	cmp r0, #0
	beq _0800FEF6
	b _0801008C
_0800FEF6:
	bl sub_080101C0
	add r2, r0, #0
	cmp r2, #0
	beq _0800FF02
	b _0801008C
_0800FF02:
	ldr r0, _0800FF1C  @ =gNewKeys
	ldrh r1, [r0]
	add r3, r0, #0
	cmp r1, #16
	beq _0800FF66
	cmp r1, #16
	bgt _0800FF20
	cmp r1, #1
	beq _0800FFB8
	cmp r1, #8
	beq _0800FFB8
	b _0801008C
	.byte 0x00
	.byte 0x00
_0800FF1C:
	.4byte gNewKeys
_0800FF20:
	cmp r1, #64
	beq _0800FF34
	cmp r1, #64
	bgt _0800FF2E
	cmp r1, #32
	beq _0800FF9E
	b _0801008C
_0800FF2E:
	cmp r1, #128
	beq _0800FF34
	b _0801008C
_0800FF34:
	ldr r2, _0800FF4C  @ =gUnknown_02016D60
	add r1, r2, #0
	add r1, r1, #32
	mov r0, #0
	strb r0, [r1]
	ldrb r1, [r2, #31]
	ldrh r0, [r3]
	add r4, r2, #0
	cmp r0, #64
	bne _0800FF50
	sub r1, r1, #1
	b _0800FF52
_0800FF4C:
	.4byte gUnknown_02016D60
_0800FF50:
	add r1, r1, #1
_0800FF52:
	mov r0, #3
	and r1, r1, r0
	strb r1, [r2, #31]
	ldrb r0, [r4, #31]
	bl sub_0800F888
	ldrb r0, [r4, #31]
	bl sub_080100E4
	b _0800FFAC
_0800FF66:
	ldr r4, _0800FF7C  @ =gUnknown_02016D60
	ldrb r0, [r4, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0800FF84
	ldr r1, _0800FF80  @ =gSubState
	mov r0, #4
	strb r0, [r1]
	b _0800FFAC
_0800FF7C:
	.4byte gUnknown_02016D60
_0800FF80:
	.4byte gSubState
_0800FF84:
	ldrb r0, [r4, #31]
	cmp r0, #3
	beq _0800FF8C
	b _0801008C
_0800FF8C:
	add r1, r4, #0
	add r1, r1, #32
	ldrb r0, [r1]
	cmp r0, #0
	beq _0800FF98
	b _0801008C
_0800FF98:
	mov r0, #1
	strb r0, [r1]
	b _0800FFAC
_0800FF9E:
	ldr r0, _0800FFB4  @ =gUnknown_02016D60
	add r1, r0, #0
	add r1, r1, #32
	ldrb r0, [r1]
	cmp r0, #0
	beq _0801008C
	strb r2, [r1]
_0800FFAC:
	mov r0, #61
	bl play_sound
	b _0801008C
_0800FFB4:
	.4byte gUnknown_02016D60
_0800FFB8:
	ldr r0, _0800FFF8  @ =gUnknown_02016D60
	ldrb r1, [r0, #31]
	add r4, r0, #0
	cmp r1, #2
	bgt _08010020
	cmp r1, #0
	blt _08010020
	mov r0, #62
	bl play_sound
	mov r1, #192
	lsl r1, r1, #18
	ldrb r0, [r4, #31]
	strb r0, [r1, #4]
	ldrb r0, [r4, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08010004
	ldr r1, _0800FFFC  @ =gUnknown_030004A0
	mov r0, #132
	lsl r0, r0, #4
	strh r0, [r1]
	bl sub_080123BC
	ldr r1, _08010000  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0801008C
_0800FFF8:
	.4byte gUnknown_02016D60
_0800FFFC:
	.4byte gUnknown_030004A0
_08010000:
	.4byte gSubState
_08010004:
	mov r0, #3
	bl sub_080100E4
	ldr r0, _08010018  @ =gUnknown_03005050
	mov r1, #5
	strb r1, [r0]
	ldr r0, _0801001C  @ =gSubState
	strb r4, [r0]
	b _0801008C
	.byte 0x00
	.byte 0x00
_08010018:
	.4byte gUnknown_03005050
_0801001C:
	.4byte gSubState
_08010020:
	add r0, r4, #0
	add r0, r0, #32
	ldrb r4, [r0]
	cmp r4, #0
	bne _0801005E
	bl sub_080111C8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _08010050
	cmp r0, #3
	beq _08010054
	ldr r0, _08010048  @ =gUnknown_03005050
	mov r1, #3
	strb r1, [r0]
	ldr r0, _0801004C  @ =gSubState
	strb r4, [r0]
	b _08010074
	.byte 0x00
	.byte 0x00
_08010048:
	.4byte gUnknown_03005050
_0801004C:
	.4byte gSubState
_08010050:
	mov r0, #0
	b _08010056
_08010054:
	mov r0, #1
_08010056:
	mov r1, #0
	bl sub_08010104
	b _0801008C
_0801005E:
	bl sub_080111C8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08010084
	ldr r1, _0801007C  @ =gUnknown_03005050
	mov r0, #4
	strb r0, [r1]
	ldr r1, _08010080  @ =gSubState
	mov r0, #0
	strb r0, [r1]
_08010074:
	mov r0, #62
	bl play_sound
	b _0801008C
_0801007C:
	.4byte gUnknown_03005050
_08010080:
	.4byte gSubState
_08010084:
	mov r0, #2
	mov r1, #0
	bl sub_08010104
_0801008C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800FEE0

	.byte 0x00
	.byte 0x00
