	THUMB_FUNC_START sub_0809A338
sub_0809A338: @ 0x0809A338
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _0809A46C  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r1, r0
	ldrb r2, [r3]
	ldr r4, _0809A470  @ =0x000016D8
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _0809A474  @ =0x000016C1
	add r0, r1, r2
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	strb r2, [r0]
	ldrh r0, [r3]
	mov r8, r0
	add r4, r1, #0
	ldr r1, _0809A478  @ =0x000017D0
	add r7, r4, r1
	add r5, r3, #0
_0809A366:
	ldrh r0, [r5]
	sub r0, r0, #16
	strh r0, [r5]
	ldr r2, _0809A47C  @ =0x00001726
	add r6, r4, r2
	ldrb r0, [r6]
	lsl r0, r0, #25
	lsr r2, r0, #24
	add r0, r2, #0
	bl sub_0809EA40
	ldr r1, _0809A480  @ =0x000017D2
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809A484  @ =0x000017EC
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	ldrb r0, [r7]
	orr r1, r1, r0
	mov r0, #7
	and r1, r1, r0
	cmp r1, #7
	bne _0809A366
	add r5, r4, #0
	ldr r4, _0809A478  @ =0x000017D0
	add r0, r5, r4
	ldrh r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _0809A3F0
	ldr r1, _0809A488  @ =0x00001702
	add r0, r5, r1
	mov r4, #0
	mov r1, #1
	strb r1, [r0]
	add r2, r2, #9
	add r0, r5, r2
	strb r4, [r0]
	sub r2, r2, #29
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0809A48C  @ =0x000016CC
	add r0, r5, r1
	ldrb r1, [r0]
	sub r2, r2, #6
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0809A490  @ =0x00001750
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #17
	add r0, r5, r2
	strb r4, [r0]
	add r1, r1, #102
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08092B0C
	ldr r2, _0809A494  @ =0x00001808
	add r0, r5, r2
	strb r4, [r0]
	ldr r1, _0809A498  @ =0x00001719
	add r0, r5, r1
	strb r4, [r0]
_0809A3F0:
	mov r2, #182
	lsl r2, r2, #5
	add r3, r5, r2
	ldrh r1, [r3]
	sub r1, r1, #16
	mov r4, #0
	ldr r0, _0809A470  @ =0x000016D8
	add r2, r5, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	strh r0, [r2]
	mov r1, r8
	strh r1, [r3]
	ldrb r0, [r2]
	lsr r2, r0, #3
	ldr r0, _0809A49C  @ =gUnknown_08167ED9
	add r0, r2, r0
	ldrb r1, [r0]
	ldrb r0, [r6]
	cmp r0, #0
	bne _0809A420
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0809A420:
	add r0, r6, #0
	sub r0, r0, #89
	strb r1, [r0]
	add r0, r0, #1
	strb r4, [r0]
	ldr r0, _0809A4A0  @ =gUnknown_08167EF9
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r6, #0
	sub r3, r3, #87
	strb r1, [r3]
	ldrb r0, [r0]
	strh r0, [r6, #38]
	add r0, r6, #0
	sub r0, r0, #94
	strb r4, [r0]
	add r0, r0, #1
	strb r4, [r0]
	ldr r0, _0809A4A4  @ =gUnknown_08167F19
	add r0, r2, r0
	ldrb r0, [r0]
	add r1, r6, #0
	sub r1, r1, #46
	strb r0, [r1]
	add r1, r1, #10
	mov r0, #2
	strb r0, [r1]
	add r0, r6, #0
	add r0, r0, #203
	strb r4, [r0]
	add r1, r1, #22
	mov r0, #6
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0809A46C:
	.4byte gRam
_0809A470:
	.4byte 0x000016D8
_0809A474:
	.4byte 0x000016C1
_0809A478:
	.4byte 0x000017D0
_0809A47C:
	.4byte 0x00001726
_0809A480:
	.4byte 0x000017D2
_0809A484:
	.4byte 0x000017EC
_0809A488:
	.4byte 0x00001702
_0809A48C:
	.4byte 0x000016CC
_0809A490:
	.4byte 0x00001750
_0809A494:
	.4byte 0x00001808
_0809A498:
	.4byte 0x00001719
_0809A49C:
	.4byte gUnknown_08167ED9
_0809A4A0:
	.4byte gUnknown_08167EF9
_0809A4A4:
	.4byte gUnknown_08167F19
	THUMB_FUNC_END sub_0809A338

