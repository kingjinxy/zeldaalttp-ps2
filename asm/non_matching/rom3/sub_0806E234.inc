	THUMB_FUNC_START sub_0806E234
sub_0806E234: @ 0x0806E234
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _0806E318  @ =gRam
	ldr r0, _0806E31C  @ =0x00001663
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #6
	bne _0806E256
	ldr r3, _0806E320  @ =0x000009DA
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #100
	bne _0806E256
	mov r0, #0
	strb r0, [r2]
_0806E256:
	ldr r4, _0806E318  @ =gRam
	mov r0, #161
	lsl r0, r0, #4
	add r6, r4, r0
	ldrb r7, [r6]
	ldr r1, _0806E324  @ =0x00000B0A
	add r1, r1, r4
	mov r8, r1
	ldrh r1, [r1]
	mov r2, #4
	mov r9, r2
	mov r0, r9
	and r0, r0, r1
	mov r1, #48
	neg r1, r1
	cmp r0, #0
	beq _0806E27A
	mov r1, #48
_0806E27A:
	mov r3, #182
	lsl r3, r3, #5
	add r5, r4, r3
	ldrh r0, [r5]
	add r0, r0, r1
	strh r0, [r5]
	ldr r1, _0806E328  @ =gUnknown_0815353B
	ldr r2, _0806E32C  @ =0x00000B32
	add r0, r4, r2
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r6]
	bl sub_0806E0E0
	strb r7, [r6]
	mov r3, r8
	ldrh r1, [r3]
	mov r0, r9
	and r0, r0, r1
	mov r1, #48
	cmp r0, #0
	beq _0806E2AA
	sub r1, r1, #96
_0806E2AA:
	ldrh r0, [r5]
	add r0, r0, r1
	strh r0, [r5]
	ldr r1, _0806E330  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _0806E334  @ =0x00000958
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0806F2E4
	mov r3, #22
	ldr r0, _0806E338  @ =gUnknown_0814CAD4
	ldr r2, _0806E33C  @ =0x00000ABA
	add r1, r4, r2
	ldrh r2, [r1]
	add r0, r2, r0
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806E2EA
	mov r3, #23
	mov r1, #0
_0806E2EA:
	cmp r2, #2
	bne _0806E2F0
	mov r1, #3
_0806E2F0:
	ldr r2, _0806E340  @ =0x000009B4
	add r0, r4, r2
	strb r3, [r0]
	ldr r3, _0806E344  @ =0x000009B5
	add r0, r4, r3
	strb r1, [r0]
	bl sub_0806D598
	mov r0, r8
	ldrh r1, [r0]
	mov r0, r9
	and r0, r0, r1
	cmp r0, #0
	beq _0806E34C
	ldr r2, _0806E348  @ =0x000009DE
	add r1, r4, r2
	ldrh r0, [r1]
	sub r0, r0, #1
	b _0806E354
	.byte 0x00
	.byte 0x00
_0806E318:
	.4byte gRam
_0806E31C:
	.4byte 0x00001663
_0806E320:
	.4byte 0x000009DA
_0806E324:
	.4byte 0x00000B0A
_0806E328:
	.4byte gUnknown_0815353B
_0806E32C:
	.4byte 0x00000B32
_0806E330:
	.4byte 0x00000952
_0806E334:
	.4byte 0x00000958
_0806E338:
	.4byte gUnknown_0814CAD4
_0806E33C:
	.4byte 0x00000ABA
_0806E340:
	.4byte 0x000009B4
_0806E344:
	.4byte 0x000009B5
_0806E348:
	.4byte 0x000009DE
_0806E34C:
	ldr r3, _0806E390  @ =0x000009DE
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
_0806E354:
	strh r0, [r1]
	ldr r4, _0806E394  @ =gRam
	ldr r0, _0806E398  @ =0x00000B0C
	add r1, r4, r0
	mov r0, #24
	strh r0, [r1]
	ldr r2, _0806E39C  @ =0x00000B48
	add r1, r4, r2
	mov r0, #1
	strh r0, [r1]
	ldr r3, _0806E3A0  @ =0x00000504
	add r1, r4, r3
	mov r0, #70
	bl sub_0812A324
	bl sub_0806FE5C
	bl sub_08079338
	ldr r0, _0806E3A4  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0806E390:
	.4byte 0x000009DE
_0806E394:
	.4byte gRam
_0806E398:
	.4byte 0x00000B0C
_0806E39C:
	.4byte 0x00000B48
_0806E3A0:
	.4byte 0x00000504
_0806E3A4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E234

