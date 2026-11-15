	THUMB_FUNC_START sub_0812673C
sub_0812673C: @ 0x0812673C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0812679C  @ =gUnknown_03000050
	ldrh r1, [r2, #8]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08126760
	add r0, r2, #0
	add r0, r0, #88
	add r0, r3, r0
	ldr r1, _081267A0  @ =gUnknown_08180928
	add r1, r3, r1
	ldrb r1, [r1]
	ldrb r4, [r0]
	add r1, r1, r4
	strb r1, [r0]
_08126760:
	ldrh r1, [r2, #8]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0812677C
	add r0, r2, #0
	add r0, r0, #96
	add r0, r3, r0
	ldr r1, _081267A4  @ =gUnknown_0818092B
	add r1, r3, r1
	ldrb r1, [r1]
	ldrb r4, [r0]
	add r1, r1, r4
	strb r1, [r0]
_0812677C:
	cmp r3, #0
	bne _081267AC
	add r4, r2, #0
	add r4, r4, #48
	ldr r0, _081267A8  @ =gUnknown_0818092E
	ldrb r1, [r0]
	ldrb r0, [r4]
	cmp r0, r1
	bcs _081267CC
	strb r1, [r4]
	add r0, r2, #0
	add r0, r0, #88
	strb r3, [r0]
	add r0, r0, #8
	strb r3, [r0]
	b _081267CC
_0812679C:
	.4byte gUnknown_03000050
_081267A0:
	.4byte gUnknown_08180928
_081267A4:
	.4byte gUnknown_0818092B
_081267A8:
	.4byte gUnknown_0818092E
_081267AC:
	cmp r3, #2
	bne _081267CC
	add r4, r2, #0
	add r4, r4, #50
	ldr r0, _081267F8  @ =gUnknown_0818092E
	ldrb r1, [r0, #2]
	ldrb r0, [r4]
	cmp r0, r1
	bls _081267CC
	mov r0, #0
	strb r1, [r4]
	add r1, r2, #0
	add r1, r1, #90
	strb r0, [r1]
	add r1, r1, #8
	strb r0, [r1]
_081267CC:
	add r0, r2, #0
	add r0, r0, #72
	add r4, r3, r0
	ldr r0, _081267FC  @ =gUnknown_08180931
	add r0, r3, r0
	ldrb r1, [r0]
	ldrb r0, [r4]
	cmp r0, r1
	bcs _081267F2
	mov r0, #0
	strb r1, [r4]
	add r1, r2, #0
	add r1, r1, #88
	add r1, r3, r1
	strb r0, [r1]
	add r1, r2, #0
	add r1, r1, #96
	add r1, r3, r1
	strb r0, [r1]
_081267F2:
	pop {r4}
	pop {r0}
	bx r0
_081267F8:
	.4byte gUnknown_0818092E
_081267FC:
	.4byte gUnknown_08180931
	THUMB_FUNC_END sub_0812673C

