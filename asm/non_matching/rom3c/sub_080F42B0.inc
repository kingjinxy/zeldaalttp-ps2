	THUMB_FUNC_START sub_080F42B0
sub_080F42B0: @ 0x080F42B0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F42DC  @ =gRam
	ldr r1, _080F42E0  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F42E8
	add r0, r4, #0
	mov r1, #39
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080F42E4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080F42F2
_080F42DC:
	.4byte gRam
_080F42E0:
	.4byte 0x00001AE2
_080F42E4:
	.4byte 0x00000F52
_080F42E8:
	ldr r1, _080F42FC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
_080F42F2:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F42FC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F42B0

