	THUMB_FUNC_START sub_080F0D84
sub_080F0D84: @ 0x080F0D84
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	mov r1, #169
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F0DAC
	ldr r0, _080F0DC8  @ =gRam
	ldr r1, _080F0DCC  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
_080F0DAC:
	ldr r0, _080F0DC8  @ =gRam
	ldr r2, _080F0DD0  @ =0x00000F52
	add r1, r0, r2
	add r1, r5, r1
	add r2, r2, #48
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0DC8:
	.4byte gRam
_080F0DCC:
	.4byte 0x00000FB2
_080F0DD0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F0D84

