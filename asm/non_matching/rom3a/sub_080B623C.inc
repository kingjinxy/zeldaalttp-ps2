	THUMB_FUNC_START sub_080B623C
sub_080B623C: @ 0x080B623C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r2, _080B6358  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r0, [r0]
	mov r3, sp
	strb r0, [r3, #4]
	ldr r7, _080B635C  @ =0x00000969
	add r7, r7, r2
	mov r12, r7
	strb r0, [r7]
	add r1, r1, #252
	add r0, r2, r1
	ldrh r6, [r0]
	ldr r3, _080B6360  @ =0x00000965
	add r5, r2, r3
	strb r6, [r5]
	mov r7, #0
	mov r8, r7
	ldr r3, _080B6364  @ =gUnknown_0816F702
	ldr r1, _080B6368  @ =gUnknown_03002CE2
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldrb r0, [r0]
	lsr r0, r0, #4
	ldr r7, _080B636C  @ =0x00000964
	add r4, r2, r7
	strb r0, [r4]
	mov r0, #15
	and r0, r0, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	add r0, r0, r1
	mov r9, r2
	mov r10, r3
	cmp r0, #1
	beq _080B62AA
	mov r1, sp
	ldrb r0, [r1, #4]
	add r0, r0, #2
	mov r2, r12
	strb r0, [r2]
	sub r0, r6, #1
	strb r0, [r5]
	mov r3, #1
	mov r8, r3
_080B62AA:
	mov r7, r8
	strb r7, [r4]
	add r7, r4, #0
	ldr r0, _080B6370  @ =0x00000961
	add r0, r0, r9
	mov r8, r0
	ldr r6, _080B6374  @ =0x00000979
	add r6, r6, r9
	ldr r0, _080B6378  @ =gUnknown_0816F0E8
	ldrb r0, [r0]
	mov r1, sp
	strb r0, [r1]
_080B62C2:
	mov r0, #0
	ldrsb r0, [r7, r0]
	ldr r2, _080B6358  @ =gRam
	ldr r3, _080B637C  @ =0x0000097C
	add r1, r2, r3
	add r0, r0, r1
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r2, _080B6368  @ =gUnknown_03002CE2
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r4, r0, #1
	ldr r3, _080B6364  @ =gUnknown_0816F702
	add r0, r4, r3
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	mov r0, r8
	strb r3, [r0]
	ldrb r0, [r5]
	add r2, r3, r0
	strb r2, [r6]
	mov r0, r8
	mov r1, #0
	ldrsb r1, [r0, r1]
	mov r0, #4
	sub r0, r0, r1
	cmp r0, #0
	blt _080B631A
	add r0, r2, #4
	sub r2, r0, r3
	strb r2, [r6]
	mov r1, r10
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r1, r0, #4
	sub r0, r1, #4
	cmp r0, #0
	blt _080B631A
	sub r0, r0, r2
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r6]
_080B631A:
	mov r2, r12
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B62C2
	ldr r0, _080B6380  @ =0x00000996
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080B6346
	bl sub_080B60DC
_080B6346:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6358:
	.4byte gRam
_080B635C:
	.4byte 0x00000969
_080B6360:
	.4byte 0x00000965
_080B6364:
	.4byte gUnknown_0816F702
_080B6368:
	.4byte gUnknown_03002CE2
_080B636C:
	.4byte 0x00000964
_080B6370:
	.4byte 0x00000961
_080B6374:
	.4byte 0x00000979
_080B6378:
	.4byte gUnknown_0816F0E8
_080B637C:
	.4byte 0x0000097C
_080B6380:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080B623C

