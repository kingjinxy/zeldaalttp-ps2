	THUMB_FUNC_START sub_080E39D4
sub_080E39D4: @ 0x080E39D4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E3A60  @ =gRam
	ldr r0, _080E3A64  @ =0x00001092
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E3A68  @ =gUnknown_08177188
	ldr r3, _080E3A6C  @ =0x00000FB2
	add r0, r6, r3
	add r7, r4, r0
	ldrb r0, [r7]
	add r0, r0, r2
	ldrb r0, [r0]
	mov r2, #0
	mov r8, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E2614
	ldr r3, _080E3A70  @ =0x00000FC2
	add r0, r6, r3
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E3A84
	ldr r1, _080E3A74  @ =0x00001052
	add r0, r6, r1
	add r1, r4, r0
	mov r2, r8
	strb r2, [r1]
	ldrb r0, [r5]
	cmp r0, #39
	bls _080E3A22
	mov r0, r8
	sub r0, r0, #1
	strb r0, [r1]
_080E3A22:
	ldrb r0, [r5]
	cmp r0, #12
	bne _080E3A2E
	add r0, r4, #0
	bl sub_080E3A94
_080E3A2E:
	ldrb r0, [r5]
	lsr r0, r0, #3
	ldrb r1, [r7]
	lsl r1, r1, #3
	orr r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080E3A78  @ =0x00000FF2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #72
	bne _080E3A50
	add r0, r2, #0
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r2, r0, #24
_080E3A50:
	ldr r1, _080E3A7C  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	ldr r1, _080E3A80  @ =gUnknown_0817710C
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _080E3A8A
_080E3A60:
	.4byte gRam
_080E3A64:
	.4byte 0x00001092
_080E3A68:
	.4byte gUnknown_08177188
_080E3A6C:
	.4byte 0x00000FB2
_080E3A70:
	.4byte 0x00000FC2
_080E3A74:
	.4byte 0x00001052
_080E3A78:
	.4byte 0x00000FF2
_080E3A7C:
	.4byte 0x00000F92
_080E3A80:
	.4byte gUnknown_0817710C
_080E3A84:
	add r0, r4, #0
	bl sub_080E264C
_080E3A8A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E39D4

