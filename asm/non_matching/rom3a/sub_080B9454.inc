	THUMB_FUNC_START sub_080B9454
sub_080B9454: @ 0x080B9454
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	ldr r1, _080B9550  @ =gUnknown_08170DEC
	lsr r0, r0, #25
	lsl r2, r0, #2
	add r1, r2, r1
	ldr r1, [r1]
	str r1, [sp]
	ldr r1, _080B9554  @ =gUnknown_08170E84
	add r2, r2, r1
	ldr r2, [r2]
	str r2, [sp, #4]
	ldr r1, _080B9558  @ =gUnknown_08170F1C
	add r0, r0, r1
	ldrb r4, [r0]
	ldr r6, _080B955C  @ =gRam
	ldr r0, _080B9560  @ =0x000015FC
	add r0, r0, r6
	mov r10, r0
	mov r1, #255
	lsl r1, r1, #8
	mov r9, r1
	mov r2, #255
	mov r8, r2
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r6
	mov r12, r3
_080B9496:
	ldr r7, _080B9564  @ =gUnknown_0300382E
	ldrh r0, [r7]
	ldr r1, _080B9568  @ =0x0000FFFF
	orr r0, r0, r1
	strh r0, [r7]
	mov r2, r10
	ldrh r0, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	ldr r3, _080B956C  @ =gUnknown_03002CE0
	ldrh r2, [r3]
	lsl r0, r2, #17
	lsr r0, r0, #16
	add r1, r0, #0
	mov r7, r8
	and r1, r1, r7
	lsl r1, r1, #8
	mov r3, r9
	and r0, r0, r3
	lsr r0, r0, #8
	add r1, r1, r0
	mov r7, #240
	lsl r7, r7, #4
	add r5, r7, #0
	lsl r3, r4, #24
	asr r3, r3, #24
	lsl r4, r3, #1
	ldr r7, [sp]
	add r0, r4, r7
	and r1, r1, r5
	ldrh r0, [r0]
	add r1, r1, r0
	mov r0, r12
	strh r1, [r0]
	lsl r2, r2, #16
	lsr r2, r2, #18
	add r0, r2, #0
	mov r1, r8
	and r0, r0, r1
	lsl r0, r0, #8
	mov r7, r9
	and r2, r2, r7
	lsr r2, r2, #8
	add r0, r0, r2
	mov r2, #224
	lsl r2, r2, #4
	add r1, r2, #0
	ldr r7, [sp, #4]
	add r4, r4, r7
	and r0, r0, r1
	ldrh r4, [r4]
	add r0, r0, r4
	ldr r1, _080B9570  @ =gUnknown_03002B94
	strh r0, [r1]
	add r2, r2, #226
	add r0, r6, r2
	add r0, r3, r0
	mov r7, r12
	ldrb r1, [r7]
	strb r1, [r0]
	ldr r0, _080B9574  @ =0x00000F02
	add r1, r6, r0
	add r1, r3, r1
	ldr r2, _080B9578  @ =0x00000961
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r7, _080B957C  @ =0x00000ED2
	add r0, r6, r7
	add r0, r3, r0
	ldr r2, _080B9570  @ =gUnknown_03002B94
	ldrb r1, [r2]
	strb r1, [r0]
	add r7, r7, #32
	add r1, r6, r7
	add r1, r3, r1
	ldr r2, _080B9580  @ =0x00000965
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	sub r3, r3, #1
	lsl r3, r3, #24
	lsr r4, r3, #24
	cmp r3, #0
	bge _080B9496
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B9550:
	.4byte gUnknown_08170DEC
_080B9554:
	.4byte gUnknown_08170E84
_080B9558:
	.4byte gUnknown_08170F1C
_080B955C:
	.4byte gRam
_080B9560:
	.4byte 0x000015FC
_080B9564:
	.4byte gUnknown_0300382E
_080B9568:
	.4byte 0x0000FFFF
_080B956C:
	.4byte gUnknown_03002CE0
_080B9570:
	.4byte gUnknown_03002B94
_080B9574:
	.4byte 0x00000F02
_080B9578:
	.4byte 0x00000961
_080B957C:
	.4byte 0x00000ED2
_080B9580:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080B9454

