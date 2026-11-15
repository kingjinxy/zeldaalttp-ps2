	THUMB_FUNC_START sub_080B6518
sub_080B6518: @ 0x080B6518
	push {r4,lr}
	bl sub_0808ABA4
	bl sub_08069FF4
	ldr r3, _080B6554  @ =gRam
	ldr r1, _080B6558  @ =0x0000099D
	add r0, r3, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	cmp r2, #0
	bne _080B654E
	ldr r4, _080B655C  @ =0x00000A1A
	add r0, r3, r4
	ldrh r1, [r0]
	sub r4, r4, #110
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _080B6560  @ =0x000009AD
	add r0, r3, r1
	strb r2, [r0]
	add r4, r4, #160
	add r0, r3, r4
	strh r2, [r0]
	add r1, r1, #59
	add r0, r3, r1
	strh r2, [r0]
_080B654E:
	pop {r4}
	pop {r0}
	bx r0
_080B6554:
	.4byte gRam
_080B6558:
	.4byte 0x0000099D
_080B655C:
	.4byte 0x00000A1A
_080B6560:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B6518

