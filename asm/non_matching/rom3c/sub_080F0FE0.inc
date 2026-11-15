	THUMB_FUNC_START sub_080F0FE0
sub_080F0FE0: @ 0x080F0FE0
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080F1000  @ =gRam
	ldr r3, _080F1004  @ =0x00001AE2
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F1008
	add r0, r2, #0
	mov r1, #47
	mov r2, sp
	bl sub_080C9564
	b _080F101E
_080F1000:
	.4byte gRam
_080F1004:
	.4byte 0x00001AE2
_080F1008:
	ldr r0, _080F1024  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r2, #0
	mov r1, #48
	mov r2, sp
	bl sub_080C9564
_080F101E:
	add sp, sp, #4
	pop {r0}
	bx r0
_080F1024:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F0FE0

