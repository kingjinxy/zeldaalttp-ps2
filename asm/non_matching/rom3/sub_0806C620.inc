	THUMB_FUNC_START sub_0806C620
sub_0806C620: @ 0x0806C620
	push {r4,lr}
	ldr r4, _0806C650  @ =gRam
	ldr r1, _0806C654  @ =0x00000CB2
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806C632
	bl sub_08133600
_0806C632:
	bl sub_0806C544
	bl sub_0806C4EC
	ldr r1, _0806C658  @ =0x000009D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #179
	bne _0806C660
	ldr r0, _0806C65C  @ =0x0000050C
	add r1, r4, r0
	mov r0, #200
	lsl r0, r0, #5
	strh r0, [r1]
	b _0806C682
_0806C650:
	.4byte gRam
_0806C654:
	.4byte 0x00000CB2
_0806C658:
	.4byte 0x000009D4
_0806C65C:
	.4byte 0x0000050C
_0806C660:
	cmp r0, #176
	beq _0806C682
	ldr r1, _0806C6C8  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #100
	beq _0806C682
	cmp r0, #101
	beq _0806C682
	ldr r0, _0806C6CC  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _0806C6D0  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r2]
_0806C682:
	ldr r4, _0806C6D4  @ =gRam
	ldr r0, _0806C6D8  @ =0x00000CF8
	add r1, r4, r0
	mov r2, #0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0806C6DC  @ =0x00000CFC
	add r0, r4, r1
	strh r2, [r0]
	ldr r0, _0806C6E0  @ =0x00000CFA
	add r1, r4, r0
	mov r0, #2
	strh r0, [r1]
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	strh r2, [r0]
	bl sub_0813041C
	bl sub_08133034
	bl sub_0813309C
	bl sub_081300EC
	bl sub_081304D4
	ldr r0, _0806C6E4  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_0806C6C8:
	.4byte 0x000009DA
_0806C6CC:
	.4byte 0x00000514
_0806C6D0:
	.4byte 0x0000FFFC
_0806C6D4:
	.4byte gRam
_0806C6D8:
	.4byte 0x00000CF8
_0806C6DC:
	.4byte 0x00000CFC
_0806C6E0:
	.4byte 0x00000CFA
_0806C6E4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C620

