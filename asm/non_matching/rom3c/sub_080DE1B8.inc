	THUMB_FUNC_START sub_080DE1B8
sub_080DE1B8: @ 0x080DE1B8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DE1EC  @ =gRam
	ldr r1, _080DE1F0  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DE1D4
	bl sub_080DE0DC
	cmp r0, #0
	bne _080DE1FC
_080DE1D4:
	ldr r1, _080DE1F4  @ =0x00000103
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080DE1F8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080DE214
	.byte 0x00
	.byte 0x00
_080DE1EC:
	.4byte gRam
_080DE1F0:
	.4byte 0x00001AE2
_080DE1F4:
	.4byte 0x00000103
_080DE1F8:
	.4byte 0x00000F52
_080DE1FC:
	mov r1, #129
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DE21C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DE214:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DE21C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE1B8

