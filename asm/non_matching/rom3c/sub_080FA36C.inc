	THUMB_FUNC_START sub_080FA36C
sub_080FA36C: @ 0x080FA36C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080FACFC
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FA38A
	b _080FA522
_080FA38A:
	ldr r2, _080FA4C0  @ =gRam
	ldr r1, _080FA4C4  @ =0x00001142
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FA3E2
	ldr r3, _080FA4C8  @ =0x00001622
	add r0, r2, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080FA4CC  @ =0xFFFFF368
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #207
	bhi _080FA3E2
	ldr r1, _080FA4D0  @ =0x00001624
	add r0, r2, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080FA4D4  @ =0xFFFFF95B
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #207
	bhi _080FA3E2
	ldr r3, _080FA4D8  @ =0x00000961
	add r1, r2, r3
	mov r0, #255
	strb r0, [r1]
	ldr r0, _080FA4DC  @ =0x00000964
	add r1, r2, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
_080FA3E2:
	ldr r5, _080FA4C0  @ =gRam
	ldr r1, _080FA4D8  @ =0x00000961
	add r1, r1, r5
	mov r8, r1
	ldr r2, _080FA4E0  @ =0x00000965
	add r0, r5, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	beq _080FA402
	ldr r3, _080FA4E4  @ =0x00000FA2
	add r0, r5, r3
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_080FA402:
	ldr r1, _080FA4E8  @ =0x00001152
	add r0, r5, r1
	add r4, r6, r0
	ldrb r0, [r4]
	sub r0, r0, #2
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C99DC
	ldr r2, _080FA4C4  @ =0x00001142
	add r0, r5, r2
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FA436
	mov r0, #0
	strb r0, [r2]
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	mov r0, #16
	orr r1, r1, r0
	strb r1, [r4]
_080FA436:
	ldr r3, _080FA4EC  @ =0x00000968
	add r1, r5, r3
	mov r0, #245
	strb r0, [r1]
	ldr r0, _080FA4F0  @ =0x00000969
	add r1, r5, r0
	mov r0, #12
	strb r0, [r1]
	ldr r2, _080FA4F4  @ =0x0000096C
	add r1, r5, r2
	mov r0, #254
	strb r0, [r1]
	add r3, r3, #5
	add r1, r5, r3
	mov r0, #6
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r1, _080FA4F8  @ =0x00000F12
	add r0, r5, r1
	add r7, r6, r0
	mov r2, #150
	lsl r2, r2, #4
	add r3, r5, r2
	ldrb r0, [r3]
	lsl r0, r0, #1
	strb r0, [r7]
	add r1, r1, #16
	add r0, r5, r1
	add r4, r6, r0
	mov r2, r8
	ldrb r0, [r2]
	lsl r0, r0, #1
	strb r0, [r4]
	mov r0, #188
	lsl r0, r0, #5
	add r2, r5, r0
	ldrh r1, [r2]
	mov r0, #252
	and r0, r0, r1
	strh r0, [r2]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r0, #0
	bge _080FA49A
	neg r0, r1
	strb r0, [r3]
_080FA49A:
	mov r2, r8
	ldrb r1, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _080FA4AA
	neg r0, r1
	strb r0, [r2]
_080FA4AA:
	mov r1, r8
	ldrb r0, [r1]
	ldrb r3, [r3]
	cmp r0, r3
	bcs _080FA4FC
	ldrb r0, [r7]
	mov r1, #1
	lsr r2, r0, #7
	eor r2, r2, r1
	b _080FA504
	.byte 0x00
	.byte 0x00
_080FA4C0:
	.4byte gRam
_080FA4C4:
	.4byte 0x00001142
_080FA4C8:
	.4byte 0x00001622
_080FA4CC:
	.4byte 0xFFFFF368
_080FA4D0:
	.4byte 0x00001624
_080FA4D4:
	.4byte 0xFFFFF95B
_080FA4D8:
	.4byte 0x00000961
_080FA4DC:
	.4byte 0x00000964
_080FA4E0:
	.4byte 0x00000965
_080FA4E4:
	.4byte 0x00000FA2
_080FA4E8:
	.4byte 0x00001152
_080FA4EC:
	.4byte 0x00000968
_080FA4F0:
	.4byte 0x00000969
_080FA4F4:
	.4byte 0x0000096C
_080FA4F8:
	.4byte 0x00000F12
_080FA4FC:
	ldrb r0, [r4]
	lsr r2, r0, #7
	mov r0, #3
	eor r2, r2, r0
_080FA504:
	ldr r1, _080FA52C  @ =gRam
	ldr r3, _080FA530  @ =0x00000FB2
	add r0, r1, r3
	add r0, r6, r0
	strb r2, [r0]
	ldr r0, _080FA534  @ =0x00000F92
	add r2, r1, r0
	add r2, r6, r2
	ldr r3, _080FA538  @ =0x00000996
	add r1, r1, r3
	ldrb r0, [r1]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080FA522:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080FA52C:
	.4byte gRam
_080FA530:
	.4byte 0x00000FB2
_080FA534:
	.4byte 0x00000F92
_080FA538:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080FA36C

