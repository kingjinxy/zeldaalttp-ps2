	THUMB_FUNC_START sub_08103598
sub_08103598: @ 0x08103598
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _08103624  @ =gRam
	ldr r1, _08103628  @ =0x00001052
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	and r1, r1, r0
	ldr r2, _0810362C  @ =0x00000FD2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _0810361E
	mov r0, #164
	add r1, r5, #0
	bl sub_080CA538
	add r2, r0, #0
	cmp r2, #0
	blt _0810361E
	ldr r3, _08103630  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldr r3, _08103634  @ =0x000016C4
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103638  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #1
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810363C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	sub r3, r3, #5
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103640  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #1
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103644  @ =0x00001142
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #224
	strb r1, [r0]
	ldr r3, _08103648  @ =0x00000F82
	add r0, r4, r3
	add r0, r2, r0
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
_0810361E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08103624:
	.4byte gRam
_08103628:
	.4byte 0x00001052
_0810362C:
	.4byte 0x00000FD2
_08103630:
	.4byte 0x00000EE2
_08103634:
	.4byte 0x000016C4
_08103638:
	.4byte 0x00000F02
_0810363C:
	.4byte 0x00000ED2
_08103640:
	.4byte 0x00000EF2
_08103644:
	.4byte 0x00001142
_08103648:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_08103598

