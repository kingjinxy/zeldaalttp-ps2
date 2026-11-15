	THUMB_FUNC_START sub_080E25A8
sub_080E25A8: @ 0x080E25A8
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080E25F8  @ =gRam
	ldr r0, _080E25FC  @ =0x000009AD
	add r6, r4, r0
	ldrb r1, [r6]
	mov r9, r1
	ldr r0, _080E2600  @ =0x00000E75
	add r4, r4, r0
	add r4, r5, r4
	ldrb r1, [r4]
	mov r8, r1
	mov r0, #0
	strb r0, [r6]
	lsr r0, r1, #1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4]
	add r0, r5, #0
	bl SpriteActive_Main
	add r0, r5, #0
	bl SpriteActive_Main
	mov r0, r8
	strb r0, [r4]
	mov r1, r9
	strb r1, [r6]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E25F8:
	.4byte gRam
_080E25FC:
	.4byte 0x000009AD
_080E2600:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080E25A8

