	THUMB_FUNC_START sub_0810DB88
sub_0810DB88: @ 0x0810DB88
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080E2614
	ldr r5, _0810DBF4  @ =gRam
	ldr r1, _0810DBF8  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _0810DBCC
	bl GetRandomInt
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810DBFC  @ =0x00000FB2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #3
	and r1, r1, r0
	strb r1, [r2]
	ldr r1, _0810DC00  @ =0x00000F52
	add r2, r5, r1
	add r2, r4, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	mov r1, #127
	and r1, r1, r0
	add r1, r1, #64
	strb r1, [r6]
_0810DBCC:
	ldr r1, _0810DC04  @ =0x00000F62
	add r0, r5, r1
	add r3, r7, r0
	ldr r4, _0810DC08  @ =gUnknown_0817CF18
	add r1, r1, #80
	add r0, r5, r1
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r2, r0, #1
	ldr r1, _0810DC0C  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0810DC10
	mov r0, #1
	orr r0, r0, r2
	b _0810DC12
	.byte 0x00
	.byte 0x00
_0810DBF4:
	.4byte gRam
_0810DBF8:
	.4byte 0x00000FC2
_0810DBFC:
	.4byte 0x00000FB2
_0810DC00:
	.4byte 0x00000F52
_0810DC04:
	.4byte 0x00000F62
_0810DC08:
	.4byte gUnknown_0817CF18
_0810DC0C:
	.4byte 0x00000996
_0810DC10:
	add r0, r2, #0
_0810DC12:
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r3]
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810DB88

	.byte 0x00
	.byte 0x00
