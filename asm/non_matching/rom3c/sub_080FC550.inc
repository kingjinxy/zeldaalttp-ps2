	THUMB_FUNC_START sub_080FC550
sub_080FC550: @ 0x080FC550
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, #15
	ldr r4, _080FC5A0  @ =gRam
	ldr r0, _080FC5A4  @ =0x00000FA2
	add r3, r4, r0
	mov r2, #0
_080FC560:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r1, r0, r3
	strb r2, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bne _080FC560
	ldr r0, _080FC5A8  @ =0x000015F9
	add r1, r4, r0
	mov r0, #7
	strb r0, [r1]
	add r4, r1, #0
	mov r6, #128
_080FC57E:
	add r0, r5, #0
	bl sub_080FC5AC
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	and r0, r0, r6
	cmp r0, #0
	beq _080FC57E
	add r0, r5, #0
	mov r1, #109
	bl sub_080CF0AC
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FC5A0:
	.4byte gRam
_080FC5A4:
	.4byte 0x00000FA2
_080FC5A8:
	.4byte 0x000015F9
	THUMB_FUNC_END sub_080FC550

