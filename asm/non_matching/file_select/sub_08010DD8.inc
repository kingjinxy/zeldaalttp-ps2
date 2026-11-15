	THUMB_FUNC_START sub_08010DD8
sub_08010DD8: @ 0x08010DD8
	push {lr}
	mov r2, #1
	ldr r0, _08010DF0  @ =gGameLanguage
	strb r2, [r0]
	mov r1, #192
	lsl r1, r1, #18
	ldrb r0, [r1, #5]
	cmp r2, r0
	bne _08010DF4
	mov r0, #0
	b _08010DFE
	.byte 0x00
	.byte 0x00
_08010DF0:
	.4byte gGameLanguage
_08010DF4:
	strb r2, [r1, #5]
	add r0, r1, #0
	bl sub_08067A48
	mov r0, #1
_08010DFE:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08010DD8

	.byte 0x00
	.byte 0x00
