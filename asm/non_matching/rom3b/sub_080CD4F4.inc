	THUMB_FUNC_START sub_080CD4F4
sub_080CD4F4: @ 0x080CD4F4
	push {r4,r5,lr}
	ldr r3, _080CD534  @ =gRam
	ldr r1, _080CD538  @ =0x000009AD
	add r0, r3, r1
	ldr r2, _080CD53C  @ =0x00001605
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CD52C
	mov r1, #7
	ldr r0, _080CD540  @ =0x00000D1B
	add r5, r3, r0
_080CD510:
	lsl r2, r1, #24
	asr r4, r2, #24
	add r0, r4, r5
	ldrb r1, [r0]
	cmp r1, #0
	beq _080CD522
	lsr r0, r2, #24
	bl sub_080CD544
_080CD522:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CD510
_080CD52C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CD534:
	.4byte gRam
_080CD538:
	.4byte 0x000009AD
_080CD53C:
	.4byte 0x00001605
_080CD540:
	.4byte 0x00000D1B
	THUMB_FUNC_END sub_080CD4F4

