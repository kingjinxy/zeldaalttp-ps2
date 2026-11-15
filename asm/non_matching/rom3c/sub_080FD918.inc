	THUMB_FUNC_START sub_080FD918
sub_080FD918: @ 0x080FD918
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r1, #15
	ldr r3, _080FD9D4  @ =gUnknown_030031D2
	mov r2, #0
_080FD924:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r1, r0, r3
	strb r2, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080FD924
	mov r0, #171
	mov r1, #0
	bl sub_080CA538
	add r4, r0, #0
	ldr r6, _080FD9D8  @ =gRam
	ldr r0, _080FD9DC  @ =0x00000F02
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080FD9E0  @ =0x000016C5
	add r0, r6, r2
	ldrb r0, [r0]
	mov r5, #0
	strb r0, [r1]
	ldr r1, _080FD9E4  @ =0x00000EF2
	add r0, r6, r1
	add r0, r4, r0
	sub r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FD9E8  @ =0x00000EE2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #120
	strb r1, [r0]
	ldr r2, _080FD9EC  @ =0x00000ED2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #124
	strb r1, [r0]
	ldr r1, _080FD9F0  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	mov r2, #1
	mov r8, r2
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080FD9F4  @ =0x00001122
	add r0, r6, r2
	add r7, r4, r0
	mov r0, #11
	strb r0, [r7]
	ldr r1, _080FD9F8  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	sub r2, r2, #48
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _080FD9FC  @ =0x00001012
	add r2, r6, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	bl sub_080AB73C
	ldr r2, _080FDA00  @ =0x00001776
	add r1, r6, r2
	strb r5, [r1]
	ldr r2, _080FDA04  @ =0x00000F62
	add r1, r6, r2
	add r4, r4, r1
	strb r0, [r4]
	ldr r4, _080FDA08  @ =0x00000AB2
	add r0, r6, r4
	ldrh r0, [r0]
	cmp r0, #24
	beq _080FDA10
	ldr r0, _080FDA0C  @ =0x00001663
	add r1, r6, r0
	mov r0, #6
	strb r0, [r1]
	b _080FDA1C
_080FD9D4:
	.4byte gUnknown_030031D2
_080FD9D8:
	.4byte gRam
_080FD9DC:
	.4byte 0x00000F02
_080FD9E0:
	.4byte 0x000016C5
_080FD9E4:
	.4byte 0x00000EF2
_080FD9E8:
	.4byte 0x00000EE2
_080FD9EC:
	.4byte 0x00000ED2
_080FD9F0:
	.4byte 0x00000FB2
_080FD9F4:
	.4byte 0x00001122
_080FD9F8:
	.4byte 0x00001052
_080FD9FC:
	.4byte 0x00001012
_080FDA00:
	.4byte 0x00001776
_080FDA04:
	.4byte 0x00000F62
_080FDA08:
	.4byte 0x00000AB2
_080FDA0C:
	.4byte 0x00001663
_080FDA10:
	mov r0, #9
	strb r0, [r7]
	ldr r1, _080FDA64  @ =0x00001663
	add r0, r6, r1
	mov r2, r8
	strb r2, [r0]
_080FDA1C:
	bl sub_0812F9A8
	ldr r2, _080FDA68  @ =gRam
	ldr r4, _080FDA64  @ =0x00001663
	add r1, r2, r4
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080FDA6C  @ =0x00000ACE
	add r3, r2, r0
	ldr r1, _080FDA70  @ =0x000016C4
	add r0, r2, r1
	ldr r4, _080FDA74  @ =0x00000952
	add r1, r2, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mvn r0, r0
	add r0, r0, #114
	ldr r4, _080FDA78  @ =0x00000AC8
	add r1, r2, r4
	strh r0, [r1]
	ldr r1, _080FDA7C  @ =0x00000956
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #88
	sub r0, r0, r1
	add r4, r4, #2
	add r2, r2, r4
	strh r0, [r2]
	mov r0, #1
	strh r0, [r3]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080FDA64:
	.4byte 0x00001663
_080FDA68:
	.4byte gRam
_080FDA6C:
	.4byte 0x00000ACE
_080FDA70:
	.4byte 0x000016C4
_080FDA74:
	.4byte 0x00000952
_080FDA78:
	.4byte 0x00000AC8
_080FDA7C:
	.4byte 0x00000956
	THUMB_FUNC_END sub_080FD918

