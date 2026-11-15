	THUMB_FUNC_START sub_080D347C
sub_080D347C: @ 0x080D347C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	mov r0, #26
	add r1, r4, #0
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	blt _080D34DE
	ldr r2, _080D3504  @ =gRam
	ldr r1, _080D3508  @ =0x00000EE2
	add r0, r2, r1
	add r0, r3, r0
	ldr r5, _080D350C  @ =0x000016C4
	add r1, r2, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D3510  @ =0x00000F02
	add r0, r2, r1
	add r0, r3, r0
	add r5, r5, #1
	add r1, r2, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D3514  @ =0x00000ED2
	add r0, r2, r1
	add r0, r3, r0
	sub r5, r5, #5
	add r1, r2, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D3518  @ =0x00000EF2
	add r0, r2, r1
	add r0, r3, r0
	add r5, r5, #1
	add r1, r2, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D351C  @ =0x00001052
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #3
	strb r1, [r0]
	ldr r5, _080D3520  @ =0x00001172
	add r2, r2, r5
	add r2, r3, r2
	strb r1, [r2]
_080D34DE:
	ldr r1, _080D3504  @ =gRam
	ldr r0, _080D3524  @ =0x00000F52
	add r2, r1, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r2]
	ldr r2, _080D3528  @ =0x00001663
	add r0, r1, r2
	strb r3, [r0]
	ldr r5, _080D352C  @ =0x00000F92
	add r1, r1, r5
	add r1, r4, r1
	mov r0, #4
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D3504:
	.4byte gRam
_080D3508:
	.4byte 0x00000EE2
_080D350C:
	.4byte 0x000016C4
_080D3510:
	.4byte 0x00000F02
_080D3514:
	.4byte 0x00000ED2
_080D3518:
	.4byte 0x00000EF2
_080D351C:
	.4byte 0x00001052
_080D3520:
	.4byte 0x00001172
_080D3524:
	.4byte 0x00000F52
_080D3528:
	.4byte 0x00001663
_080D352C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D347C

