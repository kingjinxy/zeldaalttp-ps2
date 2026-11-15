	THUMB_FUNC_START sub_080DEB74
sub_080DEB74: @ 0x080DEB74
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080DEBF4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080DEBDA
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_0810EFC0
	cmp r0, #0
	beq _080DEBDA
	mov r0, #100
	bl sub_0810EF98
	cmp r0, #0
	bne _080DEBB4
	add r0, r4, #0
	bl sub_0810F000
	b _080DEBDA
_080DEBB4:
	ldr r4, _080DEBE4  @ =gRam
	ldr r0, _080DEBE8  @ =0x00001663
	add r1, r4, r0
	mov r0, #13
	strb r0, [r1]
	bl sub_0812F9A8
	add r0, r5, #0
	bl sub_081146A4
	ldr r0, _080DEBEC  @ =0x00000FA2
	add r4, r4, r0
	add r4, r5, r4
	strb r6, [r4]
	ldr r1, _080DEBF0  @ =0x0000011D
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
_080DEBDA:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DEBE4:
	.4byte gRam
_080DEBE8:
	.4byte 0x00001663
_080DEBEC:
	.4byte 0x00000FA2
_080DEBF0:
	.4byte 0x0000011D
	THUMB_FUNC_END sub_080DEB74

