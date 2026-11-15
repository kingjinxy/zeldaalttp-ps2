	THUMB_FUNC_START sub_080E2A2C
sub_080E2A2C: @ 0x080E2A2C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080E2A78  @ =gRam
	ldr r1, _080E2A7C  @ =0x000010A2
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #16
	beq _080E2A72
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bne _080E2A72
	add r0, r2, #0
	mov r1, #81
	bl sub_080CF140
	ldr r1, _080E2A80  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080E2A72
	mov r1, #171
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #24
	bne _080E2A72
	ldr r0, _080E2A84  @ =0x00000A3C
	add r1, r4, r0
	mov r0, #22
	strh r0, [r1]
_080E2A72:
	pop {r4}
	pop {r0}
	bx r0
_080E2A78:
	.4byte gRam
_080E2A7C:
	.4byte 0x000010A2
_080E2A80:
	.4byte 0x0000165E
_080E2A84:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_080E2A2C

