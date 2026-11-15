	THUMB_FUNC_START sub_080BD2F0
sub_080BD2F0: @ 0x080BD2F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r4, _080BD404  @ =gRam
	ldr r0, _080BD408  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	str r1, [sp]
	ldr r2, _080BD40C  @ =0x000016C4
	add r1, r4, r2
	ldrh r0, [r1]
	str r0, [sp, #4]
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldrh r0, [r2]
	str r0, [sp, #8]
	mov r3, #0
	mov r0, #188
	lsl r0, r0, #1
	strh r0, [r1]
	mov r0, #128
	strh r0, [r2]
	strb r3, [r5]
	bl sub_080CE350
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r5]
	mov r6, #15
	add r7, r4, #0
	ldr r2, _080BD410  @ =0x00000FA2
	add r2, r2, r7
	mov r10, r2
	mov r9, r5
_080BD33C:
	ldr r1, _080BD414  @ =0x00000FF2
	add r0, r7, r1
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BD3C6
	ldr r2, _080BD418  @ =0x00000FD2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BD35A
	sub r0, r0, #1
	strb r0, [r1]
_080BD35A:
	ldr r1, _080BD41C  @ =0x00000FE2
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BD36A
	sub r0, r0, #1
	strb r0, [r1]
_080BD36A:
	ldr r2, _080BD420  @ =0x000010E2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BD37A
	sub r0, r0, #1
	strb r0, [r1]
_080BD37A:
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r1, _080BD424  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BD428  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r9
	ldrb r5, [r0]
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r9
	strb r5, [r0]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BD3C6
	mov r2, r8
	strb r0, [r2]
_080BD3C6:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BD33C
	ldr r4, _080BD404  @ =gRam
	ldr r0, _080BD408  @ =0x000009AD
	add r5, r4, r0
	mov r0, #0
	strb r0, [r5]
	bl sub_080CE324
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r5]
	ldr r2, _080BD40C  @ =0x000016C4
	add r0, r4, r2
	mov r1, sp
	ldrh r1, [r1, #4]
	strh r1, [r0]
	sub r2, r2, #4
	add r4, r4, r2
	mov r0, sp
	ldrh r0, [r0, #8]
	strh r0, [r4]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BD404:
	.4byte gRam
_080BD408:
	.4byte 0x000009AD
_080BD40C:
	.4byte 0x000016C4
_080BD410:
	.4byte 0x00000FA2
_080BD414:
	.4byte 0x00000FF2
_080BD418:
	.4byte 0x00000FD2
_080BD41C:
	.4byte 0x00000FE2
_080BD420:
	.4byte 0x000010E2
_080BD424:
	.4byte 0x00001012
_080BD428:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BD2F0

