	THUMB_FUNC_START sub_08010CCC
sub_08010CCC: @ 0x08010CCC
	push {lr}
	add r2, r0, #0
	ldr r3, _08010D0C  @ =gUnknown_02016D60
	cmp r2, #1
	bls _08010CE2
	add r0, r3, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r0, #1
	add r2, r0, #0
	eor r2, r2, r1
_08010CE2:
	add r0, r3, #0
	add r0, r0, #33
	ldrb r1, [r0]
	cmp r2, r1
	beq _08010D08
	strb r2, [r0]
	ldr r1, _08010D10  @ =gUnknown_08137F64
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r2, [r0]
	ldr r0, _08010D14  @ =0x03000030
	ldr r0, [r0]
	add r0, r0, r2
	ldr r1, _08010D18  @ =0x0600E800
	bl LZ77UnCompVram
	mov r0, #66
	bl play_sound
_08010D08:
	pop {r0}
	bx r0
_08010D0C:
	.4byte gUnknown_02016D60
_08010D10:
	.4byte gUnknown_08137F64
_08010D14:
	.4byte 0x03000030
_08010D18:
	.4byte 0x0600E800
	THUMB_FUNC_END sub_08010CCC

