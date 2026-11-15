	THUMB_FUNC_START sub_08032D88
sub_08032D88: @ 0x08032D88
	push {r4-r6,lr}
	ldr r5, _08032DC8  @ =gUnknown_0202A7E0
	ldr r0, [r5, #32]
	ldr r4, _08032DCC  @ =gUnknown_08427A40
	add r1, r4, #0
	mov r2, #120
	bl sub_0803D7E8
	ldr r0, [r5, #32]
	mov r6, #1
	strb r6, [r0, #20]
	ldr r0, [r5, #52]
	add r1, r4, #4
	mov r2, #120
	bl sub_0803D7E8
	ldr r0, [r5, #52]
	strb r6, [r0, #20]
	ldr r0, [r5, #72]
	add r4, r4, #8
	add r1, r4, #0
	mov r2, #120
	bl sub_0803D7E8
	ldr r0, [r5, #72]
	strb r6, [r0, #20]
	ldr r0, _08032DD0  @ =0x00000201
	bl play_sound
	pop {r4-r6}
	pop {r0}
	bx r0
_08032DC8:
	.4byte gUnknown_0202A7E0
_08032DCC:
	.4byte gUnknown_08427A40
_08032DD0:
	.4byte 0x00000201
	THUMB_FUNC_END sub_08032D88

