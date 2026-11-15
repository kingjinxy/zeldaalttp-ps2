	THUMB_FUNC_START sub_080C9704
sub_080C9704: @ 0x080C9704
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080C978C  @ =gRam
	ldr r1, _080C9790  @ =0x000013B2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080C9786
	ldr r1, _080C9794  @ =0x00001032
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080C976A
	ldr r0, _080C9798  @ =0x00001622
	add r2, r4, r0
	ldrb r1, [r2]
	add r0, r0, #1
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #4
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r1, _080C979C  @ =0x00000FF2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #223
	bne _080C976A
	ldr r0, _080C97A0  @ =0x00001624
	add r2, r4, r0
	ldrb r1, [r2]
	add r0, r0, #1
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #7
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
_080C976A:
	add r0, r5, #0
	bl sub_080C1F70
	ldr r0, _080C978C  @ =gRam
	ldr r1, _080C97A4  @ =0x00001012
	add r0, r0, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	bl sub_080CF370
_080C9786:
	pop {r4,r5}
	pop {r0}
	bx r0
_080C978C:
	.4byte gRam
_080C9790:
	.4byte 0x000013B2
_080C9794:
	.4byte 0x00001032
_080C9798:
	.4byte 0x00001622
_080C979C:
	.4byte 0x00000FF2
_080C97A0:
	.4byte 0x00001624
_080C97A4:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080C9704

