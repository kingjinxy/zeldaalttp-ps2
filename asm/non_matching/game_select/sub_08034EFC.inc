	THUMB_FUNC_START sub_08034EFC
sub_08034EFC: @ 0x08034EFC
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	cmp r1, #2
	bne _08034F30
	mov r0, #0
	strb r0, [r2]
	ldr r1, _08034F28  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #13]
	mov r0, #129
	lsl r0, r0, #2
	bl play_sound
	ldr r0, _08034F2C  @ =0x00000202
	bl play_sound
	b _08034F56
_08034F28:
	.4byte gUnknown_02016D60
_08034F2C:
	.4byte 0x00000202
_08034F30:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08034F56
	ldr r1, _08034F5C  @ =gUnknown_02016D60
	mov r0, #2
	strb r0, [r1, #13]
	mov r0, #98
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	mov r1, #120
	strh r1, [r0, #50]
	mov r1, #40
	strh r1, [r0, #54]
	add r0, r4, #0
	bl DeleteThisEntity
_08034F56:
	pop {r4}
	pop {r0}
	bx r0
_08034F5C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08034EFC

