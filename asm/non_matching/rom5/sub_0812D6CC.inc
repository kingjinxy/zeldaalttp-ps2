	THUMB_FUNC_START sub_0812D6CC
sub_0812D6CC: @ 0x0812D6CC
	push {r4,lr}
	bl sub_08126D5C
	ldr r4, _0812D708  @ =gRam
	ldr r1, _0812D70C  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812D728
	bl sub_08133694
	ldr r1, _0812D710  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0812D71C
	ldr r0, _0812D714  @ =0x000009E8
	add r1, r4, r0
	mov r0, #42
	strh r0, [r1]
	ldr r0, _0812D718  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_0812E47C
	b _0812D728
_0812D708:
	.4byte gRam
_0812D70C:
	.4byte 0x00000996
_0812D710:
	.4byte 0x00000CF8
_0812D714:
	.4byte 0x000009E8
_0812D718:
	.4byte 0x000009AD
_0812D71C:
	cmp r0, #13
	bne _0812D728
	ldr r0, _0812D730  @ =0x00000514
	add r1, r4, r0
	ldr r0, _0812D734  @ =0x0000F441
	strh r0, [r1]
_0812D728:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812D730:
	.4byte 0x00000514
_0812D734:
	.4byte 0x0000F441
	THUMB_FUNC_END sub_0812D6CC

